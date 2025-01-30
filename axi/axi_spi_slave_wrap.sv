// Copyright 2017 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the “License”); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an “AS IS” BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

`include "axi_master_if.sv"

`ifndef AXI_BUS_SV
`define AXI_BUS_SV

`include "config.sv"

`define OKAY   2'b00


module axi_spi_slave_wrap
#(
    parameter AXI_ADDRESS_WIDTH = 32,
    parameter AXI_ADDR_WIDTH = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 16,
    parameter AXI_USER_WIDTH    = 10,
    parameter AXI_STRB_WIDTH = AXI_DATA_WIDTH/8
  )
(
    input logic              clk_i,
    input logic              rst_ni,

    input logic              test_mode,

   // AXI_BUS.Master           axi_master,

    input  logic             spi_clk,
    input  logic             spi_cs,
    output logic [1:0]       spi_mode,
    output logic             spi_sdo0,
    output logic             spi_sdo1,
    output logic             spi_sdo2,
    output logic             spi_sdo3,
    input  logic             spi_sdi0,
    input  logic             spi_sdi1,
    input  logic             spi_sdi2,
    input  logic             spi_sdi3
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


 /* verilator lint_off WIDTH */
  
 axi_master_if AXI_SPI_MASTER_IF(
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



  axi_spi_slave
  #(
    .AXI_ADDR_WIDTH ( AXI_ADDRESS_WIDTH ),
    .AXI_DATA_WIDTH ( AXI_DATA_WIDTH    ),
    .AXI_ID_WIDTH   ( AXI_ID_WIDTH      ),
    .AXI_USER_WIDTH ( AXI_USER_WIDTH    )
    )
  axi_spi_slave_i
  (
    .axi_aclk             ( clk_i                ),
    .axi_aresetn          ( rst_ni               ),

    .axi_master_aw_valid  ( master_aw_valid  ),
    .axi_master_aw_id     ( master_aw_id     ),
    .axi_master_aw_prot   ( master_aw_prot   ),
    .axi_master_aw_region ( master_aw_region ),
    .axi_master_aw_qos    ( master_aw_qos    ),
    .axi_master_aw_cache  ( master_aw_cache  ),
    .axi_master_aw_lock   ( master_aw_lock   ),
    .axi_master_aw_burst  ( master_aw_burst  ),
    .axi_master_aw_size   ( master_aw_size   ),
    .axi_master_aw_len    ( master_aw_len    ),
    .axi_master_aw_addr   ( master_aw_addr   ),
    .axi_master_aw_user   ( master_aw_user   ),
    .axi_master_aw_ready  ( master_aw_ready  ),

    .axi_master_w_valid   ( master_w_valid   ),
    .axi_master_w_data    ( master_w_data    ),
    .axi_master_w_strb    ( master_w_strb    ),
    .axi_master_w_last    ( master_w_last    ),
    .axi_master_w_user    ( master_w_user    ),
    .axi_master_w_ready   ( master_w_ready   ),

    .axi_master_b_valid   ( master_b_valid   ),
    .axi_master_b_id      ( master_b_id      ),
    .axi_master_b_resp    ( master_b_resp    ),
    .axi_master_b_user    ( master_b_user    ),
    .axi_master_b_ready   ( master_b_ready   ),

    .axi_master_ar_valid  ( master_ar_valid  ),
    .axi_master_ar_id     ( master_ar_id     ),
    .axi_master_ar_prot   ( master_ar_prot   ),
    .axi_master_ar_region ( master_ar_region ),
    .axi_master_ar_qos    ( master_ar_qos    ),
    .axi_master_ar_cache  ( master_ar_cache  ),
    .axi_master_ar_lock   ( master_ar_lock   ),
    .axi_master_ar_burst  ( master_ar_burst  ),
    .axi_master_ar_size   ( master_ar_size   ),
    .axi_master_ar_len    ( master_ar_len    ),
    .axi_master_ar_addr   ( master_ar_addr   ),
    .axi_master_ar_user   ( master_ar_user   ),
    .axi_master_ar_ready  ( master_ar_ready  ),

    .axi_master_r_valid   ( master_r_valid   ),
    .axi_master_r_id      ( master_r_id      ),
    .axi_master_r_data    ( master_r_data    ),
    .axi_master_r_resp    ( master_r_resp    ),
    .axi_master_r_last    ( master_r_last    ),
    .axi_master_r_user    ( master_r_user    ),
    .axi_master_r_ready   ( master_r_ready   ),

    .test_mode            ( test_mode            ),

    .spi_sclk             ( spi_clk              ),
    .spi_cs               ( spi_cs               ),
    .spi_mode             ( spi_mode             ),
    .spi_sdo0             ( spi_sdo0             ),
    .spi_sdo1             ( spi_sdo1             ),
    .spi_sdo2             ( spi_sdo2             ),
    .spi_sdo3             ( spi_sdo3             ),
    .spi_sdi0             ( spi_sdi0             ),
    .spi_sdi1             ( spi_sdi1             ),
    .spi_sdi2             ( spi_sdi2             ),
    .spi_sdi3             ( spi_sdi3             )
  );
endmodule
`endif
