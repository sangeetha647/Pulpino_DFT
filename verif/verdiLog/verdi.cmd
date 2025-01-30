verdiSetActWin -dock widgetDock_<Watch>
simSetSimulator "-vcssv" -exec "/home/nitintyagi/pulpino/verif/simv" -args \
           "-sml=verdi +UVM_VERDI_TRACE=UVM_AWARE -ucli2Proc -ucli"
debImport "-dbdir" "/home/nitintyagi/pulpino/verif/simv.daidir"
debLoadSimResult /home/nitintyagi/pulpino/verif/inter.fsdb
wvCreateWindow
verdiSetActWin -win $_nWave2
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcHBSelect "pulpino.pulpino_i" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "pulpino.pulpino_i" -win $_nTrace1
srcHBSelect "pulpino.pulpino_i" -win $_nTrace1
srcSetScope "pulpino.pulpino_i" -delim "." -win $_nTrace1
srcHBSelect "pulpino.pulpino_i" -win $_nTrace1
srcHBSelect "pulpino.pulpino_i" -win $_nTrace1
srcHBSelect "pulpino" -win $_nTrace1
srcHBSelect "pulpino" -win $_nTrace1
schCreateWindow -delim "." -win $_nSchema1 -scope "pulpino.pulpino_i"
verdiFindBar -show -win nSchema_3
verdiSetActWin -win $_nSchema_3
schSetOptions -win $_nSchema3 -pinName on
schSetOptions -win $_nSchema3 -portName on
schSetOptions -win $_nSchema3 -instName on
schSetOptions -win $_nSchema3 -localNetName on
schSetOptions -win $_nSchema3 -completeName on
srcSignalView -off
verdiDockWidgetMaximize -dock windowDock_nSchema_3
schZoomIn -win $_nSchema3 -pos -180 36673
schZoomIn -win $_nSchema3 -pos -255 36673
schZoomIn -win $_nSchema3 -pos -310 36562
schZoomIn -win $_nSchema3 -pos -311 36562
schZoomIn -win $_nSchema3 -pos -343 36562
schZoomIn -win $_nSchema3 -pos -344 36562
schSelect -win $_nSchema3 -signal "spi_clk_i"
schZoomOut -win $_nSchema3 -pos -1509 36474
schZoomOut -win $_nSchema3 -pos -1509 36474
schZoomOut -win $_nSchema3 -pos 25737 36887
schZoomOut -win $_nSchema3 -pos 25668 36715
schZoomOut -win $_nSchema3 -pos 25625 36542
schZoomOut -win $_nSchema3 -pos 29395 33197
schZoomOut -win $_nSchema3 -pos 29394 33197
schZoomOut -win $_nSchema3 -pos 29394 33197
schSelect -win $_nSchema3 -inst "peripherals_i"
schPushViewIn -win $_nSchema3
schZoomIn -win $_nSchema3 -pos -2316 99208
schZoomIn -win $_nSchema3 -pos -2316 98945
schZoomIn -win $_nSchema3 -pos -2316 98944
schZoomIn -win $_nSchema3 -pos -2316 98944
schZoomIn -win $_nSchema3 -pos -1151 102938
schZoomIn -win $_nSchema3 -pos 387 123167
schZoomIn -win $_nSchema3 -pos 387 123167
schZoomIn -win $_nSchema3 -pos 387 123190
schSelect -win $_nSchema3 -signal "spi_clk_i"
schZoomOut -win $_nSchema3 -pos 3019 123769
schZoomOut -win $_nSchema3 -pos 2975 123659
schZoomOut -win $_nSchema3 -pos 2755 122919
schZoomOut -win $_nSchema3 -pos 2755 122884
schZoomOut -win $_nSchema3 -pos 2755 122799
schZoomOut -win $_nSchema3 -pos 2809 122799
schZoomOut -win $_nSchema3 -pos 2809 122799
schZoomOut -win $_nSchema3 -pos 2808 119597
schZoomOut -win $_nSchema3 -pos 2808 119179
schZoomOut -win $_nSchema3 -pos 2808 119179
schZoomIn -win $_nSchema3 -pos 5913 121630
schZoomIn -win $_nSchema3 -pos 5912 122855
schZoomIn -win $_nSchema3 -pos 5912 122946
schZoomIn -win $_nSchema3 -pos 5912 123014
schZoomIn -win $_nSchema3 -pos 5912 123066
schZoomIn -win $_nSchema3 -pos 5407 123997
schZoomIn -win $_nSchema3 -pos 5378 123997
schSelect -win $_nSchema3 -toggle -signal "clk_i"
schSelect -win $_nSchema3 -port "clk_i"
schPopViewUp -win $_nSchema3
schZoomIn -win $_nSchema3 -pos 8318 42093
schZoomIn -win $_nSchema3 -pos 8318 42093
schZoomIn -win $_nSchema3 -pos 8319 42094
schZoomIn -win $_nSchema3 -pos 8319 42093
schZoomOut -win $_nSchema3 -pos 1714 38289
schSelect -win $_nSchema3 -inst "peripherals_i"
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -signal "clk_i"
schZoomOut -win $_nSchema3 -pos 1311 123289
schZoomOut -win $_nSchema3 -pos 1310 123289
schZoomIn -win $_nSchema3 -pos -1102 123357
schZoomIn -win $_nSchema3 -pos -1102 123357
schPopViewUp -win $_nSchema3
schZoomOut -win $_nSchema3 -pos -2543 36821
schSelect -win $_nSchema3 -signal "spi_clk_i"
schZoomOut -win $_nSchema3 -pos 33680 26547
schZoomOut -win $_nSchema3 -pos 33549 26416
schSelect -win $_nSchema3 -inst "core_region_i"
schZoomIn -win $_nSchema3 -pos 11679 8144
schZoomIn -win $_nSchema3 -pos 11679 8144
schZoomIn -win $_nSchema3 -pos 11633 8144
schSelect -win $_nSchema3 -signal "clk_int"
schZoomOut -win $_nSchema3 -pos 8695 20663
schZoomOut -win $_nSchema3 -pos 8695 20662
schZoomOut -win $_nSchema3 -pos 8586 21309
schZoomOut -win $_nSchema3 -pos 6156 17323
schZoomOut -win $_nSchema3 -pos 5987 17322
schZoomOut -win $_nSchema3 -pos 21594 19115
schZoomOut -win $_nSchema3 -pos 21593 19114
schZoomIn -win $_nSchema3 -pos 10825 37567
schZoomIn -win $_nSchema3 -pos 10825 37566
schZoomOut -win $_nSchema3 -pos 49936 13562
schZoomOut -win $_nSchema3 -pos 49936 13561
schZoomIn -win $_nSchema3 -pos 93669 3280
schZoomIn -win $_nSchema3 -pos 93670 3279
schZoomIn -win $_nSchema3 -pos 93669 3279
schZoomIn -win $_nSchema3 -pos 75708 12382
schZoomIn -win $_nSchema3 -pos 75708 12382
schZoomIn -win $_nSchema3 -pos 75708 12381
schSelect -win $_nSchema3 -instport "clk_rst_gen_i" "clk_o"
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -inst "clk_mux_i"
schZoomIn -win $_nSchema3 -pos 2297 12807
schZoomIn -win $_nSchema3 -pos 2297 12807
schZoomIn -win $_nSchema3 -pos 2297 12807
schSelect -win $_nSchema3 -port "clk_i"
schPopViewUp -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 58859 16455
schZoomOut -win $_nSchema3 -pos 58859 16455
schZoomOut -win $_nSchema3 -pos 58859 16414
schZoomOut -win $_nSchema3 -pos 58859 16414
schZoomOut -win $_nSchema3 -pos 58859 16478
schZoomOut -win $_nSchema3 -pos 58859 16477
schZoomOut -win $_nSchema3 -pos 58859 16775
schZoomOut -win $_nSchema3 -pos 58859 16774
schZoomIn -win $_nSchema3 -pos -1138 45454
schZoomIn -win $_nSchema3 -pos -1138 45454
schZoomIn -win $_nSchema3 -pos -1051 45454
schZoomIn -win $_nSchema3 -pos -1051 45454
schZoomIn -win $_nSchema3 -pos -1052 45453
schZoomIn -win $_nSchema3 -pos 2001 42804
schZoomIn -win $_nSchema3 -pos 1945 42859
schZoomIn -win $_nSchema3 -pos 1904 42879
schZoomIn -win $_nSchema3 -pos 1903 42894
schSelect -win $_nSchema3 -signal "spi_clk_i"
schZoomOut -win $_nSchema3 -pos 914 40471
schZoomOut -win $_nSchema3 -pos 914 40471
schZoomOut -win $_nSchema3 -pos 914 40471
schZoomOut -win $_nSchema3 -pos 913 40448
schZoomOut -win $_nSchema3 -pos 913 40448
schSelect -win $_nSchema3 -inst "peripherals_i"
schZoomIn -win $_nSchema3 -pos 27200 40306
schZoomIn -win $_nSchema3 -pos 27200 40305
schSelect -win $_nSchema3 -signal "clk_int"
schZoomOut -win $_nSchema3 -pos 24182 40445
schZoomOut -win $_nSchema3 -pos 24182 40444
schZoomOut -win $_nSchema3 -pos 24181 40443
schZoomOut -win $_nSchema3 -pos 24180 40443
schSelect -win $_nSchema3 -inst "peripherals_i"
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -signal "clk_i"
schZoomOut -win $_nSchema3 -pos 2420 122491
schZoomOut -win $_nSchema3 -pos 2420 122490
schProperties -win $_nSchema3
schProperties -win $_nSchema3 -Basic on
verdiHighlightSignal -sigColor { "pulpino.pulpino_i.peripherals_i.clk_i" N/A }
verdiHighlightSignal -sigColor { "pulpino.pulpino_i.peripherals_i.clk_i" \
           ID_GREEN5 }
verdiHighlightSignal -apply
schDeselectAll -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 4500 107965
schZoomOut -win $_nSchema3 -pos 4500 107965
schZoomOut -win $_nSchema3 -pos 4499 107965
schZoomOut -win $_nSchema3 -pos 4320 95340
schZoomOut -win $_nSchema3 -pos 4319 95339
schZoomOut -win $_nSchema3 -pos 4319 95339
schZoomIn -win $_nSchema3 -pos 4554 125371
schZoomIn -win $_nSchema3 -pos 4553 125370
schZoomIn -win $_nSchema3 -pos 4553 125370
schZoomIn -win $_nSchema3 -pos 4553 125370
schZoomIn -win $_nSchema3 -pos 4552 125370
schZoomIn -win $_nSchema3 -pos 3160 125175
schSelect -win $_nSchema3 -signal "spi_clk_i"
schProperties -win $_nSchema3 -Basic on
verdiHighlightSignal -sigColor { "pulpino.pulpino_i.peripherals_i.spi_clk_i" N/A \
           }
verdiHighlightSignal -sigColor { "pulpino.pulpino_i.peripherals_i.spi_clk_i" \
           ID_YELLOW5 }
verdiHighlightSignal -apply
schDeselectAll -win $_nSchema3
schSelect -win $_nSchema3 -signal "spi_clk_i"
verdiHighlightSignal -sigColor { "pulpino.pulpino_i.peripherals_i.spi_clk_i" \
           ID_RED5 }
verdiHighlightSignal -apply
schDeselectAll -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 8192 118159
schZoomOut -win $_nSchema3 -pos 8192 118159
schZoomOut -win $_nSchema3 -pos 8159 118158
schZoomOut -win $_nSchema3 -pos 8159 118158
schZoomOut -win $_nSchema3 -pos 52098 115905
schZoomOut -win $_nSchema3 -pos 52097 115905
schZoomIn -win $_nSchema3 -pos 60301 61141
schZoomIn -win $_nSchema3 -pos 60301 61140
schZoomIn -win $_nSchema3 -pos 60300 61140
schZoomIn -win $_nSchema3 -pos 60299 61140
schSelect -win $_nSchema3 -signal "clk_i"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -signal "clk_int\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schZoomOut -win $_nSchema3 -pos 54302 63204
schZoomOut -win $_nSchema3 -pos 54302 63140
schZoomOut -win $_nSchema3 -pos 54301 63139
schZoomOut -win $_nSchema3 -pos 54301 63140
schZoomOut -win $_nSchema3 -pos 54301 63139
schZoomOut -win $_nSchema3 -pos 54301 63138
schZoomOut -win $_nSchema3 -pos 54300 63138
schZoomOut -win $_nSchema3 -pos 54301 63138
schZoomOut -win $_nSchema3 -pos 54301 63137
schZoomOut -win $_nSchema3 -pos 54301 63137
schZoomOut -win $_nSchema3 -pos 54301 63136
schZoomIn -win $_nSchema3 -pos 25261 114174
schZoomIn -win $_nSchema3 -pos 25261 114174
schZoomIn -win $_nSchema3 -pos 25261 114174
schZoomIn -win $_nSchema3 -pos 25260 114174
schZoomIn -win $_nSchema3 -pos 25259 114173
schZoomIn -win $_nSchema3 -pos 26720 116053
schZoomIn -win $_nSchema3 -pos 26720 116053
schZoomIn -win $_nSchema3 -pos 26719 116054
schZoomIn -win $_nSchema3 -pos 26718 116054
schZoomOut -win $_nSchema3 -pos 21343 119473
schZoomOut -win $_nSchema3 -pos 21344 119473
schZoomOut -win $_nSchema3 -pos 21344 119472
schZoomOut -win $_nSchema3 -pos 20655 119687
schZoomOut -win $_nSchema3 -pos 20709 119687
schZoomIn -win $_nSchema3 -pos 1352 123451
schZoomIn -win $_nSchema3 -pos 1352 123451
schZoomIn -win $_nSchema3 -pos 1313 123450
schZoomIn -win $_nSchema3 -pos 1312 123451
schZoomOut -win $_nSchema3 -pos 24705 114619
schZoomOut -win $_nSchema3 -pos 24864 113901
schZoomOut -win $_nSchema3 -pos 24863 113867
schZoomOut -win $_nSchema3 -pos 24864 113868
schZoomOut -win $_nSchema3 -pos 33586 112154
schZoomOut -win $_nSchema3 -pos 33586 112154
schZoomIn -win $_nSchema3 -pos 60112 60546
schZoomIn -win $_nSchema3 -pos 60112 60545
schZoomIn -win $_nSchema3 -pos 60113 60544
schZoomIn -win $_nSchema3 -pos 60626 60886
schZoomIn -win $_nSchema3 -pos 60627 60885
schSelect -win $_nSchema3 -inst "axi_spi_slave_i"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schZoomIn -win $_nSchema3 -pos 3170 39395
schZoomIn -win $_nSchema3 -pos 3170 39395
schSelect -win $_nSchema3 -signal "spi_clk"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -toggle -signal "clk_i"
schSelect -win $_nSchema3 -inst "axi_spi_slave_i"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schZoomIn -win $_nSchema3 -pos 604 39928
schZoomIn -win $_nSchema3 -pos 105 39762
schZoomIn -win $_nSchema3 -pos 1185 13974
schZoomIn -win $_nSchema3 -pos 1185 13974
schZoomIn -win $_nSchema3 -pos 1184 13974
schZoomIn -win $_nSchema3 -pos 1183 13974
schZoomIn -win $_nSchema3 -pos 1183 13974
schSelect -win $_nSchema3 -signal "spi_sclk"
schProperties -win $_nSchema3 -Basic on
schZoomOut -win $_nSchema3 -pos 1104 17324
schZoomOut -win $_nSchema3 -pos 1104 17323
schZoomOut -win $_nSchema3 -pos 1320 13890
schZoomOut -win $_nSchema3 -pos 1320 13889
schZoomOut -win $_nSchema3 -pos 1320 13888
schZoomOut -win $_nSchema3 -pos 1110 15121
schZoomOut -win $_nSchema3 -pos 1674 12522
schZoomOut -win $_nSchema3 -pos 1675 12521
schZoomOut -win $_nSchema3 -pos 1675 12521
schZoomIn -win $_nSchema3 -pos -1041 -3578
schZoomIn -win $_nSchema3 -pos -1042 -3578
schZoomIn -win $_nSchema3 -pos -1042 -3578
schZoomIn -win $_nSchema3 -pos -1042 -3579
schZoomIn -win $_nSchema3 -pos -1042 -3602
schZoomOut -win $_nSchema3 -pos 839 1501
schZoomOut -win $_nSchema3 -pos 839 1501
schZoomOut -win $_nSchema3 -pos 840 1474
schZoomOut -win $_nSchema3 -pos 839 1473
schZoomOut -win $_nSchema3 -pos 882 1430
schZoomOut -win $_nSchema3 -pos 882 1430
schZoomOut -win $_nSchema3 -pos 882 1430
schZoomOut -win $_nSchema3 -pos 965 1429
schZoomIn -win $_nSchema3 -pos 446 39207
schZoomIn -win $_nSchema3 -pos 446 39207
schFit -win $_nSchema3
schZoomIn -win $_nSchema3 -pos 457 41920
schZoomIn -win $_nSchema3 -pos 456 41921
schZoomIn -win $_nSchema3 -pos 455 41920
schSelect -win $_nSchema3 -signal "axi_aclk"
schProperties -win $_nSchema3 -Basic on
schZoomOut -win $_nSchema3 -pos -542 23577
schZoomOut -win $_nSchema3 -pos -541 23577
schSelect -win $_nSchema3 -toggle -signal "spi_sclk"
schSelect -win $_nSchema3 -port "axi_aclk"
schProperties -win $_nSchema3 -Basic on
schPopViewUp -win $_nSchema3
schSelect -win $_nSchema3 -instport "axi_spi_slave_i" "axi_aclk"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -instport "axi_spi_slave_i" "axi_aclk"
schPushViewIn -win $_nSchema3
schZoomIn -win $_nSchema3 -pos 2175 23324
schZoomIn -win $_nSchema3 -pos 2175 23324
schSelect -win $_nSchema3 -toggle -signal "spi_sclk"
schZoomOut -win $_nSchema3 -pos 10370 21257
schSelect -win $_nSchema3 -inst "u_dcfifo_rx"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -port "clk_b"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -toggle -port "clk_a"
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schDisplaySource -win $_nSchema3
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcSignalView -on
verdiFindBar -hide -widget MTB_SOURCE_TAB_1
srcSignalView -off
srcSignalView -on
verdiFindBar -hide -win nWave_2
verdiDockWidgetRestore -dock windowDock_nSchema_3
verdiSetActWin -win $_nSchema_3
verdiDockWidgetSetCurTab -dock widgetDock_MTB_SOURCE_TAB_1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcSelect -signal "clk_a" -line 15 -pos 1 -win $_nTrace1
srcSelect -signal "clk_b" -line 20 -pos 1 -win $_nTrace1
srcSelect -signal "clk_a" -line 35 -pos 1 -win $_nTrace1
srcSelect -signal "clk_b" -line 47 -pos 1 -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -word -line 10 -pos 2 -win $_nTrace1
srcAction -pos 10 2 9 -win $_nTrace1 -name "spi_slave_dc_fifo" -ctrlKey off
srcCopyInstFullPath -win $_nTrace1
srcCopyInstFullPath -win $_nTrace1
verdiWindowResize -win $_Verdi_1 "240" "118" "1440" "749"
srcDeselectAll -win $_nTrace1
srcSelect -inst "u_dcfifo_rx" -line 200 -pos 1 -win $_nTrace1
srcAction -pos 199 1 4 -win $_nTrace1 -name "u_dcfifo_rx" -ctrlKey off
srcCopyFilePath -win $_nTrace1
srcCopyFilePath -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
verdiWindowResize -win $_Verdi_1 "240" "118" "1440" "749"
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
srcHBCopyFullPath
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcCopyFilePath -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcHBCopyFullPath
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
srcHBCopyFullPath
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcSetScope \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
srcSetScope \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
srcSetScope \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcCopyFilePath -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_din" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
srcSetScope \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcCopyFilePath -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx.u_dout" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcCopyFilePath -win $_nTrace1
srcHBSelect \
           "pulpino.pulpino_i.peripherals_i.axi_spi_slave_i.axi_spi_slave_i.u_dcfifo_rx" \
           -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
verdiDockWidgetSetCurTab -dock windowDock_nSchema_3
verdiSetActWin -win $_nSchema_3
srcSignalView -off
verdiDockWidgetMaximize -dock windowDock_nSchema_3
schZoomOut -win $_nSchema3 -pos 12889 7075
schDeselectAll -win $_nSchema3
schSelect -win $_nSchema3 -signal "clk_b"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -toggle -signal "clk_a"
schSelect -win $_nSchema3 -toggle -port "clk_b"
schSelect -win $_nSchema3 -toggle -port "clk_a"
schSelect -win $_nSchema3 -toggle -signal "data_async\[31:0\]"
schSelect -win $_nSchema3 -inst "u_din"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 6808 4428
schZoomOut -win $_nSchema3 -pos 6808 4427
schSelect -win $_nSchema3 -signal "clk"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "buffer"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 4004 3229
schPopViewUp -win $_nSchema3
schSelect -win $_nSchema3 -port "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schPopViewUp -win $_nSchema3
schSelect -win $_nSchema3 -inst "u_dout"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schZoomOut -win $_nSchema3 -pos 8969 792
schZoomOut -win $_nSchema3 -pos 8969 791
schZoomIn -win $_nSchema3 -pos 44518 2158
schZoomIn -win $_nSchema3 -pos 44519 2158
schZoomOut -win $_nSchema3 -pos 44518 2158
schZoomOut -win $_nSchema3 -pos 44518 2158
schZoomOut -win $_nSchema3 -pos 44518 2158
schZoomIn -win $_nSchema3 -pos 46461 1937
schZoomIn -win $_nSchema3 -pos 46461 1937
schZoomIn -win $_nSchema3 -pos 46460 1937
schZoomIn -win $_nSchema3 -pos 46461 1937
schZoomOut -win $_nSchema3 -pos 46460 1936
schZoomOut -win $_nSchema3 -pos 46459 1935
schZoomOut -win $_nSchema3 -pos 46459 1935
schZoomOut -win $_nSchema3 -pos 48042 4365
schZoomOut -win $_nSchema3 -pos 48315 1532
schPopViewUp -win $_nSchema3
schPopViewUp -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 7067 16704
schZoomOut -win $_nSchema3 -pos 7067 16660
schZoomIn -win $_nSchema3 -pos 4579 14388
schZoomIn -win $_nSchema3 -pos 4578 14388
schZoomIn -win $_nSchema3 -pos 4577 14388
schZoomIn -win $_nSchema3 -pos 4577 14387
schSelect -win $_nSchema3 -signal "spi_sclk"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "u_dcfifo_rx"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schZoomIn -win $_nSchema3 -pos 13415 5516
schZoomIn -win $_nSchema3 -pos 13414 5516
schZoomOut -win $_nSchema3 -pos 13448 5338
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -instport "u_dout" "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schPushViewIn -win $_nSchema3
schPopViewUp -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 16363 6192
schZoomOut -win $_nSchema3 -pos 16345 6175
schSelect -win $_nSchema3 -signal "write_token\[7:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "u_din"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -signal "clk"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "write_tr"
schProperties -win $_nSchema3 -Basic on -Library on
schSelect -win $_nSchema3 -inst "write_tr"
schPushViewIn -win $_nSchema3
schZoomOut -win $_nSchema3 -pos 12087 2739
schZoomOut -win $_nSchema3 -pos 8697 3261
schSelect -win $_nSchema3 -inst "update_state"
schProperties -win $_nSchema3 -Basic on -Library on
schPopViewUp -win $_nSchema3
schSelect -win $_nSchema3 -port "write_token\[7:0\]"
schProperties -win $_nSchema3 -Basic on
schPopViewUp -win $_nSchema3
schSelect -win $_nSchema3 -inst "u_dout"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schSelect -win $_nSchema3 -signal "write_token\[7:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "empty_synch"
schProperties -win $_nSchema3 -Basic on -Library on
schPushViewIn -win $_nSchema3
schPopViewUp -win $_nSchema3
schPopViewUp -win $_nSchema3
schSelect -win $_nSchema3 -signal "write_token\[7:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -signal "write_token\[7:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "u_din"
schProperties -win $_nSchema3 -Basic on -Library on
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -inst "u_dout"
schProperties -win $_nSchema3 -Basic on -Library on
schSelect -win $_nSchema3 -inst "u_din"
schProperties -win $_nSchema3 -Basic on -Library on
schSelect -win $_nSchema3 -signal "data_async\[31:0\]"
schProperties -win $_nSchema3 -Basic on
schSelect -win $_nSchema3 -toggle -inst "u_din"
schSelect -win $_nSchema3 -toggle -inst "u_dout"
srcSignalView -on
verdiFindBar -hide -widget MTB_SOURCE_TAB_1
srcSignalView -off
srcSignalView -on
verdiFindBar -hide -win nWave_2
verdiDockWidgetRestore -dock windowDock_nSchema_3
verdiWindowResize -win $_Verdi_1 "242" "118" "1440" "749"
