
module axi_master_if # (
	
    parameter AXI_ADDR_WIDTH = 32,
    parameter AXI_DATA_WIDTH = 64,
    parameter AXI_ID_WIDTH   = 10,
    parameter AXI_USER_WIDTH = 6,
    parameter AXI_STRB_WIDTH = AXI_DATA_WIDTH/8
) (
 output   logic [AXI_ADDR_WIDTH-1:0] master_aw_addr,
 output   logic [2:0]                master_aw_prot,
 output   logic [3:0]                master_aw_region,
 output   logic [7:0]                master_aw_len,
 output   logic [2:0]                master_aw_size,
 output   logic [1:0]                master_aw_burst,
 output   logic                      master_aw_lock,
 output   logic [3:0]                master_aw_cache,
 output   logic [3:0]                master_aw_qos,
 output   logic [AXI_ID_WIDTH-1:0]   master_aw_id,
 output   logic [AXI_USER_WIDTH-1:0] master_aw_user,
 output   logic                      master_aw_ready,
 output   logic                      master_aw_valid,

 output   logic [AXI_ADDR_WIDTH-1:0] master_ar_addr,
 output   logic [2:0]                master_ar_prot,
 output   logic [3:0]                master_ar_region,
 output   logic [7:0]                master_ar_len,
 output   logic [2:0]                master_ar_size,
 output   logic [1:0]                master_ar_burst,
 output   logic                      master_ar_lock,
 output   logic [3:0]                master_ar_cache,
 output   logic [3:0]                master_ar_qos,
 output   logic [AXI_ID_WIDTH-1:0]   master_ar_id,
 output   logic [AXI_USER_WIDTH-1:0] master_ar_user,
 output   logic                      master_ar_ready,
 output    logic                     master_ar_valid,

 output   logic                      master_w_valid,
 output   logic [AXI_DATA_WIDTH-1:0] master_w_data,
 output   logic [AXI_STRB_WIDTH-1:0] master_w_strb,
 output   logic [AXI_USER_WIDTH-1:0] master_w_user,
 output   logic                      master_w_last,
 input   logic                       master_w_ready,
 input  logic [AXI_DATA_WIDTH-1:0]   master_r_data,
 input  logic [1:0]                  master_r_resp,
 input  logic                        master_r_last,
 input  logic [AXI_ID_WIDTH-1:0]     master_r_id,
 input  logic [AXI_USER_WIDTH-1:0]   master_r_user,
 input  logic                        master_r_ready,
 input  logic                        master_r_valid,

 input  logic [1:0]                  master_b_resp,
 input  logic [AXI_ID_WIDTH-1:0]     master_b_id,
 input    logic [AXI_USER_WIDTH-1:0] master_b_user,
 input    logic                      master_b_ready,
 input     logic                     master_b_valid
 );

 endmodule


