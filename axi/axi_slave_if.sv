//`ifndef AXI_BUS_SV
//`define AXI_BUS_SV
//
//`include "config.sv"
//
//`define OKAY   2'b00


module axi_slave_if # (
	
    parameter AXI_ADDR_WIDTH = 32,
    parameter AXI_DATA_WIDTH = 64,
    parameter AXI_ID_WIDTH   = 10,
    parameter AXI_USER_WIDTH = 6,
    parameter AXI_STRB_WIDTH = AXI_DATA_WIDTH/8
) (
 input   logic [AXI_ADDR_WIDTH-1:0] slave_aw_addr,
 input   logic [2:0]                slave_aw_prot,
 input   logic [3:0]                slave_aw_region,
 input   logic [7:0]                slave_aw_len,
 input   logic [2:0]                slave_aw_size,
 input   logic [1:0]                slave_aw_burst,
 input   logic                      slave_aw_lock,
 input   logic [3:0]                slave_aw_cache,
 input   logic [3:0]                slave_aw_qos,
 input   logic [AXI_ID_WIDTH-1:0]   slave_aw_id,
 input   logic [AXI_USER_WIDTH-1:0] slave_aw_user,
 input   logic                      slave_aw_ready,
 input   logic                      slave_aw_valid,

 input   logic [AXI_ADDR_WIDTH-1:0] slave_ar_addr,
 input   logic [2:0]                slave_ar_prot,
 input   logic [3:0]                slave_ar_region,
 input   logic [7:0]                slave_ar_len,
 input   logic [2:0]                slave_ar_size,
 input   logic [1:0]                slave_ar_burst,
 input   logic                      slave_ar_lock,
 input   logic [3:0]                slave_ar_cache,
 input   logic [3:0]                slave_ar_qos,
 input   logic [AXI_ID_WIDTH-1:0]   slave_ar_id,
 input   logic [AXI_USER_WIDTH-1:0] slave_ar_user,
 input   logic                      slave_ar_ready,
 input   logic                      slave_ar_valid,

 input   logic                      slave_w_valid,
 input   logic [AXI_DATA_WIDTH-1:0] slave_w_data,
 input   logic [AXI_STRB_WIDTH-1:0] slave_w_strb,
 input   logic [AXI_USER_WIDTH-1:0] slave_w_user,
 input   logic                      slave_w_last,
 input   logic                      slave_w_ready,
 output  logic [AXI_DATA_WIDTH-1:0] slave_r_data,
 output  logic [1:0]                slave_r_resp,
 output  logic                      slave_r_last,
 output  logic [AXI_ID_WIDTH-1:0]   slave_r_id,
 output  logic [AXI_USER_WIDTH-1:0] slave_r_user,
 output  logic                      slave_r_ready,
 output  logic                      slave_r_valid,

 output  logic [1:0]                slave_b_resp,
 output  logic [AXI_ID_WIDTH-1:0]   slave_b_id,
 output  logic [AXI_USER_WIDTH-1:0] slave_b_user,
 output  logic                      slave_b_ready,
 output  logic                      slave_b_valid);

endmodule
