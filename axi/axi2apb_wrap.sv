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
`include "axi_slave_if.sv"
`include "apb_master_if.sv"

`ifndef AXI_BUS_SV
`define AXI_BUS_SV

`include "config.sv"

`define OKAY   2'b00
module axi2apb_wrap
#(
    parameter AXI_ADDR_WIDTH   = 32,
    parameter AXI_DATA_WIDTH   = 32,
    parameter AXI_USER_WIDTH   = 6,
    parameter AXI_ID_WIDTH     = 6,
    parameter APB_ADDR_WIDTH   = 32,
    parameter APB_DATA_WIDTH   = 32,
    parameter AXI_STRB_WIDTH = AXI_DATA_WIDTH/8
    
)
(
    input logic                                 clk_i,
    input logic                                 rst_ni,
    input logic                                 test_en_i

    
 

  // AXI_BUS.Slave                               axi_slave,
/* verilator lint_off MULTITOP */
  // APB_BUS.Master                              apb_master
);


  //********************************************************
  //************** AXI2APB WRAPER **************************
  //********************************************************

 logic [APB_ADDR_WIDTH-1:0]                                        master_paddr;
 logic [APB_DATA_WIDTH-1:0]                                        master_pwdata;
 logic                                                             master_pwrite;
 logic                                                             master_psel;
 logic                                                             master_penable;
 logic [APB_DATA_WIDTH-1:0]                                        master_prdata;
 logic                                                             master_pready;
 logic                                                             master_pslverr;
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

axi_slave_if AXI_SLAVE_IF(

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

apb_master_if APB_MASTER_IF(
.master_penable			( master_penable  ),
.master_pwrite			( master_pwrite   ),
.master_paddr			( master_paddr    ),
.master_psel			( master_psel     ),
.master_pwdata			( master_pwdata   ),
.master_prdata			( master_prdata   ),
.master_pready			( master_pready   ),
.master_pslverr			( master_pslverr  )
);


  generate if (AXI_DATA_WIDTH == 32)
    begin
      axi2apb
      #(
        .AXI4_ADDRESS_WIDTH ( AXI_ADDR_WIDTH ),
        .AXI4_RDATA_WIDTH   ( AXI_DATA_WIDTH ),
        .AXI4_WDATA_WIDTH   ( AXI_DATA_WIDTH ),
        .AXI4_ID_WIDTH      ( AXI_ID_WIDTH   ),
        .AXI4_USER_WIDTH    ( 1              ),

        .BUFF_DEPTH_SLAVE   ( 2              ),
        .APB_ADDR_WIDTH     ( APB_ADDR_WIDTH )

)
      axi2apb_i
      (
        .ACLK       ( clk_i               ),
        .ARESETn    ( rst_ni              ),
        .test_en_i  ( test_en_i           ),

        .AWID_i     ( slave_aw_id     ),
        .AWADDR_i   ( slave_aw_addr   ),
        .AWLEN_i    ( slave_aw_len    ),
        .AWSIZE_i   ( slave_aw_size   ),
        .AWBURST_i  ( slave_aw_burst  ),
        .AWLOCK_i   ( slave_aw_lock   ),
        .AWCACHE_i  ( slave_aw_cache  ),
        .AWPROT_i   ( slave_aw_prot   ),
        .AWREGION_i ( slave_aw_region ),
        .AWUSER_i   ( slave_aw_user   ),
        .AWQOS_i    ( slave_aw_qos    ),
        .AWVALID_i  ( slave_aw_valid  ),
        .AWREADY_o  ( slave_aw_ready  ),

        .WDATA_i    ( slave_w_data    ),
        .WSTRB_i    ( slave_w_strb    ),
        .WLAST_i    ( slave_w_last    ),
        .WUSER_i    ( slave_w_user    ),
        .WVALID_i   ( slave_w_valid   ),
        .WREADY_o   ( slave_w_ready   ),

        .BID_o      ( slave_b_id      ),
        .BRESP_o    ( slave_b_resp    ),
        .BVALID_o   ( slave_b_valid   ),
        .BUSER_o    ( slave_b_user    ),
        .BREADY_i   ( slave_b_ready   ),

        .ARID_i     ( slave_ar_id     ),
        .ARADDR_i   ( slave_ar_addr   ),
        .ARLEN_i    ( slave_ar_len    ),
        .ARSIZE_i   ( slave_ar_size   ),
        .ARBURST_i  ( slave_ar_burst  ),
        .ARLOCK_i   ( slave_ar_lock   ),
        .ARCACHE_i  ( slave_ar_cache  ),
        .ARPROT_i   ( slave_ar_prot   ),
        .ARREGION_i ( slave_ar_region ),
        .ARUSER_i   ( slave_ar_user   ),
        .ARQOS_i    ( slave_ar_qos    ),
        .ARVALID_i  ( slave_ar_valid  ),
        .ARREADY_o  ( slave_ar_ready  ),

        .RID_o      ( slave_r_id      ),
        .RDATA_o    ( slave_r_data    ),
        .RRESP_o    ( slave_r_resp    ),
        .RLAST_o    ( slave_r_last    ),
        .RUSER_o    ( slave_r_user    ),
        .RVALID_o   ( slave_r_valid   ),
        .RREADY_i   ( slave_r_ready   ),

        .PENABLE    ( master_penable  ),
        .PWRITE     ( master_pwrite   ),
        .PADDR      ( master_paddr    ),
        .PSEL       ( master_psel     ),
        .PWDATA     ( master_pwdata   ),
        .PRDATA     ( master_prdata   ),
        .PREADY     ( master_pready   ),
        .PSLVERR    ( master_pslverr  )
      );
    end
    else if (AXI_DATA_WIDTH == 64)
    begin
      axi2apb
      #(
        .AXI4_ADDRESS_WIDTH ( AXI_ADDR_WIDTH ),
        .AXI4_RDATA_WIDTH   ( AXI_DATA_WIDTH ),
        .AXI4_WDATA_WIDTH   ( AXI_DATA_WIDTH ),
        .AXI4_ID_WIDTH      ( AXI_ID_WIDTH   ),
        .AXI4_USER_WIDTH    ( 1              ),

        .BUFF_DEPTH_SLAVE   ( 2              ),
        .APB_ADDR_WIDTH     ( APB_ADDR_WIDTH )
      )
      axi2apb_i
      (
        .ACLK       ( clk_i               ),
        .ARESETn    ( rst_ni              ),
        .test_en_i  ( test_en_i           ),

        .AWID_i     ( slave_aw_id     ),
        .AWADDR_i   ( slave_aw_addr   ),
        .AWLEN_i    ( slave_aw_len    ),
        .AWSIZE_i   ( slave_aw_size   ),
        .AWBURST_i  ( slave_aw_burst  ),
        .AWLOCK_i   ( slave_aw_lock   ),
        .AWCACHE_i  ( slave_aw_cache  ),
        .AWPROT_i   ( slave_aw_prot   ),
        .AWREGION_i ( slave_aw_region ),
        .AWUSER_i   ( slave_aw_user   ),
        .AWQOS_i    ( slave_aw_qos    ),
        .AWVALID_i  ( slave_aw_valid  ),
        .AWREADY_o  ( slave_aw_ready  ),

        .WDATA_i    ( slave_w_data    ),
        .WSTRB_i    ( slave_w_strb    ),
        .WLAST_i    ( slave_w_last    ),
        .WUSER_i    ( slave_w_user    ),
        .WVALID_i   ( slave_w_valid   ),
        .WREADY_o   ( slave_w_ready   ),

        .BID_o      ( slave_b_id      ),
        .BRESP_o    ( slave_b_resp    ),
        .BVALID_o   ( slave_b_valid   ),
        .BUSER_o    ( slave_b_user    ),
        .BREADY_i   ( slave_b_ready   ),

        .ARID_i     ( slave_ar_id     ),
        .ARADDR_i   ( slave_ar_addr   ),
        .ARLEN_i    ( slave_ar_len    ),
        .ARSIZE_i   ( slave_ar_size   ),
        .ARBURST_i  ( slave_ar_burst  ),
        .ARLOCK_i   ( slave_ar_lock   ),
        .ARCACHE_i  ( slave_ar_cache  ),
        .ARPROT_i   ( slave_ar_prot   ),
        .ARREGION_i ( slave_ar_region ),
        .ARUSER_i   ( slave_ar_user   ),
        .ARQOS_i    ( slave_ar_qos    ),
        .ARVALID_i  ( slave_ar_valid  ),
        .ARREADY_o  ( slave_ar_ready  ),

        .RID_o      ( slave_r_id      ),
        .RDATA_o    ( slave_r_data    ),
        .RRESP_o    ( slave_r_resp    ),
        .RLAST_o    ( slave_r_last    ),
        .RUSER_o    ( slave_r_user    ),
        .RVALID_o   ( slave_r_valid   ),
        .RREADY_i   ( slave_r_ready   ),

        .PENABLE    ( master_penable  ),
        .PWRITE     ( master_pwrite   ),
        .PADDR      ( master_paddr    ),
        .PSEL       ( master_psel     ),
        .PWDATA     ( master_pwdata   ),
        .PRDATA     ( master_prdata   ),
        .PREADY     ( master_pready   ),
        .PSLVERR    ( master_pslverr  )
      );
    end
  endgenerate

endmodule
`endif
