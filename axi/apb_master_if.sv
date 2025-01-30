`ifndef APB_BUS_SV
`define APB_BUS_SV

`include "config.sv"

// SOC PERIPHERALS APB BUS PARAMETRES
`define NB_MASTER  9

// MASTER PORT TO CVP
`define UART_START_ADDR       32'h1A10_0000
`define UART_END_ADDR         32'h1A10_0FFF

// MASTER PORT TO GPIO
`define GPIO_START_ADDR       32'h1A10_1000
`define GPIO_END_ADDR         32'h1A10_1FFF

// MASTER PORT TO SPI MASTER
`define SPI_START_ADDR        32'h1A10_2000
`define SPI_END_ADDR          32'h1A10_2FFF

// MASTER PORT TO TIMER
`define TIMER_START_ADDR      32'h1A10_3000
`define TIMER_END_ADDR        32'h1A10_3FFF

// MASTER PORT TO EVENT UNIT
`define EVENT_UNIT_START_ADDR 32'h1A10_4000
`define EVENT_UNIT_END_ADDR   32'h1A10_4FFF

// MASTER PORT TO I2C
`define I2C_START_ADDR        32'h1A10_5000
`define I2C_END_ADDR          32'h1A10_5FFF

// MASTER PORT TO FLL
`define FLL_START_ADDR        32'h1A10_6000
`define FLL_END_ADDR          32'h1A10_6FFF

// MASTER PORT TO SOC CTRL
`define SOC_CTRL_START_ADDR   32'h1A10_7000
`define SOC_CTRL_END_ADDR     32'h1A10_7FFF

// MASTER PORT TO DEBUG
`define DEBUG_START_ADDR      32'h1A11_0000
`define DEBUG_END_ADDR        32'h1A11_7FFF

`define APB_ASSIGN_SLAVE(lhs, rhs)     \
    assign lhs.paddr    = rhs.paddr;   \
    assign lhs.pwdata   = rhs.pwdata;  \
    assign lhs.pwrite   = rhs.pwrite;  \
    assign lhs.psel     = rhs.psel;    \
    assign lhs.penable  = rhs.penable; \
    assign rhs.prdata   = lhs.prdata;  \
    assign rhs.pready   = lhs.pready;  \
    assign rhs.pslverr  = lhs.pslverr;

`define APB_ASSIGN_MASTER(lhs, rhs) `APB_ASSIGN_SLAVE(rhs, lhs)

////////////////////////////////////////////////////////////////////////////////
//          Only general functions and definitions are defined here           //
//              These functions are not intended to be modified               //
////////////////////////////////////////////////////////////////////////////////

module apb_master_if 
#(
    parameter APB_ADDR_WIDTH = 32,
    parameter APB_DATA_WIDTH = 32)
 ( 
    output logic [APB_ADDR_WIDTH-1:0]                                        master_paddr,
    output logic [APB_DATA_WIDTH-1:0]                                        master_pwdata,
    output logic                                                             master_pwrite,
    output logic                                                             master_psel,
    output logic                                                             master_penable,
    input logic [APB_DATA_WIDTH-1:0]                                         master_prdata,
    input logic                                                              master_pready,
    input logic                                                              master_pslverr);

endmodule 

`endif
