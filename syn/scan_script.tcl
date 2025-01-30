#analyze -format verilog mips_16_all.v

read_file ../rtl/apb_mock_uart.sv
read_file ../rtl/axi_node_intf_wrap.sv
read_file ../rtl/axi_slice_wrap.sv
read_file ../rtl/axi_spi_slave_wrap.sv
read_file ../rtl/boot_code.sv
read_file ../rtl/boot_rom_wrap.sv
read_file ../rtl/clk_rst_gen.sv
read_file ../rtl/components/cluster_clock_gating.sv
read_file ../rtl/components/cluster_clock_inverter.sv
read_file ../rtl/components/cluster_clock_mux2.sv
read_file ../rtl/components/dp_ram.sv
read_file ../rtl/components/generic_fifo.sv
read_file ../rtl/components/pulp_clock_gating.sv
read_file ../rtl/components/pulp_clock_inverter.sv
read_file ../rtl/components/pulp_clock_mux2.sv
read_file ../rtl/components/rstgen.sv
read_file ../rtl/components/sp_ram.sv
read_file ../rtl/core2axi_wrap.sv
read_file ../rtl/core_region.sv
read_file ../rtl/dp_ram_wrap.sv
read_file ../rtl/includes/apb_bus.sv
read_file ../rtl/includes/apu_defines.sv
read_file ../rtl/includes/axi_bus.sv
read_file ../rtl/includes/config.sv
read_file ../rtl/includes/debug_bus.sv
read_file ../rtl/instr_ram_wrap.sv
read_file ../rtl/periph_bus_wrap.sv
read_file ../rtl/peripherals.sv
read_file ../rtl/pulpino_top.sv
read_file ../rtl/ram_mux.sv
read_file ../rtl/random_stalls.sv
read_file ../rtl/sp_ram_wrap.sv
read_file ../rtl/axi2apb_wrap.sv
read_file ../rtl/axi_mem_if_SP_wrap.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_axi_biu.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_defines.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_axi_defines.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_axi_module.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_axionly_top.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_crc32.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_lint_biu.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_lint_defines.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_lint_module.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_lintonly_top.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_or1k_biu.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_or1k_defines.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_or1k_module.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_or1k_status_reg.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_tap_defines.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_tap_top.v
read_file ../rtl/ips/adv_dbg_if/rtl/adbg_top.sv
read_file ../rtl/ips/adv_dbg_if/rtl/adv_dbg_if.sv
read_file ../rtl/ips/adv_dbg_if/rtl/bytefifo.v
read_file ../rtl/ips/adv_dbg_if/rtl/syncflop.v
read_file ../rtl/ips/adv_dbg_if/rtl/syncreg.v
read_file ../rtl/ips/apb/apb2per/apb2per.sv
read_file ../rtl/ips/apb/apb_fll_if/apb_fll_if.sv
read_file ../rtl/ips/apb/apb_gpio/apb_gpio.sv
read_file ../rtl/ips/apb/apb_i2c/apb_i2c.sv
read_file ../rtl/ips/apb/apb_i2c/i2c_master_bit_ctrl.sv
read_file ../rtl/ips/apb/apb_i2c/i2c_master_byte_ctrl.sv
read_file ../rtl/ips/apb/apb_i2c/i2c_master_defines.sv
read_file ../rtl/ips/apb/apb_spi_master/apb_spi_master.sv
read_file ../rtl/ips/apb/apb_spi_master/spi_master_apb_if.sv
read_file ../rtl/ips/apb/apb_spi_master/spi_master_clkgen.sv
read_file ../rtl/ips/apb/apb_spi_master/spi_master_controller.sv
read_file ../rtl/ips/apb/apb_spi_master/spi_master_fifo.sv
read_file ../rtl/ips/apb/apb_spi_master/spi_master_rx.sv
read_file ../rtl/ips/apb/apb_spi_master/spi_master_tx.sv
read_file ../rtl/ips/apb/apb_event_unit/include/defines_event_unit.sv
read_file ../rtl/ips/apb/apb_event_unit/apb_event_unit.sv
read_file ../rtl/ips/apb/apb_event_unit/generic_service_unit.sv
read_file ../rtl/ips/apb/apb_event_unit/sleep_unit.sv
read_file ../rtl/ips/apb/apb_node/apb_node.sv
read_file ../rtl/ips/apb/apb_node/apb_node_wrap.sv
read_file ../rtl/ips/apb/apb_uart_sv/apb_uart_sv.sv
read_file ../rtl/ips/apb/apb_uart_sv/io_generic_fifo.sv
read_file ../rtl/ips/apb/apb_uart_sv/uart_interrupt.sv
read_file ../rtl/ips/apb/apb_uart_sv/uart_rx.sv
read_file ../rtl/ips/apb/apb_uart_sv/uart_tx.sv
read_file ../rtl/ips/apb/apb_pulpino/apb_pulpino.sv
read_file ../rtl/ips/apb/apb_timer/apb_timer.sv
read_file ../rtl/ips/apb/apb_timer/timer.sv
read_file ../rtl/ips/riscv/include/apu_core_package.sv
read_file ../rtl/ips/riscv/include/apu_macros.sv
read_file ../rtl/ips/riscv/include/riscv_config.sv
read_file ../rtl/ips/riscv/include/riscv_defines.sv
read_file ../rtl/ips/riscv/include/riscv_tracer_defines.sv
read_file ../rtl/ips/riscv/riscv_L0_buffer.sv
read_file ../rtl/ips/riscv/riscv_alu.sv
read_file ../rtl/ips/riscv/riscv_alu_basic.sv
read_file ../rtl/ips/riscv/riscv_alu_div.sv
read_file ../rtl/ips/riscv/riscv_apu_disp.sv
read_file ../rtl/ips/riscv/riscv_compressed_decoder.sv
read_file ../rtl/ips/riscv/riscv_controller.sv
read_file ../rtl/ips/riscv/riscv_core.sv
read_file ../rtl/ips/riscv/riscv_cs_registers.sv
read_file ../rtl/ips/riscv/riscv_debug_unit.sv
read_file ../rtl/ips/riscv/riscv_decoder.sv
read_file ../rtl/ips/riscv/riscv_ex_stage.sv
read_file ../rtl/ips/riscv/riscv_fetch_fifo.sv
read_file ../rtl/ips/riscv/riscv_hwloop_controller.sv
read_file ../rtl/ips/riscv/riscv_hwloop_regs.sv
read_file ../rtl/ips/riscv/riscv_id_stage.sv
read_file ../rtl/ips/riscv/riscv_if_stage.sv
read_file ../rtl/ips/riscv/riscv_int_controller.sv
read_file ../rtl/ips/riscv/riscv_load_store_unit.sv
read_file ../rtl/ips/riscv/riscv_mult.sv
read_file ../rtl/ips/riscv/riscv_prefetch_L0_buffer.sv
read_file ../rtl/ips/riscv/riscv_prefetch_buffer.sv
read_file ../rtl/ips/riscv/riscv_register_file.sv
read_file ../rtl/ips/riscv/riscv_register_file_latch.sv
read_file ../rtl/ips/riscv/riscv_tracer.sv
read_file ../rtl/ips/riscv/tb/serDiv/tb.sv
read_file ../rtl/ips/zero-riscy/include/zeroriscy_config.sv
read_file ../rtl/ips/zero-riscy/include/zeroriscy_defines.sv
read_file ../rtl/ips/zero-riscy/include/zeroriscy_tracer_defines.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_alu.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_compressed_decoder.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_controller.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_core.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_cs_registers.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_debug_unit.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_decoder.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_ex_block.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_fetch_fifo.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_id_stage.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_if_stage.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_int_controller.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_load_store_unit.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_multdiv_fast.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_multdiv_slow.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_prefetch_buffer.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_register_file.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_register_file_ff.sv
read_file ../rtl/ips/zero-riscy/zeroriscy_tracer.sv
read_file ../rtl/ips/fpu/hdl/fpu_utils/fpu_ff.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_defs.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/defines_fpu.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fp_fma_wrapper.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpexc.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_add.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_core.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_ftoi.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_itof.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_mult.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_norm.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_private.sv
read_file ../rtl/includes/fp_defines.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/fpu_shared.sv
read_file ../rtl/ips/fpu/hdl/fpu_v0.1/riscv_fpu.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/fpu_defs_div_sqrt_tp.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/control_tp.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/div_sqrt_top_tp.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/fpu_norm_div_sqrt.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/iteration_div_sqrt.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/iteration_div_sqrt_first.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/nrbd_nrsc_tp.sv
read_file ../rtl/ips/fpu/hdl/fpu_div_sqrt_tp_nlp/preprocess.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/fpu_defs_fmac.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/CSA.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/LZA.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/adders.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/aligner.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/booth_encoder.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/booth_selector.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/fmac.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/fpu_norm_fmac.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/pp_generation.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/preprocess_fmac.sv
read_file ../rtl/ips/fpu/hdl/fpu_fmac/wallace.sv
read_file ../rtl/ips/axi/axi2apb/AXI_2_APB.sv
read_file ../rtl/ips/axi/axi2apb/AXI_2_APB_32.sv
read_file ../rtl/ips/axi/axi2apb/axi2apb.sv
read_file ../rtl/ips/axi/axi2apb/axi2apb32.sv
read_file ../rtl/ips/axi/axi_slice/axi_ar_buffer.sv
read_file ../rtl/ips/axi/axi_slice/axi_aw_buffer.sv
read_file ../rtl/ips/axi/axi_slice/axi_b_buffer.sv
read_file ../rtl/ips/axi/axi_slice/axi_buffer.sv
read_file ../rtl/ips/axi/axi_slice/axi_r_buffer.sv
read_file ../rtl/ips/axi/axi_slice/axi_slice.sv
read_file ../rtl/ips/axi/axi_slice/axi_w_buffer.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_dc_fifo.sv
read_file ../rtl/ips/axi/axi_spi_slave/axi_spi_slave.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_axi_plug.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_cmd_parser.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_controller.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_regs.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_rx.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_syncro.sv
read_file ../rtl/ips/axi/axi_spi_slave/spi_slave_tx.sv
read_file ../rtl/ips/axi/axi_node/apb_regs_top.sv
read_file ../rtl/ips/axi/axi_node/axi_AR_allocator.sv
read_file ../rtl/ips/axi/axi_node/axi_AW_allocator.sv
read_file ../rtl/ips/axi/axi_node/axi_ArbitrationTree.sv
read_file ../rtl/ips/axi/axi_node/axi_BR_allocator.sv
read_file ../rtl/ips/axi/axi_node/axi_BW_allocator.sv
read_file ../rtl/ips/axi/axi_node/axi_DW_allocator.sv
read_file ../rtl/ips/axi/axi_node/axi_FanInPrimitive_Req.sv
read_file ../rtl/ips/axi/axi_node/axi_RR_Flag_Req.sv
read_file ../rtl/ips/axi/axi_node/axi_address_decoder_AR.sv
read_file ../rtl/ips/axi/axi_node/axi_address_decoder_AW.sv
read_file ../rtl/ips/axi/axi_node/axi_address_decoder_BR.sv
read_file ../rtl/ips/axi/axi_node/axi_address_decoder_BW.sv
read_file ../rtl/ips/axi/axi_node/axi_address_decoder_DW.sv
read_file ../rtl/ips/axi/axi_node/axi_multiplexer.sv
read_file ../rtl/ips/axi/axi_node/axi_node.sv
read_file ../rtl/ips/axi/axi_node/axi_node_wrap.sv
read_file ../rtl/includes/axi_bus.sv
read_file ../rtl/ips/axi/axi_node/axi_node_wrap_with_slices.sv
read_file ../rtl/ips/axi/axi_node/axi_regs_top.sv
read_file ../rtl/ips/axi/axi_node/axi_request_block.sv
read_file ../rtl/ips/axi/axi_node/axi_response_block.sv
read_file ../rtl/ips/axi/axi_node/defines.v
read_file ../rtl/ips/axi/axi_spi_master/axi_spi_master.sv
read_file ../rtl/ips/axi/axi_spi_master/spi_master_axi_if.sv
read_file ../rtl/ips/axi/core2axi/core2axi.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_mem_if_DP.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_mem_if_DP_hybr.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_mem_if_MP_Hybrid_multi_bank.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_mem_if_SP.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_mem_if_multi_bank.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_read_only_ctrl.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/axi_write_only_ctrl.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/tb_axi_DP.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/tb_axi_read_only.sv
read_file ../rtl/ips/axi/axi_mem_if_DP/tb_axi_write_only.sv
read_file ../rtl/ips/axi/axi_slice_dc/axi_slice_dc_master.sv
read_file ../rtl/ips/axi/axi_slice_dc/axi_slice_dc_slave.sv
read_file ../rtl/ips/axi/axi_slice_dc/dc_data_buffer.v
read_file ../rtl/ips/axi/axi_slice_dc/dc_full_detector.v
read_file ../rtl/ips/axi/axi_slice_dc/dc_synchronizer.v
read_file ../rtl/ips/axi/axi_slice_dc/dc_token_ring.v
read_file ../rtl/ips/axi/axi_slice_dc/dc_token_ring_fifo_din.v
read_file ../rtl/ips/axi/axi_slice_dc/dc_token_ring_fifo_dout.v

set search_path /home/synopsys/Library/SAED14nm_EDK_CORE_HVT_v_062020/stdcell_hvt/db_nldm
set target_library {saed14hvt_ss0p72vm40c.db}
set link_library {*saed14hvt_ss0p72vm40c.db}

set compile_seqmap_propagate_constants true
set hdlin_ff_always_sync_set_reset true
current_design pulpino_top
elaborate pulpino_top
compile_ultra -no_seq_output_inversion -scan
write -format ddc -output output/mips.ddc
write -format verilog -output output/mips_netlist.v
report_timing


#Scan insertion:
set_dft_signal -view existing_dft -type ScanClock -port scan_clock -timing [list 40 60]
set_dft_signal -view existing_dft -type Reset -port scan_reset -active_state  0
set_dft_signal -view spec -type TestMode -port TE -active_state 1
set_dft_signal -view spec -type ScanEnable -port se -active_state 1
set_dft_signal -view spec -type ScanDataIn -port si
set_dft_signal -view spec -type ScanDataOut -port so

#OCC controller:
set_dft_signal -view existing_dft -type Oscillator -port clk
set_dft_configuration -clock_controller enable
set_dft_clock_controller -design_name mips_16 -pllclocks clk
set_scan_configuration -chain_count 1

#set_dft_signal -view existing_dft -type MasterClock -port 

#Autofix config:
#set_dft_signal -view spec -type TestData -port scan_clock
#set_dft_signal -view spec -type TestData -port scan_reset -active_state 0
#set_dft_configuration -fix_clock enable -fix_reset enable
#set_autofix_configuration -type clock -test_data scan_clock -control_signal TE
#set_autofix_configuration -type reset -test_data scan_reset -control_signal TE

create_test_protocol

dft_drc

insert_dft

write_file -format verilog -h -output output/mips16_scan_inserted.v
write_test_protocol -output output/mips16_scan_inserted.spf

report_scan_chain > report/scan_chain.rpt
report_scan_path -test_mode all > report/scan_cells.rpt
write_scan_def -output output/counter.scandef
