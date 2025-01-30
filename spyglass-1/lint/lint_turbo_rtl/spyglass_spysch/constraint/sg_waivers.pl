################################################################################
#This is an internally genertaed by spyglass to populate Waiver Info for Reports
#Note:Spyglass does not support any perl routine like "spyDecompileWaiverInfo"
#     The routine is purely for internal usage of spyglass
################################################################################


use SpyGlass;

spyClearWaiverHashInPerl(1);

spyComputeWaivedViolCount("totalWaivedViolationCount"=>'0',
                          "totalGeneratedCount"=>'203',
                          "totalReportCount"=>'203'
                         );

spyComputeViolCountForTurbo("totalGeneratedCount"=>'203',
                          "totalGeneratedSecCount"=>'0',
                          "totalWaivedPrimaryMsgCount"=>'0',
                          "totalWaivedSecMsgCount"=>'0',
                         );

1;
