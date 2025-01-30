simSetSimulator "-vcssv" -exec "/home/nitintyagi/pulpino/verif/simv" -args \
           "-sml=verdi +UVM_VERDI_TRACE=UVM_AWARE -ucli2Proc -ucli"
debImport "-dbdir" "/home/nitintyagi/pulpino/verif/simv.daidir"
debLoadSimResult /home/nitintyagi/pulpino/verif/inter.fsdb
wvCreateWindow
verdiSetActWin -win $_nWave2
verdiWindowResize -win $_Verdi_1 "510" "213" "900" "700"
verdiWindowResize -win $_Verdi_1 "510" "213" "900" "700"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcFndSigCreate
srcFindScope -open -win $_nTrace1
srcFindScope -selectscope 1
srcFindScope -selectscope 7
srcFindScope -filter "axi_node_intf_wrap" -case on
srcFindScope -selectscope 1
srcFindScopeGoto -win $_nTrace1
srcFindScope -close
srcHBSelect "pulpino.pulpino_i.axi_interconnect_i" -win $_nTrace1
srcSetScope "pulpino.pulpino_i.axi_interconnect_i" -delim "." -win $_nTrace1
srcHBSelect "pulpino.pulpino_i.axi_interconnect_i" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcDeselectAll -win $_nTrace1
srcSelect -signal "s_master_r_ready" -line 378 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "s_start_addr" -line 380 -pos 1 -win $_nTrace1
srcHBSelect "pulpino.pulpino_i.axi_interconnect_i.axi_node_i" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "pulpino.pulpino_i.axi_interconnect_i.axi_node_i" -win $_nTrace1
srcSetScope "pulpino.pulpino_i.axi_interconnect_i.axi_node_i" -delim "." -win \
           $_nTrace1
srcHBSelect "pulpino.pulpino_i.axi_interconnect_i.axi_node_i" -win $_nTrace1
srcSignalView -on
verdiSetActWin -dock widgetDock_<Signal_List>
srcSignalViewSelect "pulpino.pulpino_i.axi_interconnect_i.axi_node_i.test_en_i"
srcSignalViewAddSelectedToWave
srcDeselectAll -win $_nTrace1
srcSelect -signal "test_en_i" -line 69 -pos 1 -win $_nTrace1
srcAction -pos 68 5 7 -win $_nTrace1 -name "test_en_i" -ctrlKey off
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcSelect -word -line 146 -pos 2 -win $_nTrace1
srcTraceLoad "pulpino.pulpino_i.testmode_i" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
debExit
