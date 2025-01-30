// Copyright 2017 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the “License”); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an “AS IS” BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.


//`include "axi_bus.sv"
`include "axi_master_if.sv"


`ifndef AXI_BUS_SV
`define AXI_BUS_SV

`include "config.sv"

`define OKAY   2'b00


module core2axi_wrap
#(
    parameter AXI_ADDR_WIDTH   = 32,
    parameter AXI_DATA_WIDTH   = 32,
    parameter AXI_USER_WIDTH   = 6,
    parameter AXI_ID_WIDTH     = 6,
    parameter AXI_STRB_WIDTH   = AXI_DATA_WIDTH/8,
    parameter REGISTERED_GRANT = "FALSE"
)
(
    input logic                       clk_i,
    input logic                       rst_ni,

    input  logic                      data_req_i,
    output logic                      data_gnt_o,
    output logic                      data_rvalid_o,
    input  logic [AXI_ADDR_WIDTH-1:0] data_addr_i,
    input  logic                      data_we_i,
    input  logic [3:0]                data_be_i,
    output logic [31:0]               data_rdata_o,
    input  logic [31:0]               data_wdata_i

    //AXI_BUS.Master                    master
);

 logic [AXI_ADDR_WIDTH-1:0] master_aw_addr;
 logic [2:0]                master_aw_prot;
 logic [3:0]                master_aw_region;
 logic [7:0]                master_aw_len;
 logic [2:0]                master_aw_size;
 logic [1:0]                master_aw_burst;
 logic                      master_aw_lock;
 logic [3:0]                master_aw_cache;
 logic [3:0]                master_aw_qos;
 logic [AXI_ID_WIDTH-1:0]   master_aw_id;
 logic [AXI_USER_WIDTH-1:0] master_aw_user;
 logic                      master_aw_ready;
 logic                      master_aw_valid;

 logic [AXI_ADDR_WIDTH-1:0] master_ar_addr;
 logic [2:0]                master_ar_prot;
 logic [3:0]                master_ar_region;
 logic [7:0]                master_ar_len;
 logic [2:0]                master_ar_size;
 logic [1:0]                master_ar_burst;
 logic                      master_ar_lock;
 logic [3:0]                master_ar_cache;
 logic [3:0]                master_ar_qos;
 logic [AXI_ID_WIDTH-1:0]   master_ar_id;
 logic [AXI_USER_WIDTH-1:0] master_ar_user;
 logic                      master_ar_ready;
 logic                      master_ar_valid;

 logic                      master_w_valid;
 logic [AXI_DATA_WIDTH-1:0] master_w_data;
 logic [AXI_STRB_WIDTH-1:0] master_w_strb;
 logic [AXI_USER_WIDTH-1:0] master_w_user;
 logic                      master_w_last;
 logic                      master_w_ready;
 logic [AXI_DATA_WIDTH-1:0] master_r_data;
 logic [1:0]                master_r_resp;
 logic                      master_r_last;
 logic [AXI_ID_WIDTH-1:0]   master_r_id;
 logic [AXI_USER_WIDTH-1:0] master_r_user;
 logic                      master_r_ready;
 logic                      master_r_valid;

 logic [1:0]                master_b_resp;
 logic [AXI_ID_WIDTH-1:0]   master_b_id;
 logic [AXI_USER_WIDTH-1:0] master_b_user;
 logic                      master_b_ready;
 logic                      master_b_valid;

/*verilator lint_off WIDTH */

axi_master_if AXI_CORE_MASTER_IF(
.master_aw_addr			(master_aw_addr),
.master_aw_prot			(master_aw_prot),
.master_aw_region		(master_aw_region),
.master_aw_len			(master_aw_len),
.master_aw_size			(master_aw_size),
.master_aw_burst		(master_aw_burst),
.master_aw_lock			(master_aw_lock),
.master_aw_cache		(master_aw_cache),
.master_aw_qos			(master_aw_qos),
.master_aw_id			(master_aw_id),
.master_aw_user			(master_aw_user),
.master_aw_ready		(master_aw_ready),
.master_aw_valid		(master_aw_valid),

.master_ar_addr			(master_ar_addr),
.master_ar_prot			(master_ar_prot),
.master_ar_region		(master_ar_region),
.master_ar_len			(master_ar_len),
.master_ar_size			(master_ar_size),
.master_ar_burst		(master_ar_burst),
.master_ar_lock			(master_ar_lock),
.master_ar_cache		(master_ar_cache),
.master_ar_qos			(master_ar_qos),
.master_ar_id			(master_ar_id),
.master_ar_user			(master_ar_user),
.master_ar_ready		(master_ar_ready),
.master_ar_valid		(master_ar_valid),

.master_w_valid			(master_w_valid),
.master_w_data			(master_w_data),
.master_w_strb			(master_w_strb),
.master_w_user			(master_w_user),
.master_w_last			(master_w_last),
.master_w_ready			(master_w_ready),
.master_r_data			(master_r_data),
.master_r_resp			(master_r_resp),
.master_r_last			(master_r_last),
.master_r_id			(master_r_id),
.master_r_user			(master_r_user),
.master_r_ready			(master_r_ready),
.master_r_valid			(master_r_valid),

.master_b_resp			(master_b_resp),
.master_b_id			(master_b_id),
.master_b_user			(master_b_user),
.master_b_ready			(master_b_ready),
.master_b_valid			(master_b_valid)
);



  //********************************************************
  //************** AXI2APB WRAPER **************************
  //********************************************************
  core2axi
  #(
    .AXI4_ADDRESS_WIDTH ( AXI_ADDR_WIDTH   ),
    .AXI4_RDATA_WIDTH   ( AXI_DATA_WIDTH   ),
    .AXI4_WDATA_WIDTH   ( AXI_DATA_WIDTH   ),
    .AXI4_ID_WIDTH      ( AXI_ID_WIDTH     ),
    .AXI4_USER_WIDTH    ( AXI_USER_WIDTH   ),
    .REGISTERED_GRANT   ( REGISTERED_GRANT )
  )
  core2axi_i
  (
    .clk_i         ( clk_i               ),
    .rst_ni        ( rst_ni              ),

    .data_req_i    ( data_req_i          ),
    .data_gnt_o    ( data_gnt_o          ),
    .data_rvalid_o ( data_rvalid_o       ),
    .data_addr_i   ( data_addr_i         ),
    .data_we_i     ( data_we_i           ),
    .data_be_i     ( data_be_i           ),
    .data_rdata_o  ( data_rdata_o        ),
    .data_wdata_i  ( data_wdata_i        ),

    .aw_id_o       ( master_aw_id        ),
    .aw_addr_o     ( master_aw_addr      ),
    .aw_len_o      ( master_aw_len       ),
    .aw_size_o     ( master_aw_size      ),
    .aw_burst_o    ( master_aw_burst     ),
    .aw_lock_o     ( master_aw_lock      ),
    .aw_cache_o    ( master_aw_cache     ),
    .aw_prot_o     ( master_aw_prot      ),
    .aw_region_o   ( master_aw_region    ),
    .aw_user_o     ( master_aw_user      ),
    .aw_qos_o      ( master_aw_qos       ),
    .aw_valid_o    ( master_aw_valid     ),
    .aw_ready_i    ( master_aw_ready     ),

    .w_data_o      ( master_w_data       ),
    .w_strb_o      ( master_w_strb       ),
    .w_last_o      ( master_w_last       ),
    .w_user_o      ( master_w_user       ),
    .w_valid_o     ( master_w_valid      ),
    .w_ready_i     ( master_w_ready      ),

    .b_id_i        ( master_b_id         ),
    .b_resp_i      ( master_b_resp       ),
    .b_valid_i     ( master_b_valid      ),
    .b_user_i      ( master_b_user       ),
    .b_ready_o     ( master_b_ready      ),

    .ar_id_o       ( master_ar_id        ),
    .ar_addr_o     ( master_ar_addr      ),
    .ar_len_o      ( master_ar_len       ),
    .ar_size_o     ( master_ar_size      ),
    .ar_burst_o    ( master_ar_burst     ),
    .ar_lock_o     ( master_ar_lock      ),
    .ar_cache_o    ( master_ar_cache     ),
    .ar_prot_o     ( master_ar_prot      ),
    .ar_region_o   ( master_ar_region    ),
    .ar_user_o     ( master_ar_user      ),
    .ar_qos_o      ( master_ar_qos       ),
    .ar_valid_o    ( master_ar_valid     ),
    .ar_ready_i    ( master_ar_ready     ),

    .r_id_i        ( master_r_id         ),
    .r_data_i      ( master_r_data       ),
    .r_resp_i      ( master_r_resp       ),
    .r_last_i      ( master_r_last       ),
    .r_user_i      ( master_r_user       ),
    .r_valid_i     ( master_r_valid      ),
    .r_ready_o     ( master_r_ready      )
  );

endmodule
`endif
