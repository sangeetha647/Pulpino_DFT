// Copyright 2017 ETH Zurich and University of Bologna.
/* verilator lint_off PINMISSING *//* verilator lint_off PINMISSING *//*
verilator lint_off PINMISSING *//* verilator lint_off PINMISSING *//* verilator lint_off PINMISSING */// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the “License”); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an “AS IS” BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

`include "axi_slave_if.sv"
`include "axi_master_if.sv"


`ifndef AXI_BUS_SV
`define AXI_BUS_SV

`include "config.sv"

`define OKAY   2'b00

module axi_slice_wrap
#(
    parameter AXI_ADDR_WIDTH = 32,
    parameter AXI_DATA_WIDTH = 64,
    parameter AXI_USER_WIDTH = 6,
    parameter AXI_ID_WIDTH   = 6,
    parameter AXI_STRB_WIDTH = AXI_DATA_WIDTH/8,
    parameter SLICE_DEPTH    = 2
)
(
    input logic    clk_i,
    input logic    rst_ni,
    input logic    test_en_i

    //AXI_BUS.Slave  axi_slave,
    //AXI_BUS.Master axi_master
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

 // axi slave signals
 logic [AXI_ADDR_WIDTH-1:0] slave_aw_addr;
 logic [2:0]                slave_aw_prot;
 logic [3:0]                slave_aw_region;
 logic [7:0]                slave_aw_len;
 logic [2:0]                slave_aw_size;
 logic [1:0]                slave_aw_burst;
 logic                      slave_aw_lock;
 logic [3:0]                slave_aw_cache;
 logic [3:0]                slave_aw_qos;
 logic [AXI_ID_WIDTH-1:0]   slave_aw_id;
 logic [AXI_USER_WIDTH-1:0] slave_aw_user;
 logic                      slave_aw_ready;
 logic                      slave_aw_valid;

 logic [AXI_ADDR_WIDTH-1:0] slave_ar_addr;
 logic [2:0]                slave_ar_prot;
 logic [3:0]                slave_ar_region;
 logic [7:0]                slave_ar_len;
 logic [2:0]                slave_ar_size;
 logic [1:0]                slave_ar_burst;
 logic                      slave_ar_lock;
 logic [3:0]                slave_ar_cache;
 logic [3:0]                slave_ar_qos;
 logic [AXI_ID_WIDTH-1:0]   slave_ar_id;
 logic [AXI_USER_WIDTH-1:0] slave_ar_user;
 logic                      slave_ar_ready;
 logic                      slave_ar_valid;

 logic                      slave_w_valid;
 logic [AXI_DATA_WIDTH-1:0] slave_w_data;
 logic [AXI_STRB_WIDTH-1:0] slave_w_strb;
 logic [AXI_USER_WIDTH-1:0] slave_w_user;
 logic                      slave_w_last;
 logic                      slave_w_ready;
 logic [AXI_DATA_WIDTH-1:0] slave_r_data;
 logic [1:0]                slave_r_resp;
 logic                      slave_r_last;
 logic [AXI_ID_WIDTH-1:0]   slave_r_id;
 logic [AXI_USER_WIDTH-1:0] slave_r_user;
 logic                      slave_r_ready;
 logic                      slave_r_valid;

 logic [1:0]                slave_b_resp;
 logic [AXI_ID_WIDTH-1:0]   slave_b_id;
 logic [AXI_USER_WIDTH-1:0] slave_b_user;
 logic                      slave_b_ready;
 logic                      slave_b_valid;

/* verilator lint_off WIDTH */

axi_slave_if AXI_SLICE_SLAVE_IF(
.slave_aw_addr			(slave_aw_addr),
.slave_aw_prot			(slave_aw_prot),
.slave_aw_region		(slave_aw_region),
.slave_aw_len			(slave_aw_len),
.slave_aw_size			(slave_aw_size),
.slave_aw_burst			(slave_aw_burst),
.slave_aw_lock			(slave_aw_lock),
.slave_aw_cache			(slave_aw_cache),
.slave_aw_qos			(slave_aw_qos),
.slave_aw_id			(slave_aw_id),
.slave_aw_user			(slave_aw_user),
.slave_aw_ready			(slave_aw_ready),
.slave_aw_valid			(slave_aw_valid),

.slave_ar_addr			(slave_ar_addr),
.slave_ar_prot			(slave_ar_prot),
.slave_ar_region		(slave_ar_region),
.slave_ar_len			(slave_ar_len),
.slave_ar_size			(slave_ar_size),
.slave_ar_burst			(slave_ar_burst),
.slave_ar_lock			(slave_ar_lock),
.slave_ar_cache			(slave_ar_cache),
.slave_ar_qos			(slave_ar_qos),
.slave_ar_id			(slave_ar_id),
.slave_ar_user			(slave_ar_user),
.slave_ar_ready			(slave_ar_ready),
.slave_ar_valid			(slave_ar_valid),

.slave_w_valid			(slave_w_valid),
.slave_w_data			(slave_w_data),
.slave_w_strb			(slave_w_strb),
.slave_w_user			(slave_w_user),
.slave_w_last			(slave_w_last),
.slave_w_ready			(slave_w_ready),
.slave_r_data			(slave_r_data),
.slave_r_resp			(slave_r_resp),
.slave_r_last			(slave_r_last),
.slave_r_id			(slave_r_id),
.slave_r_user			(slave_r_user),
.slave_r_ready			(slave_r_ready),
.slave_r_valid			(slave_r_valid),

.slave_b_resp			(slave_b_resp),
.slave_b_id			(slave_b_id),
.slave_b_user			(slave_b_user),
.slave_b_ready			(slave_b_ready),
.slave_b_valid			(slave_b_valid)
);



axi_master_if AXI_SLICE_MASTER_IF(
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



  generate
    if( SLICE_DEPTH > 1)
    begin : WITH_SLICE
      axi_slice
      #(
        .AXI_ADDR_WIDTH ( AXI_ADDR_WIDTH ),
        .AXI_DATA_WIDTH ( AXI_DATA_WIDTH ),
        .AXI_USER_WIDTH ( AXI_USER_WIDTH ),
        .AXI_ID_WIDTH   ( AXI_ID_WIDTH   ),
        .SLICE_DEPTH    ( SLICE_DEPTH    )
      )
      axi_slice_i
      (
        .clk_i                 ( clk_i                            ),
        .rst_ni                ( rst_ni                           ),
        .test_en_i             ( test_en_i                        ),

        .axi_slave_aw_valid_i  ( slave_aw_valid               ),
        .axi_slave_aw_addr_i   ( slave_aw_addr                ),
        .axi_slave_aw_prot_i   ( slave_aw_prot                ),
        .axi_slave_aw_region_i ( slave_aw_region              ),
        .axi_slave_aw_len_i    ( slave_aw_len                 ),
        .axi_slave_aw_size_i   ( slave_aw_size                ),
        .axi_slave_aw_burst_i  ( slave_aw_burst               ),
        .axi_slave_aw_lock_i   ( slave_aw_lock                ),
	.axi_slave_aw_atop_i   ( 		     	      ),
        .axi_slave_aw_cache_i  ( slave_aw_cache               ),
        .axi_slave_aw_qos_i    ( slave_aw_qos                 ),
        .axi_slave_aw_id_i     ( slave_aw_id[AXI_ID_WIDTH-1:0]),
        .axi_slave_aw_user_i   ( slave_aw_user                ),
        .axi_slave_aw_ready_o  ( slave_aw_ready               ),

        .axi_slave_ar_valid_i  ( slave_ar_valid               ),
        .axi_slave_ar_addr_i   ( slave_ar_addr                ),
        .axi_slave_ar_prot_i   ( slave_ar_prot                ),
        .axi_slave_ar_region_i ( slave_ar_region              ),
        .axi_slave_ar_len_i    ( slave_ar_len                 ),
        .axi_slave_ar_size_i   ( slave_ar_size                ),
        .axi_slave_ar_burst_i  ( slave_ar_burst               ),
        .axi_slave_ar_lock_i   ( slave_ar_lock                ),
        .axi_slave_ar_cache_i  ( slave_ar_cache               ),
        .axi_slave_ar_qos_i    ( slave_ar_qos                 ),
        .axi_slave_ar_id_i     ( slave_ar_id[AXI_ID_WIDTH-1:0]),
        .axi_slave_ar_user_i   ( slave_ar_user                ),
        .axi_slave_ar_ready_o  ( slave_ar_ready               ),

        .axi_slave_w_valid_i   ( slave_w_valid                ),
        .axi_slave_w_data_i    ( slave_w_data                 ),
        .axi_slave_w_strb_i    ( slave_w_strb                 ),
        .axi_slave_w_user_i    ( slave_w_user                 ),
        .axi_slave_w_last_i    ( slave_w_last                 ),
        .axi_slave_w_ready_o   ( slave_w_ready                ),

        .axi_slave_r_valid_o   ( slave_r_valid                ),
        .axi_slave_r_data_o    ( slave_r_data                 ),
        .axi_slave_r_resp_o    ( slave_r_resp                 ),
        .axi_slave_r_last_o    ( slave_r_last                 ),
        .axi_slave_r_id_o      ( slave_r_id[AXI_ID_WIDTH-1:0] ),
        .axi_slave_r_user_o    ( slave_r_user                 ),
        .axi_slave_r_ready_i   ( slave_r_ready                ),

        .axi_slave_b_valid_o   ( slave_b_valid                ),
        .axi_slave_b_resp_o    ( slave_b_resp                 ),
        .axi_slave_b_id_o      ( slave_b_id[AXI_ID_WIDTH-1:0] ),
        .axi_slave_b_user_o    ( slave_b_user                 ),
        .axi_slave_b_ready_i   ( slave_b_ready                ),

        .axi_master_aw_valid_o ( master_aw_valid               ),
        .axi_master_aw_addr_o  ( master_aw_addr                ),
        .axi_master_aw_prot_o  ( master_aw_prot                ),
        .axi_master_aw_region_o( master_aw_region              ),
        .axi_master_aw_len_o   ( master_aw_len                 ),
        .axi_master_aw_size_o  ( master_aw_size                ),
        .axi_master_aw_burst_o ( master_aw_burst               ),
        .axi_master_aw_lock_o  ( master_aw_lock                ),
        .axi_master_aw_cache_o ( master_aw_cache               ),
        .axi_master_aw_qos_o   ( master_aw_qos                 ),
        .axi_master_aw_id_o    ( master_aw_id[AXI_ID_WIDTH-1:0]),
        .axi_master_aw_user_o  ( master_aw_user                ),
        .axi_master_aw_ready_i ( master_aw_ready               ),

        .axi_master_ar_valid_o ( master_ar_valid               ),
        .axi_master_ar_addr_o  ( master_ar_addr                ),
        .axi_master_ar_prot_o  ( master_ar_prot                ),
        .axi_master_ar_region_o( master_ar_region              ),
        .axi_master_ar_len_o   ( master_ar_len                 ),
        .axi_master_ar_size_o  ( master_ar_size                ),
        .axi_master_ar_burst_o ( master_ar_burst               ),
        .axi_master_ar_lock_o  ( master_ar_lock                ),
        .axi_master_ar_cache_o ( master_ar_cache               ),
        .axi_master_ar_qos_o   ( master_ar_qos                 ),
        .axi_master_ar_id_o    ( master_ar_id[AXI_ID_WIDTH-1:0]),
        .axi_master_ar_user_o  ( master_ar_user                ),
        .axi_master_ar_ready_i ( master_ar_ready               ),

        .axi_master_w_valid_o  ( master_w_valid                ),
        .axi_master_w_data_o   ( master_w_data                 ),
        .axi_master_w_strb_o   ( master_w_strb                 ),
        .axi_master_w_user_o   ( master_w_user                 ),
        .axi_master_w_last_o   ( master_w_last                 ),
        .axi_master_w_ready_i  ( master_w_ready                ),

        .axi_master_r_valid_i  ( master_r_valid                ),
        .axi_master_r_data_i   ( master_r_data                 ),
        .axi_master_r_resp_i   ( master_r_resp                 ),
        .axi_master_r_last_i   ( master_r_last                 ),
        .axi_master_r_id_i     ( master_r_id[AXI_ID_WIDTH-1:0] ),
        .axi_master_r_user_i   ( master_r_user                 ),
        .axi_master_r_ready_o  ( master_r_ready                ),

        .axi_master_b_valid_i  ( master_b_valid                ),
        .axi_master_b_resp_i   ( master_b_resp                 ),
        .axi_master_b_id_i     ( master_b_id[AXI_ID_WIDTH-1:0] ),
        .axi_master_b_user_i   ( master_b_user                 ),
        .axi_master_b_ready_o  ( master_b_ready                )
      );
    end
    else
    begin : NO_SLICE
      assign master_aw_valid  =  slave_aw_valid;
      assign master_aw_addr   =  slave_aw_addr;
      assign master_aw_prot   =  slave_aw_prot;
      assign master_aw_region =  slave_aw_region;
      assign master_aw_len    =  slave_aw_len;
      assign master_aw_size   =  slave_aw_size;
      assign master_aw_burst  =  slave_aw_burst;
      assign master_aw_lock   =  slave_aw_lock;
      assign master_aw_cache  =  slave_aw_cache;
      assign master_aw_qos    =  slave_aw_qos;
      assign master_aw_id     =  slave_aw_id;
      assign master_aw_user   =  slave_aw_user;
      assign slave_aw_ready   =  master_aw_ready;

      assign master_ar_valid  =  slave_ar_valid;
      assign master_ar_addr   =  slave_ar_addr;
      assign master_ar_prot   =  slave_ar_prot;
      assign master_ar_region =  slave_ar_region;
      assign master_ar_len    =  slave_ar_len;
      assign master_ar_size   =  slave_ar_size;
      assign master_ar_burst  =  slave_ar_burst;
      assign master_ar_lock   =  slave_ar_lock;
      assign master_ar_cache  =  slave_ar_cache;
      assign master_ar_qos    =  slave_ar_qos;
      assign master_ar_id     =  slave_ar_id;
      assign master_ar_user   =  slave_ar_user;
      assign slave_ar_ready   =  master_ar_ready;

      assign master_w_valid   =  slave_w_valid;
      assign master_w_data    =  slave_w_data;
      assign master_w_strb    =  slave_w_strb;
      assign master_w_user    =  slave_w_user;
      assign master_w_last    =  slave_w_last;
      assign slave_w_ready    =  master_w_ready;

      assign slave_r_valid    =  master_r_valid;
      assign slave_r_data     =  master_r_data;
      assign slave_r_resp     =  master_r_resp;
      assign slave_r_last     =  master_r_last;
      assign slave_r_id       =  master_r_id;
      assign slave_r_user     =  master_r_user;
      assign master_r_ready   =  slave_r_ready;

      assign slave_b_valid    = master_b_valid;
      assign slave_b_resp     = master_b_resp;
      assign slave_b_id       = master_b_id;
      assign slave_b_user     = master_b_user;
      assign master_b_ready   = slave_b_ready;
    end
  endgenerate
endmodule
`endif
