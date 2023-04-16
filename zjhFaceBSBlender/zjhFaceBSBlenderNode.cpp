//
// Copyright (C) ZhaoJiahua
// 
// File: zjhFaceBSBlenderNode.cpp
//
// Dependency Graph Node: zjhFaceBSBlender
//
// Author: Maya Plug-in Wizard 2.0
//

#include "zjhFaceBSBlenderNode.h"

#include <maya/MPlug.h>
#include <maya/MDataBlock.h>
#include <maya/MDataHandle.h>

#include <maya/MGlobal.h>

MTypeId     zjhFaceBSBlender::id(0x00101);

MObject     zjhFaceBSBlender::browDownLInput;
MObject     zjhFaceBSBlender::browDownRInput;
MObject     zjhFaceBSBlender::browLateralLInput;
MObject     zjhFaceBSBlender::browLateralRInput;
MObject     zjhFaceBSBlender::browRaiseInLInput;
MObject     zjhFaceBSBlender::browRaiseInRInput;
MObject     zjhFaceBSBlender::browRaiseOuterLInput;
MObject     zjhFaceBSBlender::browRaiseOuterRInput;
MObject     zjhFaceBSBlender::earUpLInput;
MObject     zjhFaceBSBlender::earUpRInput;
MObject     zjhFaceBSBlender::eyeBlinkLInput;
MObject     zjhFaceBSBlender::eyeBlinkRInput;
MObject     zjhFaceBSBlender::eyeLidPressLInput;
MObject     zjhFaceBSBlender::eyeLidPressRInput;
MObject     zjhFaceBSBlender::eyeWidenLInput;
MObject     zjhFaceBSBlender::eyeWidenRInput;
MObject     zjhFaceBSBlender::eyeSquintInnerLInput;
MObject     zjhFaceBSBlender::eyeSquintInnerRInput;
MObject     zjhFaceBSBlender::eyeCheekRaiseLInput;
MObject     zjhFaceBSBlender::eyeCheekRaiseRInput;
MObject     zjhFaceBSBlender::eyeFaceScrunchLInput;
MObject     zjhFaceBSBlender::eyeFaceScrunchRInput;
MObject     zjhFaceBSBlender::eyeUpperLidUpLInput;
MObject     zjhFaceBSBlender::eyeUpperLidUpRInput;
MObject     zjhFaceBSBlender::eyeRelaxLInput;
MObject     zjhFaceBSBlender::eyeRelaxRInput;
MObject     zjhFaceBSBlender::eyeLowerLidUpLInput;
MObject     zjhFaceBSBlender::eyeLowerLidUpRInput;
MObject     zjhFaceBSBlender::eyeLowerLidDownLInput;
MObject     zjhFaceBSBlender::eyeLowerLidDownRInput;
MObject     zjhFaceBSBlender::eyeLookUpLInput;
MObject     zjhFaceBSBlender::eyeLookUpRInput;
MObject     zjhFaceBSBlender::eyeLookDownLInput;
MObject     zjhFaceBSBlender::eyeLookDownRInput;
MObject     zjhFaceBSBlender::eyeLookLeftLInput;
MObject     zjhFaceBSBlender::eyeLookLeftRInput;
MObject     zjhFaceBSBlender::eyeLookRightLInput;
MObject     zjhFaceBSBlender::eyeLookRightRInput;
MObject     zjhFaceBSBlender::eyePupilWideLInput;
MObject     zjhFaceBSBlender::eyePupilWideRInput;
MObject     zjhFaceBSBlender::eyePupilNarrowLInput;
MObject     zjhFaceBSBlender::eyePupilNarrowRInput;
MObject     zjhFaceBSBlender::eyeParallelLookDirectionInput;
MObject     zjhFaceBSBlender::eyelashesUpINLInput;
MObject     zjhFaceBSBlender::eyelashesUpINRInput;
MObject     zjhFaceBSBlender::eyelashesUpOUTLInput;
MObject     zjhFaceBSBlender::eyelashesUpOUTRInput;
MObject     zjhFaceBSBlender::eyelashesDownINLInput;
MObject     zjhFaceBSBlender::eyelashesDownINRInput;
MObject     zjhFaceBSBlender::eyelashesDownOUTLInput;
MObject     zjhFaceBSBlender::eyelashesDownOUTRInput;
MObject     zjhFaceBSBlender::noseWrinkleLInput;
MObject     zjhFaceBSBlender::noseWrinkleRInput;
MObject     zjhFaceBSBlender::noseWrinkleUpperLInput;
MObject     zjhFaceBSBlender::noseWrinkleUpperRInput;
MObject     zjhFaceBSBlender::noseNostrilDepressLInput;
MObject     zjhFaceBSBlender::noseNostrilDepressRInput;
MObject     zjhFaceBSBlender::noseNostrilDilateLInput;
MObject     zjhFaceBSBlender::noseNostrilDilateRInput;
MObject     zjhFaceBSBlender::noseNostrilCompressLInput;
MObject     zjhFaceBSBlender::noseNostrilCompressRInput;
MObject     zjhFaceBSBlender::noseNasolabialDeepenLInput;
MObject     zjhFaceBSBlender::noseNasolabialDeepenRInput;
MObject     zjhFaceBSBlender::mouthCheekSuckLInput;
MObject     zjhFaceBSBlender::mouthCheekSuckRInput;
MObject     zjhFaceBSBlender::mouthCheekBlowLInput;
MObject     zjhFaceBSBlender::mouthCheekBlowRInput;
MObject     zjhFaceBSBlender::mouthLipsBlowLInput;
MObject     zjhFaceBSBlender::mouthLipsBlowRInput;
MObject     zjhFaceBSBlender::mouthLeftInput;
MObject     zjhFaceBSBlender::mouthRightInput;
MObject     zjhFaceBSBlender::mouthUpInput;
MObject     zjhFaceBSBlender::mouthDownInput;
MObject     zjhFaceBSBlender::mouthUpperLipRaiseLInput;
MObject     zjhFaceBSBlender::mouthUpperLipRaiseRInput;
MObject     zjhFaceBSBlender::mouthLowerLipDepressLInput;
MObject     zjhFaceBSBlender::mouthLowerLipDepressRInput;
MObject     zjhFaceBSBlender::mouthCornerPullLInput;
MObject     zjhFaceBSBlender::mouthCornerPullRInput;
MObject     zjhFaceBSBlender::mouthStretchLInput;
MObject     zjhFaceBSBlender::mouthStretchRInput;
MObject     zjhFaceBSBlender::mouthStretchLipsCloseLInput;
MObject     zjhFaceBSBlender::mouthStretchLipsCloseRInput;
MObject     zjhFaceBSBlender::mouthDimpleLInput;
MObject     zjhFaceBSBlender::mouthDimpleRInput;
MObject     zjhFaceBSBlender::mouthCornerDepressLInput;
MObject     zjhFaceBSBlender::mouthCornerDepressRInput;
MObject     zjhFaceBSBlender::mouthPressULInput;
MObject     zjhFaceBSBlender::mouthPressURInput;
MObject     zjhFaceBSBlender::mouthPressDLInput;
MObject     zjhFaceBSBlender::mouthPressDRInput;
MObject     zjhFaceBSBlender::mouthLipsPurseULInput;
MObject     zjhFaceBSBlender::mouthLipsPurseURInput;
MObject     zjhFaceBSBlender::mouthLipsPurseDLInput;
MObject     zjhFaceBSBlender::mouthLipsPurseDRInput;
MObject     zjhFaceBSBlender::mouthLipsTowardsULInput;
MObject     zjhFaceBSBlender::mouthLipsTowardsURInput;
MObject     zjhFaceBSBlender::mouthLipsTowardsDLInput;
MObject     zjhFaceBSBlender::mouthLipsTowardsDRInput;
MObject     zjhFaceBSBlender::mouthFunnelULInput;
MObject     zjhFaceBSBlender::mouthFunnelURInput;
MObject     zjhFaceBSBlender::mouthFunnelDLInput;
MObject     zjhFaceBSBlender::mouthFunnelDRInput;
MObject     zjhFaceBSBlender::mouthLipsTogetherULInput;
MObject     zjhFaceBSBlender::mouthLipsTogetherURInput;
MObject     zjhFaceBSBlender::mouthLipsTogetherDLInput;
MObject     zjhFaceBSBlender::mouthLipsTogetherDRInput;
MObject     zjhFaceBSBlender::mouthUpperLipBiteLInput;
MObject     zjhFaceBSBlender::mouthUpperLipBiteRInput;
MObject     zjhFaceBSBlender::mouthLowerLipBiteLInput;
MObject     zjhFaceBSBlender::mouthLowerLipBiteRInput;
MObject     zjhFaceBSBlender::mouthLipsTightenULInput;
MObject     zjhFaceBSBlender::mouthLipsTightenURInput;
MObject     zjhFaceBSBlender::mouthLipsTightenDLInput;
MObject     zjhFaceBSBlender::mouthLipsTightenDRInput;
MObject     zjhFaceBSBlender::mouthLipsPressLInput;
MObject     zjhFaceBSBlender::mouthLipsPressRInput;
MObject     zjhFaceBSBlender::mouthSharpCornerPullLInput;
MObject     zjhFaceBSBlender::mouthSharpCornerPullRInput;
MObject     zjhFaceBSBlender::mouthStickyUCInput;
MObject     zjhFaceBSBlender::mouthStickyUINLInput;
MObject     zjhFaceBSBlender::mouthStickyUINRInput;
MObject     zjhFaceBSBlender::mouthStickyUOUTLInput;
MObject     zjhFaceBSBlender::mouthStickyUOUTRInput;
MObject     zjhFaceBSBlender::mouthStickyDCInput;
MObject     zjhFaceBSBlender::mouthStickyDINLInput;
MObject     zjhFaceBSBlender::mouthStickyDINRInput;
MObject     zjhFaceBSBlender::mouthStickyDOUTLInput;
MObject     zjhFaceBSBlender::mouthStickyDOUTRInput;
MObject     zjhFaceBSBlender::mouthLipsStickyLPh1Input;
MObject     zjhFaceBSBlender::mouthLipsStickyLPh2Input;
MObject     zjhFaceBSBlender::mouthLipsStickyLPh3Input;
MObject     zjhFaceBSBlender::mouthLipsStickyRPh1Input;
MObject     zjhFaceBSBlender::mouthLipsStickyRPh2Input;
MObject     zjhFaceBSBlender::mouthLipsStickyRPh3Input;
MObject     zjhFaceBSBlender::mouthLipsPushULInput;
MObject     zjhFaceBSBlender::mouthLipsPushURInput;
MObject     zjhFaceBSBlender::mouthLipsPushDLInput;
MObject     zjhFaceBSBlender::mouthLipsPushDRInput;
MObject     zjhFaceBSBlender::mouthLipsPullULInput;
MObject     zjhFaceBSBlender::mouthLipsPullURInput;
MObject     zjhFaceBSBlender::mouthLipsPullDLInput;
MObject     zjhFaceBSBlender::mouthLipsPullDRInput;
MObject     zjhFaceBSBlender::mouthLipsThinULInput;
MObject     zjhFaceBSBlender::mouthLipsThinURInput;
MObject     zjhFaceBSBlender::mouthLipsThinDLInput;
MObject     zjhFaceBSBlender::mouthLipsThinDRInput;
MObject     zjhFaceBSBlender::mouthLipsThickULInput;
MObject     zjhFaceBSBlender::mouthLipsThickURInput;
MObject     zjhFaceBSBlender::mouthLipsThickDLInput;
MObject     zjhFaceBSBlender::mouthLipsThickDRInput;
MObject     zjhFaceBSBlender::mouthCornerSharpenULInput;
MObject     zjhFaceBSBlender::mouthCornerSharpenURInput;
MObject     zjhFaceBSBlender::mouthCornerSharpenDLInput;
MObject     zjhFaceBSBlender::mouthCornerSharpenDRInput;
MObject     zjhFaceBSBlender::mouthCornerRounderULInput;
MObject     zjhFaceBSBlender::mouthCornerRounderURInput;
MObject     zjhFaceBSBlender::mouthCornerRounderDLInput;
MObject     zjhFaceBSBlender::mouthCornerRounderDRInput;
MObject     zjhFaceBSBlender::mouthUpperLipTowardsTeethLInput;
MObject     zjhFaceBSBlender::mouthUpperLipTowardsTeethRInput;
MObject     zjhFaceBSBlender::mouthLowerLipTowardsTeethLInput;
MObject     zjhFaceBSBlender::mouthLowerLipTowardsTeethRInput;
MObject     zjhFaceBSBlender::mouthUpperLipShiftLeftInput;
MObject     zjhFaceBSBlender::mouthUpperLipShiftRightInput;
MObject     zjhFaceBSBlender::mouthLowerLipShiftLeftInput;
MObject     zjhFaceBSBlender::mouthLowerLipShiftRightInput;
MObject     zjhFaceBSBlender::mouthUpperLipRollInLInput;
MObject     zjhFaceBSBlender::mouthUpperLipRollInRInput;
MObject     zjhFaceBSBlender::mouthUpperLipRollOutLInput;
MObject     zjhFaceBSBlender::mouthUpperLipRollOutRInput;
MObject     zjhFaceBSBlender::mouthLowerLipRollInLInput;
MObject     zjhFaceBSBlender::mouthLowerLipRollInRInput;
MObject     zjhFaceBSBlender::mouthLowerLipRollOutLInput;
MObject     zjhFaceBSBlender::mouthLowerLipRollOutRInput;
MObject     zjhFaceBSBlender::mouthCornerUpLInput;
MObject     zjhFaceBSBlender::mouthCornerUpRInput;
MObject     zjhFaceBSBlender::mouthCornerDownLInput;
MObject     zjhFaceBSBlender::mouthCornerDownRInput;
MObject     zjhFaceBSBlender::mouthCornerWideLInput;
MObject     zjhFaceBSBlender::mouthCornerWideRInput;
MObject     zjhFaceBSBlender::mouthCornerNarrowLInput;
MObject     zjhFaceBSBlender::mouthCornerNarrowRInput;
MObject     zjhFaceBSBlender::tongueUpInput;
MObject     zjhFaceBSBlender::tongueDownInput;
MObject     zjhFaceBSBlender::tongueLeftInput;
MObject     zjhFaceBSBlender::tongueRightInput;
MObject     zjhFaceBSBlender::tongueOutInput;
MObject     zjhFaceBSBlender::tongueInInput;
MObject     zjhFaceBSBlender::tongueRollUpInput;
MObject     zjhFaceBSBlender::tongueRollDownInput;
MObject     zjhFaceBSBlender::tongueRollLeftInput;
MObject     zjhFaceBSBlender::tongueRollRightInput;
MObject     zjhFaceBSBlender::tongueTipUpInput;
MObject     zjhFaceBSBlender::tongueTipDownInput;
MObject     zjhFaceBSBlender::tongueTipLeftInput;
MObject     zjhFaceBSBlender::tongueTipRightInput;
MObject     zjhFaceBSBlender::tongueWideInput;
MObject     zjhFaceBSBlender::tongueNarrowInput;
MObject     zjhFaceBSBlender::tonguePressInput;
MObject     zjhFaceBSBlender::jawOpenInput;
MObject     zjhFaceBSBlender::jawLeftInput;
MObject     zjhFaceBSBlender::jawRightInput;
MObject     zjhFaceBSBlender::jawFwdInput;
MObject     zjhFaceBSBlender::jawBackInput;
MObject     zjhFaceBSBlender::jawClenchLInput;
MObject     zjhFaceBSBlender::jawClenchRInput;
MObject     zjhFaceBSBlender::jawChinRaiseDLInput;
MObject     zjhFaceBSBlender::jawChinRaiseDRInput;
MObject     zjhFaceBSBlender::jawChinRaiseULInput;
MObject     zjhFaceBSBlender::jawChinRaiseURInput;
MObject     zjhFaceBSBlender::jawChinCompressLInput;
MObject     zjhFaceBSBlender::jawChinCompressRInput;
MObject     zjhFaceBSBlender::jawOpenExtremeInput;
MObject     zjhFaceBSBlender::neckStretchLInput;
MObject     zjhFaceBSBlender::neckStretchRInput;
MObject     zjhFaceBSBlender::neckSwallowPh1Input;
MObject     zjhFaceBSBlender::neckSwallowPh2Input;
MObject     zjhFaceBSBlender::neckSwallowPh3Input;
MObject     zjhFaceBSBlender::neckSwallowPh4Input;
MObject     zjhFaceBSBlender::neckMastoidContractLInput;
MObject     zjhFaceBSBlender::neckMastoidContractRInput;
MObject     zjhFaceBSBlender::neckThroatDownInput;
MObject     zjhFaceBSBlender::neckThroatUpInput;
MObject     zjhFaceBSBlender::neckDigastricDownInput;
MObject     zjhFaceBSBlender::neckDigastricUpInput;
MObject     zjhFaceBSBlender::neckThroatExhaleInput;
MObject     zjhFaceBSBlender::neckThroatInhaleInput;
MObject     zjhFaceBSBlender::teethUpUInput;
MObject     zjhFaceBSBlender::teethUpDInput;
MObject     zjhFaceBSBlender::teethDownUInput;
MObject     zjhFaceBSBlender::teethDownDInput;
MObject     zjhFaceBSBlender::teethLeftUInput;
MObject     zjhFaceBSBlender::teethLeftDInput;
MObject     zjhFaceBSBlender::teethRightUInput;
MObject     zjhFaceBSBlender::teethRightDInput;
MObject     zjhFaceBSBlender::teethFwdUInput;
MObject     zjhFaceBSBlender::teethFwdDInput;
MObject     zjhFaceBSBlender::teethBackUInput;
MObject     zjhFaceBSBlender::teethBackDInput;
MObject     zjhFaceBSBlender::headTurnUpUInput;
MObject     zjhFaceBSBlender::headTurnUpMInput;
MObject     zjhFaceBSBlender::headTurnUpDInput;
MObject     zjhFaceBSBlender::headTurnDownUInput;
MObject     zjhFaceBSBlender::headTurnDownMInput;
MObject     zjhFaceBSBlender::headTurnDownDInput;
MObject     zjhFaceBSBlender::headTurnLeftUInput;
MObject     zjhFaceBSBlender::headTurnLeftMInput;
MObject     zjhFaceBSBlender::headTurnLeftDInput;
MObject     zjhFaceBSBlender::headTurnRightUInput;
MObject     zjhFaceBSBlender::headTurnRightMInput;
MObject     zjhFaceBSBlender::headTurnRightDInput;
MObject     zjhFaceBSBlender::headTiltLeftUInput;
MObject     zjhFaceBSBlender::headTiltLeftMInput;
MObject     zjhFaceBSBlender::headTiltLeftDInput;
MObject     zjhFaceBSBlender::headTiltRightUInput;
MObject     zjhFaceBSBlender::headTiltRightMInput;
MObject     zjhFaceBSBlender::headTiltRightDInput;
MObject     zjhFaceBSBlender::lookAtSwitchInput;
MObject     zjhFaceBSBlender::browDownLOutput;
MObject     zjhFaceBSBlender::browDownROutput;
MObject     zjhFaceBSBlender::browLateralLOutput;
MObject     zjhFaceBSBlender::browLateralROutput;
MObject     zjhFaceBSBlender::browRaiseInLOutput;
MObject     zjhFaceBSBlender::browRaiseInROutput;
MObject     zjhFaceBSBlender::browRaiseOuterLOutput;
MObject     zjhFaceBSBlender::browRaiseOuterROutput;
MObject     zjhFaceBSBlender::earUpLOutput;
MObject     zjhFaceBSBlender::earUpROutput;
MObject     zjhFaceBSBlender::eyeBlinkLOutput;
MObject     zjhFaceBSBlender::eyeBlinkROutput;
MObject     zjhFaceBSBlender::eyeLidPressLOutput;
MObject     zjhFaceBSBlender::eyeLidPressROutput;
MObject     zjhFaceBSBlender::eyeWidenLOutput;
MObject     zjhFaceBSBlender::eyeWidenROutput;
MObject     zjhFaceBSBlender::eyeSquintInnerLOutput;
MObject     zjhFaceBSBlender::eyeSquintInnerROutput;
MObject     zjhFaceBSBlender::eyeCheekRaiseLOutput;
MObject     zjhFaceBSBlender::eyeCheekRaiseROutput;
MObject     zjhFaceBSBlender::eyeFaceScrunchLOutput;
MObject     zjhFaceBSBlender::eyeFaceScrunchROutput;
MObject     zjhFaceBSBlender::eyeUpperLidUpLOutput;
MObject     zjhFaceBSBlender::eyeUpperLidUpROutput;
MObject     zjhFaceBSBlender::eyeRelaxLOutput;
MObject     zjhFaceBSBlender::eyeRelaxROutput;
MObject     zjhFaceBSBlender::eyeLowerLidUpLOutput;
MObject     zjhFaceBSBlender::eyeLowerLidUpROutput;
MObject     zjhFaceBSBlender::eyeLowerLidDownLOutput;
MObject     zjhFaceBSBlender::eyeLowerLidDownROutput;
MObject     zjhFaceBSBlender::eyeLookUpLOutput;
MObject     zjhFaceBSBlender::eyeLookUpROutput;
MObject     zjhFaceBSBlender::eyeLookDownLOutput;
MObject     zjhFaceBSBlender::eyeLookDownROutput;
MObject     zjhFaceBSBlender::eyeLookLeftLOutput;
MObject     zjhFaceBSBlender::eyeLookLeftROutput;
MObject     zjhFaceBSBlender::eyeLookRightLOutput;
MObject     zjhFaceBSBlender::eyeLookRightROutput;
MObject     zjhFaceBSBlender::eyePupilWideLOutput;
MObject     zjhFaceBSBlender::eyePupilWideROutput;
MObject     zjhFaceBSBlender::eyePupilNarrowLOutput;
MObject     zjhFaceBSBlender::eyePupilNarrowROutput;
MObject     zjhFaceBSBlender::eyeParallelLookDirectionOutput;
MObject     zjhFaceBSBlender::eyelashesUpINLOutput;
MObject     zjhFaceBSBlender::eyelashesUpINROutput;
MObject     zjhFaceBSBlender::eyelashesUpOUTLOutput;
MObject     zjhFaceBSBlender::eyelashesUpOUTROutput;
MObject     zjhFaceBSBlender::eyelashesDownINLOutput;
MObject     zjhFaceBSBlender::eyelashesDownINROutput;
MObject     zjhFaceBSBlender::eyelashesDownOUTLOutput;
MObject     zjhFaceBSBlender::eyelashesDownOUTROutput;
MObject     zjhFaceBSBlender::noseWrinkleLOutput;
MObject     zjhFaceBSBlender::noseWrinkleROutput;
MObject     zjhFaceBSBlender::noseWrinkleUpperLOutput;
MObject     zjhFaceBSBlender::noseWrinkleUpperROutput;
MObject     zjhFaceBSBlender::noseNostrilDepressLOutput;
MObject     zjhFaceBSBlender::noseNostrilDepressROutput;
MObject     zjhFaceBSBlender::noseNostrilDilateLOutput;
MObject     zjhFaceBSBlender::noseNostrilDilateROutput;
MObject     zjhFaceBSBlender::noseNostrilCompressLOutput;
MObject     zjhFaceBSBlender::noseNostrilCompressROutput;
MObject     zjhFaceBSBlender::noseNasolabialDeepenLOutput;
MObject     zjhFaceBSBlender::noseNasolabialDeepenROutput;
MObject     zjhFaceBSBlender::mouthCheekSuckLOutput;
MObject     zjhFaceBSBlender::mouthCheekSuckROutput;
MObject     zjhFaceBSBlender::mouthCheekBlowLOutput;
MObject     zjhFaceBSBlender::mouthCheekBlowROutput;
MObject     zjhFaceBSBlender::mouthLipsBlowLOutput;
MObject     zjhFaceBSBlender::mouthLipsBlowROutput;
MObject     zjhFaceBSBlender::mouthLeftOutput;
MObject     zjhFaceBSBlender::mouthRightOutput;
MObject     zjhFaceBSBlender::mouthUpOutput;
MObject     zjhFaceBSBlender::mouthDownOutput;
MObject     zjhFaceBSBlender::mouthUpperLipRaiseLOutput;
MObject     zjhFaceBSBlender::mouthUpperLipRaiseROutput;
MObject     zjhFaceBSBlender::mouthLowerLipDepressLOutput;
MObject     zjhFaceBSBlender::mouthLowerLipDepressROutput;
MObject     zjhFaceBSBlender::mouthCornerPullLOutput;
MObject     zjhFaceBSBlender::mouthCornerPullROutput;
MObject     zjhFaceBSBlender::mouthStretchLOutput;
MObject     zjhFaceBSBlender::mouthStretchROutput;
MObject     zjhFaceBSBlender::mouthStretchLipsCloseLOutput;
MObject     zjhFaceBSBlender::mouthStretchLipsCloseROutput;
MObject     zjhFaceBSBlender::mouthDimpleLOutput;
MObject     zjhFaceBSBlender::mouthDimpleROutput;
MObject     zjhFaceBSBlender::mouthCornerDepressLOutput;
MObject     zjhFaceBSBlender::mouthCornerDepressROutput;
MObject     zjhFaceBSBlender::mouthPressULOutput;
MObject     zjhFaceBSBlender::mouthPressUROutput;
MObject     zjhFaceBSBlender::mouthPressDLOutput;
MObject     zjhFaceBSBlender::mouthPressDROutput;
MObject     zjhFaceBSBlender::mouthLipsPurseULOutput;
MObject     zjhFaceBSBlender::mouthLipsPurseUROutput;
MObject     zjhFaceBSBlender::mouthLipsPurseDLOutput;
MObject     zjhFaceBSBlender::mouthLipsPurseDROutput;
MObject     zjhFaceBSBlender::mouthLipsTowardsULOutput;
MObject     zjhFaceBSBlender::mouthLipsTowardsUROutput;
MObject     zjhFaceBSBlender::mouthLipsTowardsDLOutput;
MObject     zjhFaceBSBlender::mouthLipsTowardsDROutput;
MObject     zjhFaceBSBlender::mouthFunnelULOutput;
MObject     zjhFaceBSBlender::mouthFunnelUROutput;
MObject     zjhFaceBSBlender::mouthFunnelDLOutput;
MObject     zjhFaceBSBlender::mouthFunnelDROutput;
MObject     zjhFaceBSBlender::mouthLipsTogetherULOutput;
MObject     zjhFaceBSBlender::mouthLipsTogetherUROutput;
MObject     zjhFaceBSBlender::mouthLipsTogetherDLOutput;
MObject     zjhFaceBSBlender::mouthLipsTogetherDROutput;
MObject     zjhFaceBSBlender::mouthUpperLipBiteLOutput;
MObject     zjhFaceBSBlender::mouthUpperLipBiteROutput;
MObject     zjhFaceBSBlender::mouthLowerLipBiteLOutput;
MObject     zjhFaceBSBlender::mouthLowerLipBiteROutput;
MObject     zjhFaceBSBlender::mouthLipsTightenULOutput;
MObject     zjhFaceBSBlender::mouthLipsTightenUROutput;
MObject     zjhFaceBSBlender::mouthLipsTightenDLOutput;
MObject     zjhFaceBSBlender::mouthLipsTightenDROutput;
MObject     zjhFaceBSBlender::mouthLipsPressLOutput;
MObject     zjhFaceBSBlender::mouthLipsPressROutput;
MObject     zjhFaceBSBlender::mouthSharpCornerPullLOutput;
MObject     zjhFaceBSBlender::mouthSharpCornerPullROutput;
MObject     zjhFaceBSBlender::mouthStickyUCOutput;
MObject     zjhFaceBSBlender::mouthStickyUINLOutput;
MObject     zjhFaceBSBlender::mouthStickyUINROutput;
MObject     zjhFaceBSBlender::mouthStickyUOUTLOutput;
MObject     zjhFaceBSBlender::mouthStickyUOUTROutput;
MObject     zjhFaceBSBlender::mouthStickyDCOutput;
MObject     zjhFaceBSBlender::mouthStickyDINLOutput;
MObject     zjhFaceBSBlender::mouthStickyDINROutput;
MObject     zjhFaceBSBlender::mouthStickyDOUTLOutput;
MObject     zjhFaceBSBlender::mouthStickyDOUTROutput;
MObject     zjhFaceBSBlender::mouthLipsStickyLPh1Output;
MObject     zjhFaceBSBlender::mouthLipsStickyLPh2Output;
MObject     zjhFaceBSBlender::mouthLipsStickyLPh3Output;
MObject     zjhFaceBSBlender::mouthLipsStickyRPh1Output;
MObject     zjhFaceBSBlender::mouthLipsStickyRPh2Output;
MObject     zjhFaceBSBlender::mouthLipsStickyRPh3Output;
MObject     zjhFaceBSBlender::mouthLipsPushULOutput;
MObject     zjhFaceBSBlender::mouthLipsPushUROutput;
MObject     zjhFaceBSBlender::mouthLipsPushDLOutput;
MObject     zjhFaceBSBlender::mouthLipsPushDROutput;
MObject     zjhFaceBSBlender::mouthLipsPullULOutput;
MObject     zjhFaceBSBlender::mouthLipsPullUROutput;
MObject     zjhFaceBSBlender::mouthLipsPullDLOutput;
MObject     zjhFaceBSBlender::mouthLipsPullDROutput;
MObject     zjhFaceBSBlender::mouthLipsThinULOutput;
MObject     zjhFaceBSBlender::mouthLipsThinUROutput;
MObject     zjhFaceBSBlender::mouthLipsThinDLOutput;
MObject     zjhFaceBSBlender::mouthLipsThinDROutput;
MObject     zjhFaceBSBlender::mouthLipsThickULOutput;
MObject     zjhFaceBSBlender::mouthLipsThickUROutput;
MObject     zjhFaceBSBlender::mouthLipsThickDLOutput;
MObject     zjhFaceBSBlender::mouthLipsThickDROutput;
MObject     zjhFaceBSBlender::mouthCornerSharpenULOutput;
MObject     zjhFaceBSBlender::mouthCornerSharpenUROutput;
MObject     zjhFaceBSBlender::mouthCornerSharpenDLOutput;
MObject     zjhFaceBSBlender::mouthCornerSharpenDROutput;
MObject     zjhFaceBSBlender::mouthCornerRounderULOutput;
MObject     zjhFaceBSBlender::mouthCornerRounderUROutput;
MObject     zjhFaceBSBlender::mouthCornerRounderDLOutput;
MObject     zjhFaceBSBlender::mouthCornerRounderDROutput;
MObject     zjhFaceBSBlender::mouthUpperLipTowardsTeethLOutput;
MObject     zjhFaceBSBlender::mouthUpperLipTowardsTeethROutput;
MObject     zjhFaceBSBlender::mouthLowerLipTowardsTeethLOutput;
MObject     zjhFaceBSBlender::mouthLowerLipTowardsTeethROutput;
MObject     zjhFaceBSBlender::mouthUpperLipShiftLeftOutput;
MObject     zjhFaceBSBlender::mouthUpperLipShiftRightOutput;
MObject     zjhFaceBSBlender::mouthLowerLipShiftLeftOutput;
MObject     zjhFaceBSBlender::mouthLowerLipShiftRightOutput;
MObject     zjhFaceBSBlender::mouthUpperLipRollInLOutput;
MObject     zjhFaceBSBlender::mouthUpperLipRollInROutput;
MObject     zjhFaceBSBlender::mouthUpperLipRollOutLOutput;
MObject     zjhFaceBSBlender::mouthUpperLipRollOutROutput;
MObject     zjhFaceBSBlender::mouthLowerLipRollInLOutput;
MObject     zjhFaceBSBlender::mouthLowerLipRollInROutput;
MObject     zjhFaceBSBlender::mouthLowerLipRollOutLOutput;
MObject     zjhFaceBSBlender::mouthLowerLipRollOutROutput;
MObject     zjhFaceBSBlender::mouthCornerUpLOutput;
MObject     zjhFaceBSBlender::mouthCornerUpROutput;
MObject     zjhFaceBSBlender::mouthCornerDownLOutput;
MObject     zjhFaceBSBlender::mouthCornerDownROutput;
MObject     zjhFaceBSBlender::mouthCornerWideLOutput;
MObject     zjhFaceBSBlender::mouthCornerWideROutput;
MObject     zjhFaceBSBlender::mouthCornerNarrowLOutput;
MObject     zjhFaceBSBlender::mouthCornerNarrowROutput;
MObject     zjhFaceBSBlender::tongueUpOutput;
MObject     zjhFaceBSBlender::tongueDownOutput;
MObject     zjhFaceBSBlender::tongueLeftOutput;
MObject     zjhFaceBSBlender::tongueRightOutput;
MObject     zjhFaceBSBlender::tongueOutOutput;
MObject     zjhFaceBSBlender::tongueInOutput;
MObject     zjhFaceBSBlender::tongueRollUpOutput;
MObject     zjhFaceBSBlender::tongueRollDownOutput;
MObject     zjhFaceBSBlender::tongueRollLeftOutput;
MObject     zjhFaceBSBlender::tongueRollRightOutput;
MObject     zjhFaceBSBlender::tongueTipUpOutput;
MObject     zjhFaceBSBlender::tongueTipDownOutput;
MObject     zjhFaceBSBlender::tongueTipLeftOutput;
MObject     zjhFaceBSBlender::tongueTipRightOutput;
MObject     zjhFaceBSBlender::tongueWideOutput;
MObject     zjhFaceBSBlender::tongueNarrowOutput;
MObject     zjhFaceBSBlender::tonguePressOutput;
MObject     zjhFaceBSBlender::jawOpenOutput;
MObject     zjhFaceBSBlender::jawLeftOutput;
MObject     zjhFaceBSBlender::jawRightOutput;
MObject     zjhFaceBSBlender::jawFwdOutput;
MObject     zjhFaceBSBlender::jawBackOutput;
MObject     zjhFaceBSBlender::jawClenchLOutput;
MObject     zjhFaceBSBlender::jawClenchROutput;
MObject     zjhFaceBSBlender::jawChinRaiseDLOutput;
MObject     zjhFaceBSBlender::jawChinRaiseDROutput;
MObject     zjhFaceBSBlender::jawChinRaiseULOutput;
MObject     zjhFaceBSBlender::jawChinRaiseUROutput;
MObject     zjhFaceBSBlender::jawChinCompressLOutput;
MObject     zjhFaceBSBlender::jawChinCompressROutput;
MObject     zjhFaceBSBlender::jawOpenExtremeOutput;
MObject     zjhFaceBSBlender::neckStretchLOutput;
MObject     zjhFaceBSBlender::neckStretchROutput;
MObject     zjhFaceBSBlender::neckSwallowPh1Output;
MObject     zjhFaceBSBlender::neckSwallowPh2Output;
MObject     zjhFaceBSBlender::neckSwallowPh3Output;
MObject     zjhFaceBSBlender::neckSwallowPh4Output;
MObject     zjhFaceBSBlender::neckMastoidContractLOutput;
MObject     zjhFaceBSBlender::neckMastoidContractROutput;
MObject     zjhFaceBSBlender::neckThroatDownOutput;
MObject     zjhFaceBSBlender::neckThroatUpOutput;
MObject     zjhFaceBSBlender::neckDigastricDownOutput;
MObject     zjhFaceBSBlender::neckDigastricUpOutput;
MObject     zjhFaceBSBlender::neckThroatExhaleOutput;
MObject     zjhFaceBSBlender::neckThroatInhaleOutput;
MObject     zjhFaceBSBlender::teethUpUOutput;
MObject     zjhFaceBSBlender::teethUpDOutput;
MObject     zjhFaceBSBlender::teethDownUOutput;
MObject     zjhFaceBSBlender::teethDownDOutput;
MObject     zjhFaceBSBlender::teethLeftUOutput;
MObject     zjhFaceBSBlender::teethLeftDOutput;
MObject     zjhFaceBSBlender::teethRightUOutput;
MObject     zjhFaceBSBlender::teethRightDOutput;
MObject     zjhFaceBSBlender::teethFwdUOutput;
MObject     zjhFaceBSBlender::teethFwdDOutput;
MObject     zjhFaceBSBlender::teethBackUOutput;
MObject     zjhFaceBSBlender::teethBackDOutput;
MObject     zjhFaceBSBlender::headTurnUpUOutput;
MObject     zjhFaceBSBlender::headTurnUpMOutput;
MObject     zjhFaceBSBlender::headTurnUpDOutput;
MObject     zjhFaceBSBlender::headTurnDownUOutput;
MObject     zjhFaceBSBlender::headTurnDownMOutput;
MObject     zjhFaceBSBlender::headTurnDownDOutput;
MObject     zjhFaceBSBlender::headTurnLeftUOutput;
MObject     zjhFaceBSBlender::headTurnLeftMOutput;
MObject     zjhFaceBSBlender::headTurnLeftDOutput;
MObject     zjhFaceBSBlender::headTurnRightUOutput;
MObject     zjhFaceBSBlender::headTurnRightMOutput;
MObject     zjhFaceBSBlender::headTurnRightDOutput;
MObject     zjhFaceBSBlender::headTiltLeftUOutput;
MObject     zjhFaceBSBlender::headTiltLeftMOutput;
MObject     zjhFaceBSBlender::headTiltLeftDOutput;
MObject     zjhFaceBSBlender::headTiltRightUOutput;
MObject     zjhFaceBSBlender::headTiltRightMOutput;
MObject     zjhFaceBSBlender::headTiltRightDOutput;
MObject     zjhFaceBSBlender::lookAtSwitchOutput;

//////////////extrBlend////////////////////////////////////////////////////////////////////////////////////////
MObject		zjhFaceBSBlender::brow_raise_L;
MObject		zjhFaceBSBlender::brow_raise_R;
MObject		zjhFaceBSBlender::Bdown_Blateral__browLower_L;
MObject		zjhFaceBSBlender::Bdown_Blateral__browLower_R;
MObject     zjhFaceBSBlender::BraiseIn_Bdown__browInnerRaise_L;
MObject     zjhFaceBSBlender::BraiseIn_Bdown__browInnerRaise_R;
MObject     zjhFaceBSBlender::ElookUp_ElookLeft_L;
MObject     zjhFaceBSBlender::ElookUp_ElookLeft_R;
MObject     zjhFaceBSBlender::ElookDown_ElookLeft_L;
MObject     zjhFaceBSBlender::ElookDown_ElookLeft_R;
MObject     zjhFaceBSBlender::ElookUp_ElookRight_L;
MObject     zjhFaceBSBlender::ElookUp_ElookRight_R;
MObject     zjhFaceBSBlender::ElookDown_ElookRight_L;
MObject     zjhFaceBSBlender::ElookDown_ElookRight_R;
MObject     zjhFaceBSBlender::EsquintInner_Eblink_L;
MObject     zjhFaceBSBlender::EsquintInner_Eblink_R;
MObject     zjhFaceBSBlender::EcheekRaise_Eblink_L;
MObject     zjhFaceBSBlender::EcheekRaise_Eblink_R;
MObject     zjhFaceBSBlender::EcheekRaise_EsquintInner_L;
MObject     zjhFaceBSBlender::EcheekRaise_EsquintInner_R;
MObject     zjhFaceBSBlender::ElookLeft_Eblink_L;
MObject     zjhFaceBSBlender::ElookLeft_Eblink_R;
MObject     zjhFaceBSBlender::ElookUp_Eblink_L;
MObject     zjhFaceBSBlender::ElookUp_Eblink_R;
MObject     zjhFaceBSBlender::ElookDown_Eblink_L;
MObject     zjhFaceBSBlender::ElookDown_Eblink_R;
MObject     zjhFaceBSBlender::ElookRight_Eblink_L;
MObject     zjhFaceBSBlender::ElookRight_Eblink_R;
MObject     zjhFaceBSBlender::nose_wrinkle_cor;		//nose_wrinkle_left & nose_wrinkle_right
MObject     zjhFaceBSBlender::EcheekRaise_NSwrinkle_L;
MObject     zjhFaceBSBlender::EcheekRaise_NSwrinkle_R;
MObject     zjhFaceBSBlender::mouth_dimple_cor;		//mouth_dimple_left and mouth_dimple_right
MObject     zjhFaceBSBlender::mouth_cornerPull_cor;		//mouth_cornerPull_left and mouth_cornerPull_right
MObject     zjhFaceBSBlender::mouth_upperLipRaise_cor;		//mouth_upperLipRaise_left and mouth_upperLipRaise_right
MObject     zjhFaceBSBlender::mouth_stretch_cor;		//mouth_stretch_left and mouth_stretch_right
MObject     zjhFaceBSBlender::mouth_lowerLipDepress_cor;		//mouth_lowerLipDepress_left and mouth_lowerLipDepress_right
MObject     zjhFaceBSBlender::McornerPull_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_Mdimple_R;
MObject     zjhFaceBSBlender::Mdimple_MupperLipRaise_L;		//CTRL_L_mouth_dimple and CTRL_L_mouth_upperLipRaise
MObject     zjhFaceBSBlender::Mdimple_MupperLipRaise_R;
MObject     zjhFaceBSBlender::Mstretch_Mdimple_L;				//CTRL_L_mouth_dimple and CTRL_L_mouth_dimple
MObject     zjhFaceBSBlender::Mstretch_Mdimple_R;
MObject     zjhFaceBSBlender::Mdimple_MlowerLipDepress_L;		//CTRL_L_mouth_dimple and CTRL_L_mouth_lowerLipDepress
MObject     zjhFaceBSBlender::Mdimple_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::McornerPull_MsharpCornerPull_L;		//CTRL_L_mouth_cornerPull and CTRL_L_mouth_sharpCornerPull
MObject     zjhFaceBSBlender::McornerPull_MsharpCornerPull_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_L;		//CTRL_L_mouth_cornerPull and CTRL_L_mouth_upperLipRaise
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_L;				//CTRL_L_mouth_cornerPull and CTRL_L_mouth_stretch
MObject     zjhFaceBSBlender::McornerPull_Mstretch_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_L;		//CTRL_L_mouth_cornerPull and CTRL_L_mouth_lowerLipDepress
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::MupperLipRaise_McornerDepress_L;	//CTRL_L_mouth_upperLipRaise and CTRL_L_mouth_cornerDepress
MObject     zjhFaceBSBlender::MupperLipRaise_McornerDepress_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_L;			//CTRL_L_mouth_upperLipRaise and CTRL_L_mouth_stretch
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_R;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_L;	//CTRL_L_mouth_upperLipRaise and CTRL_L_mouth_lowerLipDepress
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_L;		//CTRL_L_mouth_stretch and CTRL_L_mouth_lowerLipDepress
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::Mdimple_Jopen_L;
MObject     zjhFaceBSBlender::Mdimple_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Jopen_R;
MObject     zjhFaceBSBlender::McornerDepress_Jopen_L;
MObject     zjhFaceBSBlender::McornerDepress_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_Jopen_R;
MObject     zjhFaceBSBlender::MlowerLipDepress_Jopen_L;
MObject     zjhFaceBSBlender::MlowerLipDepress_Jopen_R;
MObject     zjhFaceBSBlender::MsharpCornerPull_Jopen_L;
MObject     zjhFaceBSBlender::MsharpCornerPull_Jopen_R;
MObject     zjhFaceBSBlender::MupperLipRaise_Jopen_L;
MObject     zjhFaceBSBlender::MupperLipRaise_Jopen_R;
MObject     zjhFaceBSBlender::Jleft_Jopen_cor;
MObject     zjhFaceBSBlender::Jright_Jopen_cor;
MObject     zjhFaceBSBlender::Mpurse_Mtowards__pucker_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards__pucker_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards__pucker_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards__pucker_DR;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_UL;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_UR;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_DL;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_DR;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_UL;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_UR;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_DL;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_DR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel__oh_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel__oh_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel__oh_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel__oh_DR;
MObject     zjhFaceBSBlender::Mpurse_Jopen_UL;
MObject     zjhFaceBSBlender::Mpurse_Jopen_UR;
MObject     zjhFaceBSBlender::Mpurse_Jopen_DL;
MObject     zjhFaceBSBlender::Mpurse_Jopen_DR;
MObject     zjhFaceBSBlender::Mtowards_Jopen_UL;
MObject     zjhFaceBSBlender::Mtowards_Jopen_UR;
MObject     zjhFaceBSBlender::Mtowards_Jopen_DL;
MObject     zjhFaceBSBlender::Mtowards_Jopen_DR;
MObject     zjhFaceBSBlender::Mfunnel_Jopen_UL;
MObject     zjhFaceBSBlender::Mfunnel_Jopen_UR;
MObject     zjhFaceBSBlender::Mfunnel_Jopen_DL;
MObject     zjhFaceBSBlender::Mfunnel_Jopen_DR;
MObject     zjhFaceBSBlender::Mpress_Jopen_UL;
MObject     zjhFaceBSBlender::Mpress_Jopen_UR;
MObject     zjhFaceBSBlender::Mpress_Jopen_DL;
MObject     zjhFaceBSBlender::Mpress_Jopen_DR;
MObject     zjhFaceBSBlender::mouth_lipsBite_L;
MObject     zjhFaceBSBlender::mouth_lipsBite_R;
MObject     zjhFaceBSBlender::MupperLipBite_Jopen_L;		//open0.25
MObject     zjhFaceBSBlender::MupperLipBite_Jopen_R;		//open0.25
MObject     zjhFaceBSBlender::MlowerLipBite_Jopen_L;		//open0.25
MObject     zjhFaceBSBlender::MlowerLipBite_Jopen_R;		//open0.25
MObject     zjhFaceBSBlender::Mpurse_Mtighten_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtighten_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtighten_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtighten_DR;
MObject     zjhFaceBSBlender::Mtowards_Mtighten_UL;
MObject     zjhFaceBSBlender::Mtowards_Mtighten_UR;
MObject     zjhFaceBSBlender::Mtowards_Mtighten_DL;
MObject     zjhFaceBSBlender::Mtowards_Mtighten_DR;
MObject     zjhFaceBSBlender::Mfunnel_Mtighten_UL;
MObject     zjhFaceBSBlender::Mfunnel_Mtighten_UR;
MObject     zjhFaceBSBlender::Mfunnel_Mtighten_DL;
MObject     zjhFaceBSBlender::Mfunnel_Mtighten_DR;
MObject     zjhFaceBSBlender::NKstretch_Jopen_L;
MObject     zjhFaceBSBlender::NKstretch_Jopen_R;
MObject     zjhFaceBSBlender::cheek_blow_cor;
MObject     zjhFaceBSBlender::JlowerChinRaise_Jopen_L;
MObject     zjhFaceBSBlender::JlowerChinRaise_Jopen_R;

////////Excute3/////////////////
MObject     zjhFaceBSBlender::ElookUp_ElookLeft_Eblink_L;
MObject     zjhFaceBSBlender::ElookUp_ElookLeft_Eblink_R;
MObject     zjhFaceBSBlender::ElookUp_ElookRight_Eblink_L;
MObject     zjhFaceBSBlender::ElookUp_ElookRight_Eblink_R;
MObject     zjhFaceBSBlender::ElookDown_ElookLeft_Eblink_L;
MObject     zjhFaceBSBlender::ElookDown_ElookLeft_Eblink_R;
MObject     zjhFaceBSBlender::ElookDown_ElookRight_Eblink_L;
MObject     zjhFaceBSBlender::ElookDown_ElookRight_Eblink_R;
MObject     zjhFaceBSBlender::EcheekRaise_EsquintInner_Eblink_L;
MObject     zjhFaceBSBlender::EcheekRaise_EsquintInner_Eblink_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_Mdimple_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_Mdimple_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_Mdimple_R;
MObject     zjhFaceBSBlender::Mdimple_MupperLipRaise_MlowerLipDepress__ee_L;
MObject     zjhFaceBSBlender::Mdimple_MupperLipRaise_MlowerLipDepress__ee_R;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_Mdimple_L;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_MupperLipRaise_L;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_MupperLipRaise_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_MlowerLipDepress_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Mdimple_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mdimple_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_Mdimple_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_Mdimple_Jopen_R;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Jopen__puckerJawOpen_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Jopen__puckerJawOpen_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Jopen__puckerJawOpen_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Jopen__puckerJawOpen_DR;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Jopen_UL;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Jopen_UR;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Jopen_DL;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Jopen_DR;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Jopen_UL;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Jopen_UR;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Jopen_DL;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Jopen_DR;
MObject     zjhFaceBSBlender::MlipsTogether_Mpress_Jopen__mouthSuck_UL;
MObject     zjhFaceBSBlender::MlipsTogether_Mpress_Jopen__mouthSuck_UR;
MObject     zjhFaceBSBlender::MlipsTogether_Mpress_Jopen__mouthSuck_DL;
MObject     zjhFaceBSBlender::MlipsTogether_Mpress_Jopen__mouthSuck_DR;
MObject     zjhFaceBSBlender::MlowerLipBite_MupperLipBite_Jopen_L;		//open0.25
MObject     zjhFaceBSBlender::MlowerLipBite_MupperLipBite_Jopen_R;		//open0.25
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mtighten__puckerTighten_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mtighten__puckerTighten_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mtighten__puckerTighten_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mtighten__puckerTighten_DR;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Mtighten_UL;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Mtighten_UR;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Mtighten_DL;
MObject     zjhFaceBSBlender::Mpurse_Mfunnel_Mtighten_DR;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Mtighten_UL;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Mtighten_UR;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Mtighten_DL;
MObject     zjhFaceBSBlender::Mfunnel_Mtowards_Mtighten_DR;

////////Excute4/////////////////
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_Mdimple_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_Mdimple_Jopen_R;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL;
MObject     zjhFaceBSBlender::Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR;

////////Excute5/////////////////
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R;

//////////////////////////add new objects////////////////////////////////
MObject     zjhFaceBSBlender::BraiseIn_Bdown_Blateral_L;
MObject     zjhFaceBSBlender::BraiseIn_Bdown_Blateral_R;
MObject     zjhFaceBSBlender::Braise_Ewiden_INL;
MObject     zjhFaceBSBlender::Braise_Ewiden_INR;
MObject     zjhFaceBSBlender::Braise_Ewiden_OUTL;
MObject     zjhFaceBSBlender::Braise_Ewiden_OUTR;
MObject     zjhFaceBSBlender::Braise_Eblink_INL;
MObject     zjhFaceBSBlender::Braise_Eblink_INR;
MObject     zjhFaceBSBlender::Braise_Eblink_OUTL;
MObject     zjhFaceBSBlender::Braise_Eblink_OUTR;
MObject     zjhFaceBSBlender::Braise_ElookDown_INL;
MObject     zjhFaceBSBlender::Braise_ElookDown_INR;
MObject     zjhFaceBSBlender::Braise_ElookDown_OUTL;
MObject     zjhFaceBSBlender::Braise_ElookDown_OUTR;
MObject     zjhFaceBSBlender::EfaceScrunch_Eblink_L;
MObject     zjhFaceBSBlender::EfaceScrunch_Eblink_R;
MObject     zjhFaceBSBlender::ElookDown_Ewiden_L;
MObject     zjhFaceBSBlender::ElookDown_Ewiden_R;
MObject     zjhFaceBSBlender::NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::Cblow_MlipsBlow_L;
MObject     zjhFaceBSBlender::Cblow_MlipsBlow_R;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_Jopen_L;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_MstretchLipsClose_L;
MObject     zjhFaceBSBlender::Mstretch_MstretchLipsClose_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_Jopen_R;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_UL;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_UR;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_DL;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_DR;
MObject     zjhFaceBSBlender::Mfunnel_MlowerLipDepress_UL;
MObject     zjhFaceBSBlender::Mfunnel_MlowerLipDepress_UR;
MObject     zjhFaceBSBlender::Mfunnel_MlowerLipDepress_DL;
MObject     zjhFaceBSBlender::Mfunnel_MlowerLipDepress_DR;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL;
MObject     zjhFaceBSBlender::Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_L;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_R;
MObject     zjhFaceBSBlender::McornerDepress_NSwrinkle_L;
MObject     zjhFaceBSBlender::McornerDepress_NSwrinkle_R;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_McornerDepress_L;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_McornerDepress_R;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::MupperLipRaise_McornerDepress_Jopen_L;
MObject     zjhFaceBSBlender::MupperLipRaise_McornerDepress_Jopen_R;
MObject     zjhFaceBSBlender::McornerDepress_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::McornerDepress_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L;
MObject     zjhFaceBSBlender::MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_UL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_UR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_DL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_DR;
MObject     zjhFaceBSBlender::McornerPull_Mtowards_UL;
MObject     zjhFaceBSBlender::McornerPull_Mtowards_UR;
MObject     zjhFaceBSBlender::McornerPull_Mtowards_DL;
MObject     zjhFaceBSBlender::McornerPull_Mtowards_DR;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_UL;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_UR;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_DL;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_DR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards__cornerPullPucker_UL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards__cornerPullPucker_UR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards__cornerPullPucker_DL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards__cornerPullPucker_DR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mfunnel_UL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mfunnel_UR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mfunnel_DL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mfunnel_DR;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_Mtowards_UL;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_Mtowards_UR;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_Mtowards_DL;
MObject     zjhFaceBSBlender::McornerPull_Mfunnel_Mtowards_DR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL;
MObject     zjhFaceBSBlender::McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR;
MObject     zjhFaceBSBlender::MupperLipRaise_Mtighten_UL;
MObject     zjhFaceBSBlender::MupperLipRaise_Mtighten_UR;
MObject     zjhFaceBSBlender::MupperLipRaise_Mtighten_DL;
MObject     zjhFaceBSBlender::MupperLipRaise_Mtighten_DR;
MObject     zjhFaceBSBlender::MlowerLipDepress_Mtighten_UL;
MObject     zjhFaceBSBlender::MlowerLipDepress_Mtighten_UR;
MObject     zjhFaceBSBlender::MlowerLipDepress_Mtighten_DL;
MObject     zjhFaceBSBlender::MlowerLipDepress_Mtighten_DR;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_Mtighten_UL;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_Mtighten_UR;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_Mtighten_DL;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_Mtighten_DR;
MObject     zjhFaceBSBlender::McornerPull_EcheekRaise_L;
MObject     zjhFaceBSBlender::McornerPull_EcheekRaise_R;
MObject     zjhFaceBSBlender::Mstretch_JlowerChinRaise_L;
MObject     zjhFaceBSBlender::Mstretch_JlowerChinRaise_R;
MObject     zjhFaceBSBlender::McornerPull_NSwrinkle_L;
MObject     zjhFaceBSBlender::McornerPull_NSwrinkle_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_NSwrinkle_L;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_NSwrinkle_R;
MObject     zjhFaceBSBlender::McornerPull_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_NSdepress_L;
MObject     zjhFaceBSBlender::Mstretch_NSdepress_R;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_UL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_UR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_DL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_DR;
MObject     zjhFaceBSBlender::Mstretch_Mtowards_UL;
MObject     zjhFaceBSBlender::Mstretch_Mtowards_UR;
MObject     zjhFaceBSBlender::Mstretch_Mtowards_DL;
MObject     zjhFaceBSBlender::Mstretch_Mtowards_DR;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_UL;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_UR;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_DL;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_DR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mfunnel_UL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mfunnel_UR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mfunnel_DL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mfunnel_DR;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_Mtowards_UL;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_Mtowards_UR;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_Mtowards_DL;
MObject     zjhFaceBSBlender::Mstretch_Mfunnel_Mtowards_DR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL;
MObject     zjhFaceBSBlender::Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_UL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_UR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_DL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_DR;
MObject     zjhFaceBSBlender::Mdimple_Mtowards_UL;
MObject     zjhFaceBSBlender::Mdimple_Mtowards_UR;
MObject     zjhFaceBSBlender::Mdimple_Mtowards_DL;
MObject     zjhFaceBSBlender::Mdimple_Mtowards_DR;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_UL;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_UR;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_DL;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_DR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards__dimplePucker_UL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards__dimplePucker_UR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards__dimplePucker_DL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards__dimplePucker_DR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mfunnel_UL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mfunnel_UR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mfunnel_DL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mfunnel_DR;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_Mtowards_UL;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_Mtowards_UR;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_Mtowards_DL;
MObject     zjhFaceBSBlender::Mdimple_Mfunnel_Mtowards_DR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL;
MObject     zjhFaceBSBlender::Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_NSwrinkle_L;
MObject     zjhFaceBSBlender::Mstretch_NSwrinkle_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_NSwrinkle_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_NSwrinkle_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_Mdimple_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_Mdimple_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_NSwrinkle_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_NSwrinkle_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R;
MObject     zjhFaceBSBlender::Mstretch_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R;
MObject     zjhFaceBSBlender::McornerPull_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_JopenExtreme_R;
MObject     zjhFaceBSBlender::Mstretch_JopenExtreme_L;
MObject     zjhFaceBSBlender::Mstretch_JopenExtreme_R;
MObject     zjhFaceBSBlender::MupperLipRaise_JopenExtreme_L;
MObject     zjhFaceBSBlender::MupperLipRaise_JopenExtreme_R;
MObject     zjhFaceBSBlender::MlowerLipDepress_JopenExtreme_L;
MObject     zjhFaceBSBlender::MlowerLipDepress_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_MupperLipRaise_JopenExtreme_R;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_JopenExtreme_L;
MObject     zjhFaceBSBlender::Mstretch_MupperLipRaise_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_JopenExtreme_R;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_JopenExtreme_L;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_JopenExtreme_R;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_JopenExtreme_L;
MObject     zjhFaceBSBlender::MupperLipRaise_MlowerLipDepress_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L;
MObject     zjhFaceBSBlender::Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L;
MObject     zjhFaceBSBlender::McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_UL;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_UR;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_DL;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_DR;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_UL;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_UR;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_DL;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_DR;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_Jopen_UL;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_Jopen_UR;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_Jopen_DL;
MObject     zjhFaceBSBlender::Jleft_MlipsTogether_Jopen_DR;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_Jopen_UL;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_Jopen_UR;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_Jopen_DL;
MObject     zjhFaceBSBlender::Jright_MlipsTogether_Jopen_DR;
MObject     zjhFaceBSBlender::JlowerChinRaise_MupperLipRaise_L;
MObject     zjhFaceBSBlender::JlowerChinRaise_MupperLipRaise_R;
MObject     zjhFaceBSBlender::NKstretch_Mstretch_L;
MObject     zjhFaceBSBlender::NKstretch_Mstretch_R;
MObject     zjhFaceBSBlender::NKstretch_Mstretch_Jopen_L;
MObject     zjhFaceBSBlender::NKstretch_Mstretch_Jopen_R;


zjhFaceBSBlender::zjhFaceBSBlender() {}
zjhFaceBSBlender::~zjhFaceBSBlender() {}

MStatus zjhFaceBSBlender::compute(const MPlug& plug, MDataBlock& data)
{
	MStatus returnStatus;
	/*************Execute1************/
	{
		Execute1(plug, data, browDownLInput, browDownLOutput, returnStatus);
		Execute1(plug, data, browDownRInput, browDownROutput, returnStatus);
		Execute1(plug, data, browLateralLInput, browLateralLOutput, returnStatus);
		Execute1(plug, data, browLateralRInput, browLateralROutput, returnStatus);
		Execute1(plug, data, browRaiseInLInput, browRaiseInLOutput, returnStatus);
		Execute1(plug, data, browRaiseInRInput, browRaiseInROutput, returnStatus);
		Execute1(plug, data, browRaiseOuterLInput, browRaiseOuterLOutput, returnStatus);
		Execute1(plug, data, browRaiseOuterRInput, browRaiseOuterROutput, returnStatus);
		Execute1(plug, data, earUpLInput, earUpLOutput, returnStatus);
		Execute1(plug, data, earUpRInput, earUpROutput, returnStatus);
		Execute1(plug, data, eyeBlinkLInput, eyeBlinkLOutput, returnStatus);
		Execute1(plug, data, eyeBlinkRInput, eyeBlinkROutput, returnStatus);
		Execute1(plug, data, eyeWidenLInput, eyeWidenLOutput, returnStatus);
		Execute1(plug, data, eyeWidenRInput, eyeWidenROutput, returnStatus);
		Execute1(plug, data, eyeSquintInnerLInput, eyeSquintInnerLOutput, returnStatus);
		Execute1(plug, data, eyeSquintInnerRInput, eyeSquintInnerROutput, returnStatus);
		Execute1(plug, data, eyeCheekRaiseLInput, eyeCheekRaiseLOutput, returnStatus);
		Execute1(plug, data, eyeCheekRaiseRInput, eyeCheekRaiseROutput, returnStatus);
		Execute1(plug, data, eyeFaceScrunchLInput, eyeFaceScrunchLOutput, returnStatus);
		Execute1(plug, data, eyeFaceScrunchRInput, eyeFaceScrunchROutput, returnStatus);
		Execute1(plug, data, eyeUpperLidUpLInput, eyeUpperLidUpLOutput, returnStatus);
		Execute1(plug, data, eyeUpperLidUpRInput, eyeUpperLidUpROutput, returnStatus);
		Execute1(plug, data, eyeRelaxLInput, eyeRelaxLOutput, returnStatus);
		Execute1(plug, data, eyeRelaxRInput, eyeRelaxROutput, returnStatus);
		Execute1(plug, data, eyeLowerLidUpLInput, eyeLowerLidUpLOutput, returnStatus);
		Execute1(plug, data, eyeLowerLidUpRInput, eyeLowerLidUpROutput, returnStatus);
		Execute1(plug, data, eyeLowerLidDownLInput, eyeLowerLidDownLOutput, returnStatus);
		Execute1(plug, data, eyeLowerLidDownRInput, eyeLowerLidDownROutput, returnStatus);
		Execute1(plug, data, eyeLookUpLInput, eyeLookUpLOutput, returnStatus);
		Execute1(plug, data, eyeLookUpRInput, eyeLookUpROutput, returnStatus);
		Execute1(plug, data, eyeLookDownLInput, eyeLookDownLOutput, returnStatus);
		Execute1(plug, data, eyeLookDownRInput, eyeLookDownROutput, returnStatus);
		Execute1(plug, data, eyeLookLeftLInput, eyeLookLeftLOutput, returnStatus);
		Execute1(plug, data, eyeLookLeftRInput, eyeLookLeftROutput, returnStatus);
		Execute1(plug, data, eyeLookRightLInput, eyeLookRightLOutput, returnStatus);
		Execute1(plug, data, eyeLookRightRInput, eyeLookRightROutput, returnStatus);
		Execute1(plug, data, eyePupilWideLInput, eyePupilWideLOutput, returnStatus);
		Execute1(plug, data, eyePupilWideRInput, eyePupilWideROutput, returnStatus);
		Execute1(plug, data, eyePupilNarrowLInput, eyePupilNarrowLOutput, returnStatus);
		Execute1(plug, data, eyePupilNarrowRInput, eyePupilNarrowROutput, returnStatus);
		Execute1(plug, data, eyeParallelLookDirectionInput, eyeParallelLookDirectionOutput, returnStatus);
		Execute1(plug, data, eyelashesUpINLInput, eyelashesUpINLOutput, returnStatus);
		Execute1(plug, data, eyelashesUpINRInput, eyelashesUpINROutput, returnStatus);
		Execute1(plug, data, eyelashesUpOUTLInput, eyelashesUpOUTLOutput, returnStatus);
		Execute1(plug, data, eyelashesUpOUTRInput, eyelashesUpOUTROutput, returnStatus);
		Execute1(plug, data, eyelashesDownINLInput, eyelashesDownINLOutput, returnStatus);
		Execute1(plug, data, eyelashesDownINRInput, eyelashesDownINROutput, returnStatus);
		Execute1(plug, data, eyelashesDownOUTLInput, eyelashesDownOUTLOutput, returnStatus);
		Execute1(plug, data, eyelashesDownOUTRInput, eyelashesDownOUTROutput, returnStatus);
		Execute1(plug, data, noseWrinkleLInput, noseWrinkleLOutput, returnStatus);
		Execute1(plug, data, noseWrinkleRInput, noseWrinkleROutput, returnStatus);
		Execute1(plug, data, noseNostrilDepressLInput, noseNostrilDepressLOutput, returnStatus);
		Execute1(plug, data, noseNostrilDepressRInput, noseNostrilDepressROutput, returnStatus);
		Execute1(plug, data, noseNostrilDilateLInput, noseNostrilDilateLOutput, returnStatus);
		Execute1(plug, data, noseNostrilDilateRInput, noseNostrilDilateROutput, returnStatus);
		Execute1(plug, data, noseNostrilCompressLInput, noseNostrilCompressLOutput, returnStatus);
		Execute1(plug, data, noseNostrilCompressRInput, noseNostrilCompressROutput, returnStatus);
		Execute1(plug, data, noseNasolabialDeepenLInput, noseNasolabialDeepenLOutput, returnStatus);
		Execute1(plug, data, noseNasolabialDeepenRInput, noseNasolabialDeepenROutput, returnStatus);
		Execute1(plug, data, mouthCheekSuckLInput, mouthCheekSuckLOutput, returnStatus);
		Execute1(plug, data, mouthCheekSuckRInput, mouthCheekSuckROutput, returnStatus);
		Execute1(plug, data, mouthCheekBlowLInput, mouthCheekBlowLOutput, returnStatus);
		Execute1(plug, data, mouthCheekBlowRInput, mouthCheekBlowROutput, returnStatus);
		Execute1(plug, data, mouthLipsBlowLInput, mouthLipsBlowLOutput, returnStatus);
		Execute1(plug, data, mouthLipsBlowRInput, mouthLipsBlowROutput, returnStatus);
		Execute1(plug, data, mouthLeftInput, mouthLeftOutput, returnStatus);
		Execute1(plug, data, mouthRightInput, mouthRightOutput, returnStatus);
		Execute1(plug, data, mouthUpInput, mouthUpOutput, returnStatus);
		Execute1(plug, data, mouthDownInput, mouthDownOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipRaiseLInput, mouthUpperLipRaiseLOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipRaiseRInput, mouthUpperLipRaiseROutput, returnStatus);
		Execute1(plug, data, mouthLowerLipDepressLInput, mouthLowerLipDepressLOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipDepressRInput, mouthLowerLipDepressROutput, returnStatus);
		Execute1(plug, data, mouthCornerPullLInput, mouthCornerPullLOutput, returnStatus);
		Execute1(plug, data, mouthCornerPullRInput, mouthCornerPullROutput, returnStatus);
		Execute1(plug, data, mouthStretchLInput, mouthStretchLOutput, returnStatus);
		Execute1(plug, data, mouthStretchRInput, mouthStretchROutput, returnStatus);
		Execute1(plug, data, mouthStretchLipsCloseLInput, mouthStretchLipsCloseLOutput, returnStatus);
		Execute1(plug, data, mouthStretchLipsCloseRInput, mouthStretchLipsCloseROutput, returnStatus);
		Execute1(plug, data, mouthDimpleLInput, mouthDimpleLOutput, returnStatus);
		Execute1(plug, data, mouthDimpleRInput, mouthDimpleROutput, returnStatus);
		Execute1(plug, data, mouthCornerDepressLInput, mouthCornerDepressLOutput, returnStatus);
		Execute1(plug, data, mouthCornerDepressRInput, mouthCornerDepressROutput, returnStatus);
		Execute1(plug, data, mouthPressULInput, mouthPressULOutput, returnStatus);
		Execute1(plug, data, mouthPressURInput, mouthPressUROutput, returnStatus);
		Execute1(plug, data, mouthPressDLInput, mouthPressDLOutput, returnStatus);
		Execute1(plug, data, mouthPressDRInput, mouthPressDROutput, returnStatus);
		Execute1(plug, data, mouthLipsPurseULInput, mouthLipsPurseULOutput, returnStatus);
		Execute1(plug, data, mouthLipsPurseURInput, mouthLipsPurseUROutput, returnStatus);
		Execute1(plug, data, mouthLipsPurseDLInput, mouthLipsPurseDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsPurseDRInput, mouthLipsPurseDROutput, returnStatus);
		Execute1(plug, data, mouthLipsTowardsULInput, mouthLipsTowardsULOutput, returnStatus);
		Execute1(plug, data, mouthLipsTowardsURInput, mouthLipsTowardsUROutput, returnStatus);
		Execute1(plug, data, mouthLipsTowardsDLInput, mouthLipsTowardsDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsTowardsDRInput, mouthLipsTowardsDROutput, returnStatus);
		Execute1(plug, data, mouthFunnelULInput, mouthFunnelULOutput, returnStatus);
		Execute1(plug, data, mouthFunnelURInput, mouthFunnelUROutput, returnStatus);
		Execute1(plug, data, mouthFunnelDLInput, mouthFunnelDLOutput, returnStatus);
		Execute1(plug, data, mouthFunnelDRInput, mouthFunnelDROutput, returnStatus);
		Execute1(plug, data, mouthUpperLipBiteLInput, mouthUpperLipBiteLOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipBiteRInput, mouthUpperLipBiteROutput, returnStatus);
		Execute1(plug, data, mouthLowerLipBiteLInput, mouthLowerLipBiteLOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipBiteRInput, mouthLowerLipBiteROutput, returnStatus);
		Execute1(plug, data, mouthLipsTightenULInput, mouthLipsTightenULOutput, returnStatus);
		Execute1(plug, data, mouthLipsTightenURInput, mouthLipsTightenUROutput, returnStatus);
		Execute1(plug, data, mouthLipsTightenDLInput, mouthLipsTightenDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsTightenDRInput, mouthLipsTightenDROutput, returnStatus);
		Execute1(plug, data, mouthLipsPressLInput, mouthLipsPressLOutput, returnStatus);
		Execute1(plug, data, mouthLipsPressRInput, mouthLipsPressROutput, returnStatus);
		Execute1(plug, data, mouthSharpCornerPullLInput, mouthSharpCornerPullLOutput, returnStatus);
		Execute1(plug, data, mouthSharpCornerPullRInput, mouthSharpCornerPullROutput, returnStatus);
		Execute1(plug, data, mouthStickyUCInput, mouthStickyUCOutput, returnStatus);
		Execute1(plug, data, mouthStickyUINLInput, mouthStickyUINLOutput, returnStatus);
		Execute1(plug, data, mouthStickyUINRInput, mouthStickyUINROutput, returnStatus);
		Execute1(plug, data, mouthStickyUOUTLInput, mouthStickyUOUTLOutput, returnStatus);
		Execute1(plug, data, mouthStickyUOUTRInput, mouthStickyUOUTROutput, returnStatus);
		Execute1(plug, data, mouthStickyDCInput, mouthStickyDCOutput, returnStatus);
		Execute1(plug, data, mouthStickyDINLInput, mouthStickyDINLOutput, returnStatus);
		Execute1(plug, data, mouthStickyDINRInput, mouthStickyDINROutput, returnStatus);
		Execute1(plug, data, mouthStickyDOUTLInput, mouthStickyDOUTLOutput, returnStatus);
		Execute1(plug, data, mouthStickyDOUTRInput, mouthStickyDOUTROutput, returnStatus);
		Execute1(plug, data, mouthLipsStickyLPh1Input, mouthLipsStickyLPh1Output, returnStatus);
		Execute1(plug, data, mouthLipsStickyLPh2Input, mouthLipsStickyLPh2Output, returnStatus);
		Execute1(plug, data, mouthLipsStickyLPh3Input, mouthLipsStickyLPh3Output, returnStatus);
		Execute1(plug, data, mouthLipsStickyRPh1Input, mouthLipsStickyRPh1Output, returnStatus);
		Execute1(plug, data, mouthLipsStickyRPh2Input, mouthLipsStickyRPh2Output, returnStatus);
		Execute1(plug, data, mouthLipsStickyRPh3Input, mouthLipsStickyRPh3Output, returnStatus);
		Execute1(plug, data, mouthLipsPushULInput, mouthLipsPushULOutput, returnStatus);
		Execute1(plug, data, mouthLipsPushURInput, mouthLipsPushUROutput, returnStatus);
		Execute1(plug, data, mouthLipsPushDLInput, mouthLipsPushDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsPushDRInput, mouthLipsPushDROutput, returnStatus);
		Execute1(plug, data, mouthLipsPullULInput, mouthLipsPullULOutput, returnStatus);
		Execute1(plug, data, mouthLipsPullURInput, mouthLipsPullUROutput, returnStatus);
		Execute1(plug, data, mouthLipsPullDLInput, mouthLipsPullDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsPullDRInput, mouthLipsPullDROutput, returnStatus);
		Execute1(plug, data, mouthLipsThinULInput, mouthLipsThinULOutput, returnStatus);
		Execute1(plug, data, mouthLipsThinURInput, mouthLipsThinUROutput, returnStatus);
		Execute1(plug, data, mouthLipsThinDLInput, mouthLipsThinDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsThinDRInput, mouthLipsThinDROutput, returnStatus);
		Execute1(plug, data, mouthLipsThickULInput, mouthLipsThickULOutput, returnStatus);
		Execute1(plug, data, mouthLipsThickURInput, mouthLipsThickUROutput, returnStatus);
		Execute1(plug, data, mouthLipsThickDLInput, mouthLipsThickDLOutput, returnStatus);
		Execute1(plug, data, mouthLipsThickDRInput, mouthLipsThickDROutput, returnStatus);
		Execute1(plug, data, mouthCornerSharpenULInput, mouthCornerSharpenULOutput, returnStatus);
		Execute1(plug, data, mouthCornerSharpenURInput, mouthCornerSharpenUROutput, returnStatus);
		Execute1(plug, data, mouthCornerSharpenDLInput, mouthCornerSharpenDLOutput, returnStatus);
		Execute1(plug, data, mouthCornerSharpenDRInput, mouthCornerSharpenDROutput, returnStatus);
		Execute1(plug, data, mouthCornerRounderULInput, mouthCornerRounderULOutput, returnStatus);
		Execute1(plug, data, mouthCornerRounderURInput, mouthCornerRounderUROutput, returnStatus);
		Execute1(plug, data, mouthCornerRounderDLInput, mouthCornerRounderDLOutput, returnStatus);
		Execute1(plug, data, mouthCornerRounderDRInput, mouthCornerRounderDROutput, returnStatus);
		Execute1(plug, data, mouthUpperLipTowardsTeethLInput, mouthUpperLipTowardsTeethLOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipTowardsTeethRInput, mouthUpperLipTowardsTeethROutput, returnStatus);
		Execute1(plug, data, mouthLowerLipTowardsTeethLInput, mouthLowerLipTowardsTeethLOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipTowardsTeethRInput, mouthLowerLipTowardsTeethROutput, returnStatus);
		Execute1(plug, data, mouthUpperLipShiftLeftInput, mouthUpperLipShiftLeftOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipShiftRightInput, mouthUpperLipShiftRightOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipShiftLeftInput, mouthLowerLipShiftLeftOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipShiftRightInput, mouthLowerLipShiftRightOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipRollInLInput, mouthUpperLipRollInLOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipRollInRInput, mouthUpperLipRollInROutput, returnStatus);
		Execute1(plug, data, mouthUpperLipRollOutLInput, mouthUpperLipRollOutLOutput, returnStatus);
		Execute1(plug, data, mouthUpperLipRollOutRInput, mouthUpperLipRollOutROutput, returnStatus);
		Execute1(plug, data, mouthLowerLipRollInLInput, mouthLowerLipRollInLOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipRollInRInput, mouthLowerLipRollInROutput, returnStatus);
		Execute1(plug, data, mouthLowerLipRollOutLInput, mouthLowerLipRollOutLOutput, returnStatus);
		Execute1(plug, data, mouthLowerLipRollOutRInput, mouthLowerLipRollOutROutput, returnStatus);
		Execute1(plug, data, mouthCornerUpLInput, mouthCornerUpLOutput, returnStatus);
		Execute1(plug, data, mouthCornerUpRInput, mouthCornerUpROutput, returnStatus);
		Execute1(plug, data, mouthCornerDownLInput, mouthCornerDownLOutput, returnStatus);
		Execute1(plug, data, mouthCornerDownRInput, mouthCornerDownROutput, returnStatus);
		Execute1(plug, data, mouthCornerWideLInput, mouthCornerWideLOutput, returnStatus);
		Execute1(plug, data, mouthCornerWideRInput, mouthCornerWideROutput, returnStatus);
		Execute1(plug, data, mouthCornerNarrowLInput, mouthCornerNarrowLOutput, returnStatus);
		Execute1(plug, data, mouthCornerNarrowRInput, mouthCornerNarrowROutput, returnStatus);
		Execute1(plug, data, tongueUpInput, tongueUpOutput, returnStatus);
		Execute1(plug, data, tongueDownInput, tongueDownOutput, returnStatus);
		Execute1(plug, data, tongueLeftInput, tongueLeftOutput, returnStatus);
		Execute1(plug, data, tongueRightInput, tongueRightOutput, returnStatus);
		Execute1(plug, data, tongueOutInput, tongueOutOutput, returnStatus);
		Execute1(plug, data, tongueInInput, tongueInOutput, returnStatus);
		Execute1(plug, data, tongueRollUpInput, tongueRollUpOutput, returnStatus);
		Execute1(plug, data, tongueRollDownInput, tongueRollDownOutput, returnStatus);
		Execute1(plug, data, tongueRollLeftInput, tongueRollLeftOutput, returnStatus);
		Execute1(plug, data, tongueRollRightInput, tongueRollRightOutput, returnStatus);
		Execute1(plug, data, tongueTipUpInput, tongueTipUpOutput, returnStatus);
		Execute1(plug, data, tongueTipDownInput, tongueTipDownOutput, returnStatus);
		Execute1(plug, data, tongueTipLeftInput, tongueTipLeftOutput, returnStatus);
		Execute1(plug, data, tongueTipRightInput, tongueTipRightOutput, returnStatus);
		Execute1(plug, data, tongueWideInput, tongueWideOutput, returnStatus);
		Execute1(plug, data, tongueNarrowInput, tongueNarrowOutput, returnStatus);
		Execute1(plug, data, tonguePressInput, tonguePressOutput, returnStatus);
		Execute1(plug, data, jawOpenInput, jawOpenOutput, returnStatus);
		Execute1(plug, data, jawLeftInput, jawLeftOutput, returnStatus);
		Execute1(plug, data, jawRightInput, jawRightOutput, returnStatus);
		Execute1(plug, data, jawFwdInput, jawFwdOutput, returnStatus);
		Execute1(plug, data, jawBackInput, jawBackOutput, returnStatus);
		Execute1(plug, data, jawClenchLInput, jawClenchLOutput, returnStatus);
		Execute1(plug, data, jawClenchRInput, jawClenchROutput, returnStatus);
		Execute1(plug, data, jawChinRaiseDLInput, jawChinRaiseDLOutput, returnStatus);
		Execute1(plug, data, jawChinRaiseDRInput, jawChinRaiseDROutput, returnStatus);
		Execute1(plug, data, jawChinRaiseULInput, jawChinRaiseULOutput, returnStatus);
		Execute1(plug, data, jawChinRaiseURInput, jawChinRaiseUROutput, returnStatus);
		Execute1(plug, data, jawChinCompressLInput, jawChinCompressLOutput, returnStatus);
		Execute1(plug, data, jawChinCompressRInput, jawChinCompressROutput, returnStatus);
		Execute1(plug, data, neckStretchLInput, neckStretchLOutput, returnStatus);
		Execute1(plug, data, neckStretchRInput, neckStretchROutput, returnStatus);
		Execute1(plug, data, neckSwallowPh1Input, neckSwallowPh1Output, returnStatus);
		Execute1(plug, data, neckSwallowPh2Input, neckSwallowPh2Output, returnStatus);
		Execute1(plug, data, neckSwallowPh3Input, neckSwallowPh3Output, returnStatus);
		Execute1(plug, data, neckSwallowPh4Input, neckSwallowPh4Output, returnStatus);
		Execute1(plug, data, neckMastoidContractLInput, neckMastoidContractLOutput, returnStatus);
		Execute1(plug, data, neckMastoidContractRInput, neckMastoidContractROutput, returnStatus);
		Execute1(plug, data, neckThroatDownInput, neckThroatDownOutput, returnStatus);
		Execute1(plug, data, neckThroatUpInput, neckThroatUpOutput, returnStatus);
		Execute1(plug, data, neckDigastricDownInput, neckDigastricDownOutput, returnStatus);
		Execute1(plug, data, neckDigastricUpInput, neckDigastricUpOutput, returnStatus);
		Execute1(plug, data, neckThroatExhaleInput, neckThroatExhaleOutput, returnStatus);
		Execute1(plug, data, neckThroatInhaleInput, neckThroatInhaleOutput, returnStatus);
		Execute1(plug, data, teethUpUInput, teethUpUOutput, returnStatus);
		Execute1(plug, data, teethUpDInput, teethUpDOutput, returnStatus);
		Execute1(plug, data, teethDownUInput, teethDownUOutput, returnStatus);
		Execute1(plug, data, teethDownDInput, teethDownDOutput, returnStatus);
		Execute1(plug, data, teethLeftUInput, teethLeftUOutput, returnStatus);
		Execute1(plug, data, teethLeftDInput, teethLeftDOutput, returnStatus);
		Execute1(plug, data, teethRightUInput, teethRightUOutput, returnStatus);
		Execute1(plug, data, teethRightDInput, teethRightDOutput, returnStatus);
		Execute1(plug, data, teethFwdUInput, teethFwdUOutput, returnStatus);
		Execute1(plug, data, teethFwdDInput, teethFwdDOutput, returnStatus);
		Execute1(plug, data, teethBackUInput, teethBackUOutput, returnStatus);
		Execute1(plug, data, teethBackDInput, teethBackDOutput, returnStatus);
		Execute1(plug, data, headTurnUpUInput, headTurnUpUOutput, returnStatus);
		Execute1(plug, data, headTurnUpMInput, headTurnUpMOutput, returnStatus);
		Execute1(plug, data, headTurnUpDInput, headTurnUpDOutput, returnStatus);
		Execute1(plug, data, headTurnDownUInput, headTurnDownUOutput, returnStatus);
		Execute1(plug, data, headTurnDownMInput, headTurnDownMOutput, returnStatus);
		Execute1(plug, data, headTurnDownDInput, headTurnDownDOutput, returnStatus);
		Execute1(plug, data, headTurnLeftUInput, headTurnLeftUOutput, returnStatus);
		Execute1(plug, data, headTurnLeftMInput, headTurnLeftMOutput, returnStatus);
		Execute1(plug, data, headTurnLeftDInput, headTurnLeftDOutput, returnStatus);
		Execute1(plug, data, headTurnRightUInput, headTurnRightUOutput, returnStatus);
		Execute1(plug, data, headTurnRightMInput, headTurnRightMOutput, returnStatus);
		Execute1(plug, data, headTurnRightDInput, headTurnRightDOutput, returnStatus);
		Execute1(plug, data, headTiltLeftUInput, headTiltLeftUOutput, returnStatus);
		Execute1(plug, data, headTiltLeftMInput, headTiltLeftMOutput, returnStatus);
		Execute1(plug, data, headTiltLeftDInput, headTiltLeftDOutput, returnStatus);
		Execute1(plug, data, headTiltRightUInput, headTiltRightUOutput, returnStatus);
		Execute1(plug, data, headTiltRightMInput, headTiltRightMOutput, returnStatus);
		Execute1(plug, data, headTiltRightDInput, headTiltRightDOutput, returnStatus);
		Execute1(plug, data, lookAtSwitchInput, lookAtSwitchOutput, returnStatus);
	}
	/*************Execute2************/
	Execute2(plug, data, jawOpenExtremeInput, jawOpenInput, jawOpenExtremeOutput, returnStatus);
	Execute2(plug, data, mouthLipsTogetherULInput, jawOpenInput, mouthLipsTogetherULOutput, returnStatus);
	Execute2(plug, data, mouthLipsTogetherURInput, jawOpenInput, mouthLipsTogetherUROutput, returnStatus);
	Execute2(plug, data, mouthLipsTogetherDLInput, jawOpenInput, mouthLipsTogetherDLOutput, returnStatus);
	Execute2(plug, data, mouthLipsTogetherDRInput, jawOpenInput, mouthLipsTogetherDROutput, returnStatus);
	Execute2(plug, data, noseWrinkleLInput, noseWrinkleUpperLInput, noseWrinkleUpperLOutput, returnStatus);
	Execute2(plug, data, noseWrinkleRInput, noseWrinkleUpperRInput, noseWrinkleUpperROutput, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeLidPressLInput, eyeLidPressLOutput, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeLidPressRInput, eyeLidPressROutput, returnStatus);
	Execute2(plug, data, browRaiseInLInput, browRaiseOuterLInput, brow_raise_L, returnStatus);
	Execute2(plug, data, browRaiseInRInput, browRaiseOuterRInput, brow_raise_R, returnStatus);
	Execute2(plug, data, browDownLInput, browLateralLInput, Bdown_Blateral__browLower_L, returnStatus);
	Execute2(plug, data, browDownRInput, browLateralRInput, Bdown_Blateral__browLower_R, returnStatus);
	Execute2(plug, data, browRaiseInLInput, browDownLInput, BraiseIn_Bdown__browInnerRaise_L, returnStatus);
	Execute2(plug, data, browRaiseInRInput, browDownRInput, BraiseIn_Bdown__browInnerRaise_R, returnStatus);
	Execute2(plug, data, eyeLookUpLInput, eyeLookLeftLInput, ElookUp_ElookLeft_L, returnStatus);
	Execute2(plug, data, eyeLookUpRInput, eyeLookLeftRInput, ElookUp_ElookLeft_R, returnStatus);
	Execute2(plug, data, eyeLookDownLInput, eyeLookLeftLInput, ElookDown_ElookLeft_L, returnStatus);
	Execute2(plug, data, eyeLookDownRInput, eyeLookLeftRInput, ElookDown_ElookLeft_R, returnStatus);
	Execute2(plug, data, eyeLookUpLInput, eyeLookRightLInput, ElookUp_ElookRight_L, returnStatus);
	Execute2(plug, data, eyeLookUpRInput, eyeLookRightRInput, ElookUp_ElookRight_R, returnStatus);
	Execute2(plug, data, eyeLookDownLInput, eyeLookRightLInput, ElookDown_ElookRight_L, returnStatus);
	Execute2(plug, data, eyeLookDownRInput, eyeLookRightRInput, ElookDown_ElookRight_R, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeSquintInnerLInput, EsquintInner_Eblink_L, returnStatus);
	Execute2(plug, data, eyeBlinkRInput, eyeSquintInnerRInput, EsquintInner_Eblink_R, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeCheekRaiseLInput, EcheekRaise_Eblink_L, returnStatus);
	Execute2(plug, data, eyeBlinkRInput, eyeCheekRaiseRInput, EcheekRaise_Eblink_R, returnStatus);
	Execute2(plug, data, eyeCheekRaiseLInput, eyeSquintInnerLInput, EcheekRaise_EsquintInner_L, returnStatus);
	Execute2(plug, data, eyeCheekRaiseRInput, eyeSquintInnerRInput, EcheekRaise_EsquintInner_R, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeLookLeftLInput, ElookLeft_Eblink_L, returnStatus);
	Execute2(plug, data, eyeBlinkRInput, eyeLookLeftRInput, ElookLeft_Eblink_R, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeLookUpLInput, ElookUp_Eblink_L, returnStatus);
	Execute2(plug, data, eyeBlinkRInput, eyeLookUpRInput, ElookUp_Eblink_R, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeLookDownLInput, ElookDown_Eblink_L, returnStatus);
	Execute2(plug, data, eyeBlinkRInput, eyeLookDownRInput, ElookDown_Eblink_R, returnStatus);
	Execute2(plug, data, eyeBlinkLInput, eyeLookRightLInput, ElookRight_Eblink_L, returnStatus);
	Execute2(plug, data, eyeBlinkRInput, eyeLookRightRInput, ElookRight_Eblink_R, returnStatus);
	Execute2(plug, data, noseWrinkleLInput, noseWrinkleRInput, nose_wrinkle_cor, returnStatus);
	Execute2(plug, data, noseWrinkleLInput, eyeCheekRaiseLInput, EcheekRaise_NSwrinkle_L, returnStatus);
	Execute2(plug, data, noseWrinkleRInput, eyeCheekRaiseRInput, EcheekRaise_NSwrinkle_R, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthDimpleRInput, mouth_dimple_cor, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthCornerPullLInput, mouth_cornerPull_cor, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, mouthUpperLipRaiseRInput, mouth_upperLipRaise_cor, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthStretchLInput, mouth_stretch_cor, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, mouthLowerLipDepressRInput, mouth_lowerLipDepress_cor, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthDimpleLInput, McornerPull_Mdimple_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthDimpleRInput, McornerPull_Mdimple_R, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, mouthDimpleLInput, Mdimple_MupperLipRaise_L, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, mouthDimpleRInput, Mdimple_MupperLipRaise_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthDimpleLInput, Mstretch_Mdimple_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthDimpleRInput, Mstretch_Mdimple_R, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, mouthDimpleLInput, Mdimple_MlowerLipDepress_L, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, mouthDimpleRInput, Mdimple_MlowerLipDepress_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthSharpCornerPullLInput, McornerPull_MsharpCornerPull_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthSharpCornerPullRInput, McornerPull_MsharpCornerPull_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthStretchLInput, McornerPull_Mstretch_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthStretchRInput, McornerPull_Mstretch_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_R, returnStatus);
	Execute2(plug, data, mouthCornerDepressLInput, mouthUpperLipRaiseLInput, MupperLipRaise_McornerDepress_L, returnStatus);
	Execute2(plug, data, mouthCornerDepressRInput, mouthUpperLipRaiseRInput, MupperLipRaise_McornerDepress_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_R, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, MupperLipRaise_MlowerLipDepress_L, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, MupperLipRaise_MlowerLipDepress_R, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, mouthStretchLInput, Mstretch_MlowerLipDepress_L, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, mouthStretchRInput, Mstretch_MlowerLipDepress_R, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, jawOpenInput, Mdimple_Jopen_L, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, jawOpenInput, Mdimple_Jopen_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, jawOpenInput, McornerPull_Jopen_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, jawOpenInput, McornerPull_Jopen_R, returnStatus);
	Execute2(plug, data, mouthCornerDepressLInput, jawOpenInput, McornerDepress_Jopen_L, returnStatus);
	Execute2(plug, data, mouthCornerDepressRInput, jawOpenInput, McornerDepress_Jopen_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, jawOpenInput, Mstretch_Jopen_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, jawOpenInput, Mstretch_Jopen_R, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, jawOpenInput, MlowerLipDepress_Jopen_L, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, jawOpenInput, MlowerLipDepress_Jopen_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, jawOpenInput, MsharpCornerPull_Jopen_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, jawOpenInput, MsharpCornerPull_Jopen_R, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, jawOpenInput, MupperLipRaise_Jopen_L, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, jawOpenInput, MupperLipRaise_Jopen_R, returnStatus);
	Execute2(plug, data, jawLeftInput, jawOpenInput, Jleft_Jopen_cor, returnStatus);
	Execute2(plug, data, jawRightInput, jawOpenInput, Jright_Jopen_cor, returnStatus);
	Execute2(plug, data, mouthLipsPurseULInput, mouthLipsTowardsULInput, Mpurse_Mtowards__pucker_UL, returnStatus);
	Execute2(plug, data, mouthLipsPurseURInput, mouthLipsTowardsURInput, Mpurse_Mtowards__pucker_UR, returnStatus);
	Execute2(plug, data, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, Mpurse_Mtowards__pucker_DL, returnStatus);
	Execute2(plug, data, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, Mpurse_Mtowards__pucker_DR, returnStatus);
	Execute2(plug, data, mouthLipsPurseULInput, mouthFunnelULInput, Mpurse_Mfunnel_UL, returnStatus);
	Execute2(plug, data, mouthLipsPurseURInput, mouthFunnelURInput, Mpurse_Mfunnel_UR, returnStatus);
	Execute2(plug, data, mouthLipsPurseDLInput, mouthFunnelDLInput, Mpurse_Mfunnel_DL, returnStatus);
	Execute2(plug, data, mouthLipsPurseDRInput, mouthFunnelDRInput, Mpurse_Mfunnel_DR, returnStatus);
	Execute2(plug, data, mouthLipsTowardsULInput, mouthFunnelULInput, Mfunnel_Mtowards_UL, returnStatus);
	Execute2(plug, data, mouthLipsTowardsURInput, mouthFunnelURInput, Mfunnel_Mtowards_UR, returnStatus);
	Execute2(plug, data, mouthLipsTowardsDLInput, mouthFunnelDLInput, Mfunnel_Mtowards_DL, returnStatus);
	Execute2(plug, data, mouthLipsTowardsDRInput, mouthFunnelDRInput, Mfunnel_Mtowards_DR, returnStatus);
	Execute2(plug, data, mouthLipsPurseULInput, jawOpenInput, Mpurse_Jopen_UL, returnStatus);
	Execute2(plug, data, mouthLipsPurseURInput, jawOpenInput, Mpurse_Jopen_UR, returnStatus);
	Execute2(plug, data, mouthLipsPurseDLInput, jawOpenInput, Mpurse_Jopen_DL, returnStatus);
	Execute2(plug, data, mouthLipsPurseDRInput, jawOpenInput, Mpurse_Jopen_DR, returnStatus);
	Execute2(plug, data, mouthLipsTowardsULInput, jawOpenInput, Mtowards_Jopen_UL, returnStatus);
	Execute2(plug, data, mouthLipsTowardsURInput, jawOpenInput, Mtowards_Jopen_UR, returnStatus);
	Execute2(plug, data, mouthLipsTowardsDLInput, jawOpenInput, Mtowards_Jopen_DL, returnStatus);
	Execute2(plug, data, mouthLipsTowardsDRInput, jawOpenInput, Mtowards_Jopen_DR, returnStatus);
	Execute2(plug, data, mouthFunnelULInput, jawOpenInput, Mfunnel_Jopen_UL, returnStatus);
	Execute2(plug, data, mouthFunnelURInput, jawOpenInput, Mfunnel_Jopen_UR, returnStatus);
	Execute2(plug, data, mouthFunnelDLInput, jawOpenInput, Mfunnel_Jopen_DL, returnStatus);
	Execute2(plug, data, mouthFunnelDRInput, jawOpenInput, Mfunnel_Jopen_DR, returnStatus);
	Execute2(plug, data, mouthPressULInput, jawOpenInput, Mpress_Jopen_UL, returnStatus);
	Execute2(plug, data, mouthPressURInput, jawOpenInput, Mpress_Jopen_UR, returnStatus);
	Execute2(plug, data, mouthPressDLInput, jawOpenInput, Mpress_Jopen_DL, returnStatus);
	Execute2(plug, data, mouthPressDRInput, jawOpenInput, Mpress_Jopen_DR, returnStatus);
	Execute2(plug, data, mouthUpperLipBiteLInput, mouthLowerLipBiteLInput, mouth_lipsBite_L, returnStatus);
	Execute2(plug, data, mouthUpperLipBiteRInput, mouthLowerLipBiteRInput, mouth_lipsBite_R, returnStatus);
	Execute2(plug, data, mouthUpperLipBiteLInput, MupperLipBite_Jopen_L, jawOpenInput, 4.0f, returnStatus);
	Execute2(plug, data, mouthUpperLipBiteRInput, MupperLipBite_Jopen_R, jawOpenInput, 4.0f, returnStatus);
	Execute2(plug, data, mouthLowerLipBiteLInput, MlowerLipBite_Jopen_L, jawOpenInput, 4.0f, returnStatus);
	Execute2(plug, data, mouthLowerLipBiteRInput, MlowerLipBite_Jopen_R, jawOpenInput, 4.0f, returnStatus);
	Execute2(plug, data, mouthLipsPurseULInput, mouthLipsTightenULInput, Mpurse_Mtighten_UL, returnStatus);
	Execute2(plug, data, mouthLipsPurseURInput, mouthLipsTightenURInput, Mpurse_Mtighten_UR, returnStatus);
	Execute2(plug, data, mouthLipsPurseDLInput, mouthLipsTightenDLInput, Mpurse_Mtighten_DL, returnStatus);
	Execute2(plug, data, mouthLipsPurseDRInput, mouthLipsTightenDRInput, Mpurse_Mtighten_DR, returnStatus);
	Execute2(plug, data, mouthLipsTowardsULInput, mouthLipsTightenULInput, Mtowards_Mtighten_UL, returnStatus);
	Execute2(plug, data, mouthLipsTowardsURInput, mouthLipsTightenURInput, Mtowards_Mtighten_UR, returnStatus);
	Execute2(plug, data, mouthLipsTowardsDLInput, mouthLipsTightenDLInput, Mtowards_Mtighten_DL, returnStatus);
	Execute2(plug, data, mouthLipsTowardsDRInput, mouthLipsTightenDRInput, Mtowards_Mtighten_DR, returnStatus);
	Execute2(plug, data, mouthFunnelULInput, mouthLipsTightenULInput, Mfunnel_Mtighten_UL, returnStatus);
	Execute2(plug, data, mouthFunnelURInput, mouthLipsTightenURInput, Mfunnel_Mtighten_UR, returnStatus);
	Execute2(plug, data, mouthFunnelDLInput, mouthLipsTightenDLInput, Mfunnel_Mtighten_DL, returnStatus);
	Execute2(plug, data, mouthFunnelDRInput, mouthLipsTightenDRInput, Mfunnel_Mtighten_DR, returnStatus);
	Execute2(plug, data, neckStretchLInput, jawOpenInput, NKstretch_Jopen_L, returnStatus);
	Execute2(plug, data, neckStretchRInput, jawOpenInput, NKstretch_Jopen_R, returnStatus);
	Execute2(plug, data, mouthCheekBlowLInput, mouthCheekBlowRInput, cheek_blow_cor, returnStatus);
	Execute2(plug, data, jawChinRaiseDLInput, jawOpenInput, JlowerChinRaise_Jopen_L, returnStatus);
	Execute2(plug, data, jawChinRaiseDRInput, jawOpenInput, JlowerChinRaise_Jopen_R, returnStatus);
	Execute2(plug, data, eyeLookDownLInput, eyeWidenLInput, ElookDown_Ewiden_L, returnStatus);
	Execute2(plug, data, eyeLookDownRInput, eyeWidenRInput, ElookDown_Ewiden_R, returnStatus);
	/////////////Excute3//////////////
	Execute3(plug, data, eyeLookUpLInput, eyeLookLeftLInput, eyeBlinkLInput, ElookUp_ElookLeft_Eblink_L, returnStatus);
	Execute3(plug, data, eyeLookUpRInput, eyeLookLeftRInput, eyeBlinkRInput, ElookUp_ElookLeft_Eblink_R, returnStatus);
	Execute3(plug, data, eyeLookUpLInput, eyeLookRightLInput, eyeBlinkLInput, ElookUp_ElookRight_Eblink_L, returnStatus);
	Execute3(plug, data, eyeLookUpRInput, eyeLookRightRInput, eyeBlinkRInput, ElookUp_ElookRight_Eblink_R, returnStatus);
	Execute3(plug, data, eyeLookDownLInput, eyeLookLeftLInput, eyeBlinkLInput, ElookDown_ElookLeft_Eblink_L, returnStatus);
	Execute3(plug, data, eyeLookDownRInput, eyeLookLeftRInput, eyeBlinkRInput, ElookDown_ElookLeft_Eblink_R, returnStatus);
	Execute3(plug, data, eyeLookDownLInput, eyeLookRightLInput, eyeBlinkLInput, ElookDown_ElookRight_Eblink_L, returnStatus);
	Execute3(plug, data, eyeLookDownRInput, eyeLookRightRInput, eyeBlinkRInput, ElookDown_ElookRight_Eblink_R, returnStatus);
	Execute3(plug, data, eyeCheekRaiseLInput, eyeSquintInnerLInput, eyeBlinkLInput, EcheekRaise_EsquintInner_Eblink_L, returnStatus);
	Execute3(plug, data, eyeCheekRaiseRInput, eyeSquintInnerRInput, eyeBlinkRInput, EcheekRaise_EsquintInner_Eblink_R, returnStatus);
	Execute3(plug, data, mouthFunnelULInput, mouthLipsTowardsULInput, mouthLipsPurseULInput, Mpurse_Mtowards_Mfunnel__oh_UL, returnStatus);
	Execute3(plug, data, mouthFunnelURInput, mouthLipsTowardsURInput, mouthLipsPurseURInput, Mpurse_Mtowards_Mfunnel__oh_UR, returnStatus);
	Execute3(plug, data, mouthFunnelDLInput, mouthLipsTowardsDLInput, mouthLipsPurseDLInput, Mpurse_Mtowards_Mfunnel__oh_DL, returnStatus);
	Execute3(plug, data, mouthFunnelDRInput, mouthLipsTowardsDRInput, mouthLipsPurseDRInput, Mpurse_Mtowards_Mfunnel__oh_DR, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, mouthDimpleLInput, McornerPull_MupperLipRaise_Mdimple_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, mouthDimpleRInput, McornerPull_MupperLipRaise_Mdimple_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthDimpleLInput, McornerPull_Mstretch_Mdimple_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthDimpleRInput, McornerPull_Mstretch_Mdimple_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, mouthDimpleLInput, McornerPull_MlowerLipDepress_Mdimple_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, mouthDimpleRInput, McornerPull_MlowerLipDepress_Mdimple_R, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthUpperLipRaiseLInput, mouthDimpleLInput, Mstretch_MupperLipRaise_Mdimple_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthUpperLipRaiseRInput, mouthDimpleRInput, Mstretch_MupperLipRaise_Mdimple_R, returnStatus);
	Execute3(plug, data, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, mouthDimpleLInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_L, returnStatus);
	Execute3(plug, data, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, mouthDimpleRInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_R, returnStatus);
	Execute3(plug, data, mouthLowerLipDepressLInput, mouthStretchLInput, mouthDimpleLInput, Mstretch_MlowerLipDepress_Mdimple_L, returnStatus);
	Execute3(plug, data, mouthLowerLipDepressRInput, mouthStretchRInput, mouthDimpleRInput, Mstretch_MlowerLipDepress_Mdimple_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, McornerPull_MlowerLipDepress_MupperLipRaise_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, McornerPull_MlowerLipDepress_MupperLipRaise_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, mouthStretchLInput, McornerPull_Mstretch_MlowerLipDepress_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, mouthStretchRInput, McornerPull_Mstretch_MlowerLipDepress_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthStretchLInput, Mstretch_MupperLipRaise_MlowerLipDepress_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthStretchRInput, Mstretch_MupperLipRaise_MlowerLipDepress_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthCornerPullLInput, jawOpenInput, McornerPull_MupperLipRaise_Jopen_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthCornerPullRInput, jawOpenInput, McornerPull_MupperLipRaise_Jopen_R, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthCornerPullLInput, jawOpenInput, McornerPull_Mdimple_Jopen_L, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthCornerPullRInput, jawOpenInput, McornerPull_Mdimple_Jopen_R, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthStretchLInput, jawOpenInput, Mstretch_Mdimple_Jopen_L, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthStretchRInput, jawOpenInput, Mstretch_Mdimple_Jopen_R, returnStatus);
	Execute3(plug, data, mouthLipsPurseULInput, mouthLipsTowardsULInput, jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UL, returnStatus);
	Execute3(plug, data, mouthLipsPurseURInput, mouthLipsTowardsURInput, jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UR, returnStatus);
	Execute3(plug, data, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DL, returnStatus);
	Execute3(plug, data, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DR, returnStatus);
	Execute3(plug, data, mouthLipsPurseULInput, mouthFunnelULInput, jawOpenInput, Mpurse_Mfunnel_Jopen_UL, returnStatus);
	Execute3(plug, data, mouthLipsPurseURInput, mouthFunnelURInput, jawOpenInput, Mpurse_Mfunnel_Jopen_UR, returnStatus);
	Execute3(plug, data, mouthLipsPurseDLInput, mouthFunnelDLInput, jawOpenInput, Mpurse_Mfunnel_Jopen_DL, returnStatus);
	Execute3(plug, data, mouthLipsPurseDRInput, mouthFunnelDRInput, jawOpenInput, Mpurse_Mfunnel_Jopen_DR, returnStatus);
	Execute3(plug, data, mouthLipsTowardsULInput, mouthFunnelULInput, jawOpenInput, Mfunnel_Mtowards_Jopen_UL, returnStatus);
	Execute3(plug, data, mouthLipsTowardsURInput, mouthFunnelURInput, jawOpenInput, Mfunnel_Mtowards_Jopen_UR, returnStatus);
	Execute3(plug, data, mouthLipsTowardsDLInput, mouthFunnelDLInput, jawOpenInput, Mfunnel_Mtowards_Jopen_DL, returnStatus);
	Execute3(plug, data, mouthLipsTowardsDRInput, mouthFunnelDRInput, jawOpenInput, Mfunnel_Mtowards_Jopen_DR, returnStatus);
	Execute3(plug, data, mouthLipsTogetherULInput, mouthPressULInput, jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_UL, returnStatus);
	Execute3(plug, data, mouthLipsTogetherURInput, mouthPressURInput, jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_UR, returnStatus);
	Execute3(plug, data, mouthLipsTogetherDLInput, mouthPressDLInput, jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_DL, returnStatus);
	Execute3(plug, data, mouthLipsTogetherDRInput, mouthPressDRInput, jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_DR, returnStatus);
	Execute3(plug, data, mouthUpperLipBiteLInput, mouthLowerLipBiteLInput, jawOpenInput, MlowerLipBite_MupperLipBite_Jopen_L, 4.0f, returnStatus);
	Execute3(plug, data, mouthUpperLipBiteRInput, mouthLowerLipBiteRInput, jawOpenInput, MlowerLipBite_MupperLipBite_Jopen_R, 4.0f, returnStatus);
	Execute3(plug, data, mouthLipsTowardsULInput, mouthLipsPurseULInput, mouthLipsTightenULInput, Mpurse_Mtowards_Mtighten__puckerTighten_UL, returnStatus);
	Execute3(plug, data, mouthLipsTowardsURInput, mouthLipsPurseURInput, mouthLipsTightenURInput, Mpurse_Mtowards_Mtighten__puckerTighten_UR, returnStatus);
	Execute3(plug, data, mouthLipsTowardsDLInput, mouthLipsPurseDLInput, mouthLipsTightenDLInput, Mpurse_Mtowards_Mtighten__puckerTighten_DL, returnStatus);
	Execute3(plug, data, mouthLipsTowardsDRInput, mouthLipsPurseDRInput, mouthLipsTightenDRInput, Mpurse_Mtowards_Mtighten__puckerTighten_DR, returnStatus);
	Execute3(plug, data, mouthFunnelULInput, mouthLipsPurseULInput, mouthLipsTightenULInput, Mpurse_Mfunnel_Mtighten_UL, returnStatus);
	Execute3(plug, data, mouthFunnelURInput, mouthLipsPurseURInput, mouthLipsTightenURInput, Mpurse_Mfunnel_Mtighten_UR, returnStatus);
	Execute3(plug, data, mouthFunnelDLInput, mouthLipsPurseDLInput, mouthLipsTightenDLInput, Mpurse_Mfunnel_Mtighten_DL, returnStatus);
	Execute3(plug, data, mouthFunnelDRInput, mouthLipsPurseDRInput, mouthLipsTightenDRInput, Mpurse_Mfunnel_Mtighten_DR, returnStatus);
	Execute3(plug, data, mouthFunnelULInput, mouthLipsTowardsULInput, mouthLipsTightenULInput, Mfunnel_Mtowards_Mtighten_UL, returnStatus);
	Execute3(plug, data, mouthFunnelURInput, mouthLipsTowardsURInput, mouthLipsTightenURInput, Mfunnel_Mtowards_Mtighten_UR, returnStatus);
	Execute3(plug, data, mouthFunnelDLInput, mouthLipsTowardsDLInput, mouthLipsTightenDLInput, Mfunnel_Mtowards_Mtighten_DL, returnStatus);
	Execute3(plug, data, mouthFunnelDRInput, mouthLipsTowardsDRInput, mouthLipsTightenDRInput, Mfunnel_Mtowards_Mtighten_DR, returnStatus);

	///////Excute4///////////////////
	Execute4(plug, data, mouthStretchLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthDimpleLInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthDimpleRInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthDimpleLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthDimpleRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, mouthStretchLInput, mouthDimpleLInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, mouthStretchRInput, mouthDimpleRInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthDimpleLInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthDimpleRInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, mouthStretchLInput, jawOpenInput, McornerPull_Mstretch_MupperLipRaise_Jopen_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, mouthStretchRInput, jawOpenInput, McornerPull_Mstretch_MupperLipRaise_Jopen_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, mouthStretchLInput, jawOpenInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, mouthStretchRInput, jawOpenInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, jawOpenInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, jawOpenInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R, returnStatus);
	Execute4(plug, data, mouthStretchLInput, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, jawOpenInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, jawOpenInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R, returnStatus);
	Execute4(plug, data, mouthStretchLInput, mouthCornerPullLInput, mouthDimpleLInput, jawOpenInput, McornerPull_Mstretch_Mdimple_Jopen_L, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthCornerPullRInput, mouthDimpleRInput, jawOpenInput, McornerPull_Mstretch_Mdimple_Jopen_R, returnStatus);
	Execute4(plug, data, mouthLipsPurseULInput, mouthLipsTowardsULInput, mouthFunnelULInput, jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL, returnStatus);
	Execute4(plug, data, mouthLipsPurseURInput, mouthLipsTowardsURInput, mouthFunnelURInput, jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR, returnStatus);
	Execute4(plug, data, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, mouthFunnelDLInput, jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL, returnStatus);
	Execute4(plug, data, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, mouthFunnelDRInput, jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR, returnStatus);
	Execute4(plug, data, mouthLipsPurseULInput, mouthLipsTowardsULInput, mouthFunnelULInput, mouthLipsTightenULInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL, returnStatus);
	Execute4(plug, data, mouthLipsPurseURInput, mouthLipsTowardsURInput, mouthFunnelURInput, mouthLipsTightenURInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR, returnStatus);
	Execute4(plug, data, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, mouthFunnelDLInput, mouthLipsTightenDLInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL, returnStatus);
	Execute4(plug, data, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, mouthFunnelDRInput, mouthLipsTightenDRInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR, returnStatus);

	///////Excute5//////////////////
	Execute5(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthDimpleLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, returnStatus);
	Execute5(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthDimpleRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, returnStatus);
	Execute5(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, jawOpenInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, returnStatus);
	Execute5(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, jawOpenInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, returnStatus);

	///////////////////////////////add new objects//////////////////////////////////
	Execute2(plug, data, browRaiseInLInput, eyeBlinkLInput, Braise_Eblink_INL, returnStatus);
	Execute2(plug, data, browRaiseInRInput, eyeBlinkRInput, Braise_Eblink_INR, returnStatus);
	Execute2(plug, data, browRaiseOuterLInput, eyeBlinkLInput, Braise_Eblink_OUTL, returnStatus);
	Execute2(plug, data, browRaiseOuterRInput, eyeBlinkRInput, Braise_Eblink_OUTR, returnStatus);
	Execute2(plug, data, browRaiseInLInput, eyeLookDownLInput, Braise_ElookDown_INL, returnStatus);
	Execute2(plug, data, browRaiseInRInput, eyeLookDownRInput, Braise_ElookDown_INR, returnStatus);
	Execute2(plug, data, browRaiseOuterLInput, eyeLookDownLInput, Braise_ElookDown_OUTL, returnStatus);
	Execute2(plug, data, browRaiseOuterRInput, eyeLookDownRInput, Braise_ElookDown_OUTR, returnStatus);
	Execute2(plug, data, browRaiseInLInput, eyeWidenLInput, Braise_Ewiden_INL, returnStatus);
	Execute2(plug, data, browRaiseInRInput, eyeWidenRInput, Braise_Ewiden_INR, returnStatus);
	Execute2(plug, data, browRaiseOuterLInput, eyeWidenLInput, Braise_Ewiden_OUTL, returnStatus);
	Execute2(plug, data, browRaiseOuterRInput, eyeWidenRInput, Braise_Ewiden_OUTR, returnStatus);
	Execute2(plug, data, mouthCheekBlowLInput, mouthLipsBlowLInput, Cblow_MlipsBlow_L, returnStatus);
	Execute2(plug, data, mouthCheekBlowRInput, mouthLipsBlowRInput, Cblow_MlipsBlow_R, returnStatus);
	Execute2(plug, data, eyeFaceScrunchLInput, eyeBlinkLInput, EfaceScrunch_Eblink_L, returnStatus);
	Execute2(plug, data, eyeFaceScrunchRInput, eyeBlinkRInput, EfaceScrunch_Eblink_R, returnStatus);
	Execute2(plug, data, eyeLookDownLInput, eyeWidenLInput, ElookDown_Ewiden_L, returnStatus);
	Execute2(plug, data, eyeLookDownRInput, eyeWidenRInput, ElookDown_Ewiden_R, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, jawChinRaiseDLInput, JlowerChinRaise_MupperLipRaise_L, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, jawChinRaiseDRInput, JlowerChinRaise_MupperLipRaise_R, returnStatus);
	Execute2(plug, data, mouthCornerDepressLInput, noseWrinkleLInput, McornerDepress_NSwrinkle_L, returnStatus);
	Execute2(plug, data, mouthCornerDepressRInput, noseWrinkleRInput, McornerDepress_NSwrinkle_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, eyeCheekRaiseLInput, McornerPull_EcheekRaise_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, eyeCheekRaiseRInput, McornerPull_EcheekRaise_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, jawOpenExtremeInput, McornerPull_JopenExtreme_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, jawOpenExtremeInput, McornerPull_JopenExtreme_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthFunnelDLInput, McornerPull_Mfunnel_DL, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthFunnelDRInput, McornerPull_Mfunnel_DR, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthFunnelULInput, McornerPull_Mfunnel_UL, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthFunnelURInput, McornerPull_Mfunnel_UR, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthLipsPurseDLInput, McornerPull_Mpurse_DL, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthLipsPurseDRInput, McornerPull_Mpurse_DR, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthLipsPurseULInput, McornerPull_Mpurse_UL, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthLipsPurseURInput, McornerPull_Mpurse_UR, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, jawOpenExtremeInput, McornerPull_Mstretch_JopenExtreme_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, jawOpenExtremeInput, McornerPull_Mstretch_JopenExtreme_R, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthLipsTowardsDLInput, McornerPull_Mtowards_DL, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthLipsTowardsDRInput, McornerPull_Mtowards_DR, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, mouthLipsTowardsULInput, McornerPull_Mtowards_UL, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, mouthLipsTowardsURInput, McornerPull_Mtowards_UR, returnStatus);
	Execute2(plug, data, mouthCornerPullLInput, noseWrinkleLInput, McornerPull_NSwrinkle_L, returnStatus);
	Execute2(plug, data, mouthCornerPullRInput, noseWrinkleRInput, McornerPull_NSwrinkle_R, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthFunnelDLInput, Mdimple_Mfunnel_DL, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, mouthFunnelDRInput, Mdimple_Mfunnel_DR, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthFunnelULInput, Mdimple_Mfunnel_UL, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, mouthFunnelURInput, Mdimple_Mfunnel_UR, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthLipsPurseDLInput, Mdimple_Mpurse_DL, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, mouthLipsPurseDRInput, Mdimple_Mpurse_DR, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthLipsPurseULInput, Mdimple_Mpurse_UL, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, mouthLipsPurseURInput, Mdimple_Mpurse_UR, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthLipsTowardsDLInput, Mdimple_Mtowards_DL, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, mouthLipsTowardsDRInput, Mdimple_Mtowards_DR, returnStatus);
	Execute2(plug, data, mouthDimpleLInput, mouthLipsTowardsULInput, Mdimple_Mtowards_UL, returnStatus);
	Execute2(plug, data, mouthDimpleRInput, mouthLipsTowardsURInput, Mdimple_Mtowards_UR, returnStatus);
	Execute2(plug, data, mouthFunnelDLInput, mouthLowerLipDepressLInput, Mfunnel_MlowerLipDepress_DL, returnStatus);
	Execute2(plug, data, mouthFunnelDRInput, mouthLowerLipDepressRInput, Mfunnel_MlowerLipDepress_DR, returnStatus);
	Execute2(plug, data, mouthFunnelULInput, mouthLowerLipDepressLInput, Mfunnel_MlowerLipDepress_UL, returnStatus);
	Execute2(plug, data, mouthFunnelURInput, mouthLowerLipDepressRInput, Mfunnel_MlowerLipDepress_UR, returnStatus);
	Execute2(plug, data, mouthFunnelDLInput, mouthUpperLipRaiseLInput, Mfunnel_MupperLipRaise_DL, returnStatus);
	Execute2(plug, data, mouthFunnelDRInput, mouthUpperLipRaiseRInput, Mfunnel_MupperLipRaise_DR, returnStatus);
	Execute2(plug, data, mouthFunnelULInput, mouthUpperLipRaiseLInput, Mfunnel_MupperLipRaise_UL, returnStatus);
	Execute2(plug, data, mouthFunnelURInput, mouthUpperLipRaiseRInput, Mfunnel_MupperLipRaise_UR, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, jawOpenExtremeInput, MlowerLipDepress_JopenExtreme_L, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, jawOpenExtremeInput, MlowerLipDepress_JopenExtreme_R, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, mouthLipsTightenDLInput, MlowerLipDepress_Mtighten_DL, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, mouthLipsTightenDRInput, MlowerLipDepress_Mtighten_DR, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressLInput, mouthLipsTightenULInput, MlowerLipDepress_Mtighten_UL, returnStatus);
	Execute2(plug, data, mouthLowerLipDepressRInput, mouthLipsTightenURInput, MlowerLipDepress_Mtighten_UR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, jawChinRaiseDLInput, Mstretch_JlowerChinRaise_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, jawChinRaiseDRInput, Mstretch_JlowerChinRaise_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, jawOpenExtremeInput, Mstretch_JopenExtreme_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, jawOpenExtremeInput, Mstretch_JopenExtreme_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthFunnelDLInput, Mstretch_Mfunnel_DL, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthFunnelDRInput, Mstretch_Mfunnel_DR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthFunnelULInput, Mstretch_Mfunnel_UL, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthFunnelURInput, Mstretch_Mfunnel_UR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthLipsPurseDLInput, Mstretch_Mpurse_DL, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthLipsPurseDRInput, Mstretch_Mpurse_DR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthLipsPurseULInput, Mstretch_Mpurse_UL, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthLipsPurseURInput, Mstretch_Mpurse_UR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthStretchLipsCloseLInput, Mstretch_MstretchLipsClose_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthStretchLipsCloseRInput, Mstretch_MstretchLipsClose_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthLipsTowardsDLInput, Mstretch_Mtowards_DL, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthLipsTowardsDRInput, Mstretch_Mtowards_DR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, mouthLipsTowardsULInput, Mstretch_Mtowards_UL, returnStatus);
	Execute2(plug, data, mouthStretchRInput, mouthLipsTowardsURInput, Mstretch_Mtowards_UR, returnStatus);
	Execute2(plug, data, mouthStretchLInput, noseWrinkleLInput, Mstretch_NSdepress_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, noseWrinkleRInput, Mstretch_NSdepress_R, returnStatus);
	Execute2(plug, data, mouthStretchLInput, noseWrinkleLInput, Mstretch_NSwrinkle_L, returnStatus);
	Execute2(plug, data, mouthStretchRInput, noseWrinkleRInput, Mstretch_NSwrinkle_R, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, jawOpenExtremeInput, MupperLipRaise_JopenExtreme_L, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, jawOpenExtremeInput, MupperLipRaise_JopenExtreme_R, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, mouthLipsTightenDLInput, MupperLipRaise_Mtighten_DL, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, mouthLipsTightenDRInput, MupperLipRaise_Mtighten_DR, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, mouthLipsTightenULInput, MupperLipRaise_Mtighten_UL, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, mouthLipsTightenURInput, MupperLipRaise_Mtighten_UR, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseLInput, noseWrinkleLInput, MupperLipRaise_NSwrinkle_L, returnStatus);
	Execute2(plug, data, mouthUpperLipRaiseRInput, noseWrinkleRInput, MupperLipRaise_NSwrinkle_R, returnStatus);
	Execute2(plug, data, neckStretchLInput, mouthStretchLInput, NKstretch_Mstretch_L, returnStatus);
	Execute2(plug, data, neckStretchRInput, mouthStretchRInput, NKstretch_Mstretch_R, returnStatus);
	Execute2(plug, data, noseWrinkleLInput, jawOpenInput, NSwrinkle_Jopen_L, returnStatus);
	Execute2(plug, data, noseWrinkleRInput, jawOpenInput, NSwrinkle_Jopen_R, returnStatus);

	Execute3(plug, data, browRaiseInLInput, browDownLInput, browLateralLInput, BraiseIn_Bdown_Blateral_L, returnStatus);
	Execute3(plug, data, browRaiseInRInput, browDownRInput, browLateralRInput, BraiseIn_Bdown_Blateral_R, returnStatus);
	Execute3(plug, data, jawLeftInput, mouthLipsTogetherDLInput, jawOpenInput, Jleft_MlipsTogether_Jopen_DL, returnStatus);
	Execute3(plug, data, jawLeftInput, mouthLipsTogetherDRInput, jawOpenInput, Jleft_MlipsTogether_Jopen_DR, returnStatus);
	Execute3(plug, data, jawLeftInput, mouthLipsTogetherULInput, jawOpenInput, Jleft_MlipsTogether_Jopen_UL, returnStatus);
	Execute3(plug, data, jawLeftInput, mouthLipsTogetherURInput, jawOpenInput, Jleft_MlipsTogether_Jopen_UR, returnStatus);
	Execute3(plug, data, mouthCornerDepressLInput, noseWrinkleLInput, jawOpenInput, McornerDepress_NSwrinkle_Jopen_L, returnStatus);
	Execute3(plug, data, mouthCornerDepressRInput, noseWrinkleRInput, jawOpenInput, McornerDepress_NSwrinkle_Jopen_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthFunnelDLInput, mouthLipsTowardsDLInput, McornerPull_Mfunnel_Mtowards_DL, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthFunnelDRInput, mouthLipsTowardsDRInput, McornerPull_Mfunnel_Mtowards_DR, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthFunnelULInput, mouthLipsTowardsULInput, McornerPull_Mfunnel_Mtowards_UL, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthFunnelURInput, mouthLipsTowardsURInput, McornerPull_Mfunnel_Mtowards_UR, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, jawOpenExtremeInput, McornerPull_MlowerLipDepress_JopenExtreme_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, jawOpenExtremeInput, McornerPull_MlowerLipDepress_JopenExtreme_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, jawOpenInput, McornerPull_MlowerLipDepress_Jopen_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, jawOpenInput, McornerPull_MlowerLipDepress_Jopen_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLipsPurseDLInput, mouthFunnelDLInput, McornerPull_Mpurse_Mfunnel_DL, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLipsPurseDRInput, mouthFunnelDRInput, McornerPull_Mpurse_Mfunnel_DR, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLipsPurseULInput, mouthFunnelULInput, McornerPull_Mpurse_Mfunnel_UL, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLipsPurseURInput, mouthFunnelURInput, McornerPull_Mpurse_Mfunnel_UR, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DL, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DR, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthLipsPurseULInput, mouthLipsTowardsULInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UL, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthLipsPurseURInput, mouthLipsTowardsURInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UR, returnStatus);
	Execute3(plug, data, mouthCornerPullLOutput, mouthStretchLInput, jawOpenInput, McornerPull_Mstretch_Jopen_L, returnStatus);
	Execute3(plug, data, mouthCornerPullROutput, mouthStretchRInput, jawOpenInput, McornerPull_Mstretch_Jopen_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthStretchLInput, noseWrinkleLInput, McornerPull_Mstretch_NSwrinkle_Jopen_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthStretchRInput, noseWrinkleRInput, McornerPull_Mstretch_NSwrinkle_Jopen_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthStretchLInput, noseWrinkleLInput, McornerPull_Mstretch_NSwrinkle_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthStretchRInput, noseWrinkleRInput, McornerPull_Mstretch_NSwrinkle_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, jawOpenExtremeInput, McornerPull_MupperLipRaise_JopenExtreme_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, jawOpenExtremeInput, McornerPull_MupperLipRaise_JopenExtreme_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, noseWrinkleLInput, McornerPull_MupperLipRaise_NSwrinkle_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, noseWrinkleRInput, McornerPull_MupperLipRaise_NSwrinkle_R, returnStatus);
	Execute3(plug, data, mouthCornerPullLInput, noseWrinkleLInput, jawOpenInput, McornerPull_NSwrinkle_Jopen_L, returnStatus);
	Execute3(plug, data, mouthCornerPullRInput, noseWrinkleRInput, jawOpenInput, McornerPull_NSwrinkle_Jopen_R, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthFunnelDLInput, mouthLipsTowardsDLInput, Mdimple_Mfunnel_Mtowards_DL, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthFunnelDRInput, mouthLipsTowardsDRInput, Mdimple_Mfunnel_Mtowards_DR, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthFunnelULInput, mouthLipsTowardsULInput, Mdimple_Mfunnel_Mtowards_UL, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthFunnelURInput, mouthLipsTowardsURInput, Mdimple_Mfunnel_Mtowards_UR, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthLipsPurseDLInput, mouthFunnelDLInput, Mdimple_Mpurse_Mfunnel_DL, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthLipsPurseDRInput, mouthFunnelDRInput, Mdimple_Mpurse_Mfunnel_DR, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthLipsPurseULInput, mouthFunnelULInput, Mdimple_Mpurse_Mfunnel_UL, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthLipsPurseURInput, mouthFunnelURInput, Mdimple_Mpurse_Mfunnel_UR, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, Mdimple_Mpurse_Mtowards__dimplePucker_DL, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, Mdimple_Mpurse_Mtowards__dimplePucker_DR, returnStatus);
	Execute3(plug, data, mouthDimpleLInput, mouthLipsPurseULInput, mouthLipsTowardsULInput, Mdimple_Mpurse_Mtowards__dimplePucker_UL, returnStatus);
	Execute3(plug, data, mouthDimpleRInput, mouthLipsPurseURInput, mouthLipsTowardsURInput, Mdimple_Mpurse_Mtowards__dimplePucker_UR, returnStatus);
	Execute3(plug, data, mouthFunnelDLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL, returnStatus);
	Execute3(plug, data, mouthFunnelDRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR, returnStatus);
	Execute3(plug, data, mouthFunnelULInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL, returnStatus);
	Execute3(plug, data, mouthFunnelURInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthFunnelDLInput, mouthLipsTowardsDLInput, Mstretch_Mfunnel_Mtowards_DL, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthFunnelDRInput, mouthLipsTowardsDRInput, Mstretch_Mfunnel_Mtowards_DR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthFunnelULInput, mouthLipsTowardsULInput, Mstretch_Mfunnel_Mtowards_UL, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthFunnelURInput, mouthLipsTowardsURInput, Mstretch_Mfunnel_Mtowards_UR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthLowerLipDepressLInput, jawOpenExtremeInput, Mstretch_MlowerLipDepress_JopenExtreme_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthLowerLipDepressRInput, jawOpenExtremeInput, Mstretch_MlowerLipDepress_JopenExtreme_R, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthLowerLipDepressLInput, jawOpenInput, Mstretch_MlowerLipDepress_Jopen_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthLowerLipDepressRInput, jawOpenInput, Mstretch_MlowerLipDepress_Jopen_R, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthLipsPurseDLInput, mouthFunnelDLInput, Mstretch_Mpurse_Mfunnel_DL, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthLipsPurseDRInput, mouthFunnelDRInput, Mstretch_Mpurse_Mfunnel_DR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthLipsPurseULInput, mouthFunnelULInput, Mstretch_Mpurse_Mfunnel_UL, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthLipsPurseURInput, mouthFunnelURInput, Mstretch_Mpurse_Mfunnel_UR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthLipsPurseULInput, mouthLipsTowardsULInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthLipsPurseURInput, mouthLipsTowardsURInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthUpperLipRaiseLInput, jawOpenExtremeInput, Mstretch_MupperLipRaise_JopenExtreme_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthUpperLipRaiseRInput, jawOpenExtremeInput, Mstretch_MupperLipRaise_JopenExtreme_R, returnStatus);
	Execute3(plug, data, mouthStretchLInput, mouthUpperLipRaiseLInput, jawOpenInput, Mstretch_MupperLipRaise_Jopen_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, mouthUpperLipRaiseRInput, jawOpenInput, Mstretch_MupperLipRaise_Jopen_R, returnStatus);
	Execute3(plug, data, mouthStretchLInput, noseWrinkleLInput, mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_NSwrinkle_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, noseWrinkleRInput, mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_NSwrinkle_R, returnStatus);
	Execute3(plug, data, mouthStretchLInput, noseWrinkleLInput, jawOpenInput, Mstretch_NSwrinkle_Jopen_L, returnStatus);
	Execute3(plug, data, mouthStretchRInput, noseWrinkleRInput, jawOpenInput, Mstretch_NSwrinkle_Jopen_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthCornerDepressLInput, jawOpenInput, MupperLipRaise_McornerDepress_Jopen_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthCornerDepressRInput, jawOpenInput, MupperLipRaise_McornerDepress_Jopen_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, jawOpenExtremeInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, jawOpenExtremeInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, jawOpenInput, MupperLipRaise_MlowerLipDepress_Jopen_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, jawOpenInput, MupperLipRaise_MlowerLipDepress_Jopen_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthLipsTightenDLInput, MupperLipRaise_MlowerLipDepress_Mtighten_DL, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthLipsTightenDRInput, MupperLipRaise_MlowerLipDepress_Mtighten_DR, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, mouthLipsTightenULInput, MupperLipRaise_MlowerLipDepress_Mtighten_UL, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, mouthLipsTightenURInput, MupperLipRaise_MlowerLipDepress_Mtighten_UR, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, noseWrinkleLInput, jawOpenInput, MupperLipRaise_NSwrinkle_Jopen_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, noseWrinkleRInput, jawOpenInput, MupperLipRaise_NSwrinkle_Jopen_R, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseLInput, noseWrinkleLInput, mouthCornerDepressLInput, MupperLipRaise_NSwrinkle_McornerDepress_L, returnStatus);
	Execute3(plug, data, mouthUpperLipRaiseRInput, noseWrinkleRInput, mouthCornerDepressRInput, MupperLipRaise_NSwrinkle_McornerDepress_R, returnStatus);
	Execute3(plug, data, neckStretchLInput, mouthStretchLInput, jawOpenInput, NKstretch_Mstretch_Jopen_L, returnStatus);
	Execute3(plug, data, neckStretchRInput, mouthStretchRInput, jawOpenInput, NKstretch_Mstretch_Jopen_R, returnStatus);

	Execute4(plug, data, jawLeftInput, mouthLipsTightenDLInput, jawLeftInput, mouthLipsTightenDLInput, Jleft_MlipsTogether_DL, returnStatus);
	Execute4(plug, data, jawLeftInput, mouthLipsTightenDRInput, jawLeftInput, mouthLipsTightenDRInput, Jleft_MlipsTogether_DR, returnStatus);
	Execute4(plug, data, jawLeftInput, mouthLipsTightenULInput, jawLeftInput, mouthLipsTightenULInput, Jleft_MlipsTogether_UL, returnStatus);
	Execute4(plug, data, jawLeftInput, mouthLipsTightenURInput, jawLeftInput, mouthLipsTightenURInput, Jleft_MlipsTogether_UR, returnStatus);
	Execute4(plug, data, jawRightInput, mouthLipsTightenDLInput, jawRightInput, mouthLipsTightenDLInput, Jright_MlipsTogether_DL, returnStatus);
	Execute4(plug, data, jawRightInput, mouthLipsTightenDRInput, jawRightInput, mouthLipsTightenDRInput, Jright_MlipsTogether_DR, returnStatus);
	Execute4(plug, data, jawRightInput, mouthLipsTightenULInput, jawRightInput, mouthLipsTightenULInput, Jright_MlipsTogether_UL, returnStatus);
	Execute4(plug, data, jawRightInput, mouthLipsTightenURInput, jawRightInput, mouthLipsTightenURInput, Jright_MlipsTogether_UR, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, jawOpenExtremeInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, jawOpenExtremeInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, mouthFunnelDLInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, mouthFunnelDRInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthLipsPurseULInput, mouthLipsTowardsULInput, mouthFunnelULInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthLipsPurseURInput, mouthLipsTowardsURInput, mouthFunnelURInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthLowerLipDepressLInput, jawOpenExtremeInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthLowerLipDepressRInput, jawOpenExtremeInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthLowerLipDepressLInput, mouthDimpleLInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthLowerLipDepressRInput, mouthDimpleRInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, noseWrinkleLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, noseWrinkleRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R, returnStatus);
	Execute4(plug, data, mouthCornerPullLInput, mouthUpperLipRaiseLInput, noseWrinkleLInput, jawOpenInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_L, returnStatus);
	Execute4(plug, data, mouthCornerPullRInput, mouthUpperLipRaiseRInput, noseWrinkleRInput, jawOpenInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_R, returnStatus);
	Execute4(plug, data, mouthDimpleLInput, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, mouthFunnelDLInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL, returnStatus);
	Execute4(plug, data, mouthDimpleRInput, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, mouthFunnelDRInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR, returnStatus);
	Execute4(plug, data, mouthDimpleLInput, mouthLipsPurseULInput, mouthLipsTowardsULInput, mouthFunnelULInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL, returnStatus);
	Execute4(plug, data, mouthDimpleRInput, mouthLipsPurseURInput, mouthLipsTowardsURInput, mouthFunnelURInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR, returnStatus);
	Execute4(plug, data, mouthStretchLInput, mouthLowerLipDepressLInput, mouthUpperLipRaiseLInput, jawOpenExtremeInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthLowerLipDepressRInput, mouthUpperLipRaiseRInput, jawOpenExtremeInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, returnStatus);
	Execute4(plug, data, mouthStretchLInput, mouthLipsPurseDLInput, mouthLipsTowardsDLInput, mouthFunnelDLInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthLipsPurseDRInput, mouthLipsTowardsDRInput, mouthFunnelDRInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR, returnStatus);
	Execute4(plug, data, mouthStretchLInput, mouthLipsPurseULInput, mouthLipsTowardsULInput, mouthFunnelULInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthLipsPurseURInput, mouthLipsTowardsURInput, mouthFunnelURInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR, returnStatus);
	Execute4(plug, data, mouthStretchLInput, mouthUpperLipRaiseLInput, noseWrinkleLInput, jawOpenInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, returnStatus);
	Execute4(plug, data, mouthStretchRInput, mouthUpperLipRaiseRInput, noseWrinkleRInput, jawOpenInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, returnStatus);
	Execute4(plug, data, mouthUpperLipRaiseLInput, noseWrinkleLInput, mouthCornerDepressLInput, jawOpenInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L, returnStatus);
	Execute4(plug, data, mouthUpperLipRaiseRInput, noseWrinkleRInput, mouthCornerDepressRInput, jawOpenInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R, returnStatus);

	Execute5(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, mouthLowerLipDepressLInput, jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, returnStatus);
	Execute5(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, mouthLowerLipDepressRInput, jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, returnStatus);
	Execute5(plug, data, mouthCornerPullLInput, mouthStretchLInput, mouthUpperLipRaiseLInput, noseWrinkleLInput, jawOpenInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, returnStatus);
	Execute5(plug, data, mouthCornerPullRInput, mouthStretchRInput, mouthUpperLipRaiseRInput, noseWrinkleRInput, jawOpenInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, returnStatus);


	return MS::kSuccess;
}

void* zjhFaceBSBlender::creator() { return new zjhFaceBSBlender(); }

MStatus zjhFaceBSBlender::initialize()
{
	MFnNumericAttribute nAttr;
	MStatus				stat;
	/************inputs and outputs********************/
	{
		browDownLInput = nAttr.create("browDownLInput", "browDownLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browDownLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browDownRInput = nAttr.create("browDownRInput", "browDownRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browDownRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browLateralLInput = nAttr.create("browLateralLInput", "browLateralLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browLateralLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browLateralRInput = nAttr.create("browLateralRInput", "browLateralRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browLateralRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseInLInput = nAttr.create("browRaiseInLInput", "browRaiseInLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browRaiseInLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseInRInput = nAttr.create("browRaiseInRInput", "browRaiseInRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browRaiseInRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseOuterLInput = nAttr.create("browRaiseOuterLInput", "browRaiseOuterLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browRaiseOuterLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseOuterRInput = nAttr.create("browRaiseOuterRInput", "browRaiseOuterRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(browRaiseOuterRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		earUpLInput = nAttr.create("earUpLInput", "earUpLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(earUpLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		earUpRInput = nAttr.create("earUpRInput", "earUpRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(earUpRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeBlinkLInput = nAttr.create("eyeBlinkLInput", "eyeBlinkLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeBlinkLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeBlinkRInput = nAttr.create("eyeBlinkRInput", "eyeBlinkRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeBlinkRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLidPressLInput = nAttr.create("eyeLidPressLInput", "eyeLidPressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLidPressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLidPressRInput = nAttr.create("eyeLidPressRInput", "eyeLidPressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLidPressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeWidenLInput = nAttr.create("eyeWidenLInput", "eyeWidenLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeWidenLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeWidenRInput = nAttr.create("eyeWidenRInput", "eyeWidenRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeWidenRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeSquintInnerLInput = nAttr.create("eyeSquintInnerLInput", "eyeSquintInnerLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeSquintInnerLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeSquintInnerRInput = nAttr.create("eyeSquintInnerRInput", "eyeSquintInnerRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeSquintInnerRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeCheekRaiseLInput = nAttr.create("eyeCheekRaiseLInput", "eyeCheekRaiseLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeCheekRaiseLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeCheekRaiseRInput = nAttr.create("eyeCheekRaiseRInput", "eyeCheekRaiseRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeCheekRaiseRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeFaceScrunchLInput = nAttr.create("eyeFaceScrunchLInput", "eyeFaceScrunchLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeFaceScrunchLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeFaceScrunchRInput = nAttr.create("eyeFaceScrunchRInput", "eyeFaceScrunchRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeFaceScrunchRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeUpperLidUpLInput = nAttr.create("eyeUpperLidUpLInput", "eyeUpperLidUpLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeUpperLidUpLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeUpperLidUpRInput = nAttr.create("eyeUpperLidUpRInput", "eyeUpperLidUpRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeUpperLidUpRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeRelaxLInput = nAttr.create("eyeRelaxLInput", "eyeRelaxLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeRelaxLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeRelaxRInput = nAttr.create("eyeRelaxRInput", "eyeRelaxRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeRelaxRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidUpLInput = nAttr.create("eyeLowerLidUpLInput", "eyeLowerLidUpLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLowerLidUpLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidUpRInput = nAttr.create("eyeLowerLidUpRInput", "eyeLowerLidUpRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLowerLidUpRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidDownLInput = nAttr.create("eyeLowerLidDownLInput", "eyeLowerLidDownLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLowerLidDownLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidDownRInput = nAttr.create("eyeLowerLidDownRInput", "eyeLowerLidDownRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLowerLidDownRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookUpLInput = nAttr.create("eyeLookUpLInput", "eyeLookUpLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookUpLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookUpRInput = nAttr.create("eyeLookUpRInput", "eyeLookUpRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookUpRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookDownLInput = nAttr.create("eyeLookDownLInput", "eyeLookDownLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookDownLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookDownRInput = nAttr.create("eyeLookDownRInput", "eyeLookDownRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookDownRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookLeftLInput = nAttr.create("eyeLookLeftLInput", "eyeLookLeftLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookLeftLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookLeftRInput = nAttr.create("eyeLookLeftRInput", "eyeLookLeftRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookLeftRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookRightLInput = nAttr.create("eyeLookRightLInput", "eyeLookRightLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookRightLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookRightRInput = nAttr.create("eyeLookRightRInput", "eyeLookRightRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeLookRightRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilWideLInput = nAttr.create("eyePupilWideLInput", "eyePupilWideLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyePupilWideLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilWideRInput = nAttr.create("eyePupilWideRInput", "eyePupilWideRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyePupilWideRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilNarrowLInput = nAttr.create("eyePupilNarrowLInput", "eyePupilNarrowLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyePupilNarrowLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilNarrowRInput = nAttr.create("eyePupilNarrowRInput", "eyePupilNarrowRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyePupilNarrowRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeParallelLookDirectionInput = nAttr.create("eyeParallelLookDirectionInput", "eyeParallelLookDirectionIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyeParallelLookDirectionInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpINLInput = nAttr.create("eyelashesUpINLInput", "eyelashesUpINLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesUpINLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpINRInput = nAttr.create("eyelashesUpINRInput", "eyelashesUpINRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesUpINRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpOUTLInput = nAttr.create("eyelashesUpOUTLInput", "eyelashesUpOUTLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesUpOUTLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpOUTRInput = nAttr.create("eyelashesUpOUTRInput", "eyelashesUpOUTRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesUpOUTRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownINLInput = nAttr.create("eyelashesDownINLInput", "eyelashesDownINLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesDownINLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownINRInput = nAttr.create("eyelashesDownINRInput", "eyelashesDownINRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesDownINRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownOUTLInput = nAttr.create("eyelashesDownOUTLInput", "eyelashesDownOUTLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesDownOUTLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownOUTRInput = nAttr.create("eyelashesDownOUTRInput", "eyelashesDownOUTRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(eyelashesDownOUTRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleLInput = nAttr.create("noseWrinkleLInput", "noseWrinkleLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseWrinkleLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleRInput = nAttr.create("noseWrinkleRInput", "noseWrinkleRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseWrinkleRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleUpperLInput = nAttr.create("noseWrinkleUpperLInput", "noseWrinkleUpperLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseWrinkleUpperLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleUpperRInput = nAttr.create("noseWrinkleUpperRInput", "noseWrinkleUpperRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseWrinkleUpperRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDepressLInput = nAttr.create("noseNostrilDepressLInput", "noseNostrilDepressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNostrilDepressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDepressRInput = nAttr.create("noseNostrilDepressRInput", "noseNostrilDepressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNostrilDepressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDilateLInput = nAttr.create("noseNostrilDilateLInput", "noseNostrilDilateLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNostrilDilateLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDilateRInput = nAttr.create("noseNostrilDilateRInput", "noseNostrilDilateRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNostrilDilateRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilCompressLInput = nAttr.create("noseNostrilCompressLInput", "noseNostrilCompressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNostrilCompressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilCompressRInput = nAttr.create("noseNostrilCompressRInput", "noseNostrilCompressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNostrilCompressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNasolabialDeepenLInput = nAttr.create("noseNasolabialDeepenLInput", "noseNasolabialDeepenLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNasolabialDeepenLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNasolabialDeepenRInput = nAttr.create("noseNasolabialDeepenRInput", "noseNasolabialDeepenRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(noseNasolabialDeepenRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekSuckLInput = nAttr.create("mouthCheekSuckLInput", "mouthCheekSuckLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCheekSuckLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekSuckRInput = nAttr.create("mouthCheekSuckRInput", "mouthCheekSuckRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCheekSuckRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekBlowLInput = nAttr.create("mouthCheekBlowLInput", "mouthCheekBlowLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCheekBlowLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekBlowRInput = nAttr.create("mouthCheekBlowRInput", "mouthCheekBlowRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCheekBlowRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsBlowLInput = nAttr.create("mouthLipsBlowLInput", "mouthLipsBlowLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsBlowLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsBlowRInput = nAttr.create("mouthLipsBlowRInput", "mouthLipsBlowRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsBlowRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLeftInput = nAttr.create("mouthLeftInput", "mouthLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthRightInput = nAttr.create("mouthRightInput", "mouthRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpInput = nAttr.create("mouthUpInput", "mouthUpIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthDownInput = nAttr.create("mouthDownInput", "mouthDownIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthDownInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRaiseLInput = nAttr.create("mouthUpperLipRaiseLInput", "mouthUpperLipRaiseLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipRaiseLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRaiseRInput = nAttr.create("mouthUpperLipRaiseRInput", "mouthUpperLipRaiseRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipRaiseRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipDepressLInput = nAttr.create("mouthLowerLipDepressLInput", "mouthLowerLipDepressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipDepressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipDepressRInput = nAttr.create("mouthLowerLipDepressRInput", "mouthLowerLipDepressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipDepressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerPullLInput = nAttr.create("mouthCornerPullLInput", "mouthCornerPullLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerPullLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerPullRInput = nAttr.create("mouthCornerPullRInput", "mouthCornerPullRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerPullRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchLInput = nAttr.create("mouthStretchLInput", "mouthStretchLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStretchLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchRInput = nAttr.create("mouthStretchRInput", "mouthStretchRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStretchRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchLipsCloseLInput = nAttr.create("mouthStretchLipsCloseLInput", "mouthStretchLipsCloseLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStretchLipsCloseLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchLipsCloseRInput = nAttr.create("mouthStretchLipsCloseRInput", "mouthStretchLipsCloseRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStretchLipsCloseRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthDimpleLInput = nAttr.create("mouthDimpleLInput", "mouthDimpleLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthDimpleLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthDimpleRInput = nAttr.create("mouthDimpleRInput", "mouthDimpleRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthDimpleRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDepressLInput = nAttr.create("mouthCornerDepressLInput", "mouthCornerDepressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerDepressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDepressRInput = nAttr.create("mouthCornerDepressRInput", "mouthCornerDepressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerDepressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressULInput = nAttr.create("mouthPressULInput", "mouthPressULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthPressULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressURInput = nAttr.create("mouthPressURInput", "mouthPressURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthPressURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressDLInput = nAttr.create("mouthPressDLInput", "mouthPressDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthPressDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressDRInput = nAttr.create("mouthPressDRInput", "mouthPressDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthPressDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseULInput = nAttr.create("mouthLipsPurseULInput", "mouthLipsPurseULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPurseULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseURInput = nAttr.create("mouthLipsPurseURInput", "mouthLipsPurseURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPurseURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseDLInput = nAttr.create("mouthLipsPurseDLInput", "mouthLipsPurseDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPurseDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseDRInput = nAttr.create("mouthLipsPurseDRInput", "mouthLipsPurseDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPurseDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsULInput = nAttr.create("mouthLipsTowardsULInput", "mouthLipsTowardsULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTowardsULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsURInput = nAttr.create("mouthLipsTowardsURInput", "mouthLipsTowardsURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTowardsURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsDLInput = nAttr.create("mouthLipsTowardsDLInput", "mouthLipsTowardsDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTowardsDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsDRInput = nAttr.create("mouthLipsTowardsDRInput", "mouthLipsTowardsDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTowardsDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelULInput = nAttr.create("mouthFunnelULInput", "mouthFunnelULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthFunnelULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelURInput = nAttr.create("mouthFunnelURInput", "mouthFunnelURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthFunnelURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelDLInput = nAttr.create("mouthFunnelDLInput", "mouthFunnelDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthFunnelDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelDRInput = nAttr.create("mouthFunnelDRInput", "mouthFunnelDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthFunnelDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherULInput = nAttr.create("mouthLipsTogetherULInput", "mouthLipsTogetherULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTogetherULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherURInput = nAttr.create("mouthLipsTogetherURInput", "mouthLipsTogetherURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTogetherURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherDLInput = nAttr.create("mouthLipsTogetherDLInput", "mouthLipsTogetherDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTogetherDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherDRInput = nAttr.create("mouthLipsTogetherDRInput", "mouthLipsTogetherDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTogetherDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipBiteLInput = nAttr.create("mouthUpperLipBiteLInput", "mouthUpperLipBiteLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipBiteLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipBiteRInput = nAttr.create("mouthUpperLipBiteRInput", "mouthUpperLipBiteRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipBiteRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipBiteLInput = nAttr.create("mouthLowerLipBiteLInput", "mouthLowerLipBiteLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipBiteLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipBiteRInput = nAttr.create("mouthLowerLipBiteRInput", "mouthLowerLipBiteRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipBiteRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenULInput = nAttr.create("mouthLipsTightenULInput", "mouthLipsTightenULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTightenULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenURInput = nAttr.create("mouthLipsTightenURInput", "mouthLipsTightenURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTightenURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenDLInput = nAttr.create("mouthLipsTightenDLInput", "mouthLipsTightenDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTightenDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenDRInput = nAttr.create("mouthLipsTightenDRInput", "mouthLipsTightenDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsTightenDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPressLInput = nAttr.create("mouthLipsPressLInput", "mouthLipsPressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPressRInput = nAttr.create("mouthLipsPressRInput", "mouthLipsPressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthSharpCornerPullLInput = nAttr.create("mouthSharpCornerPullLInput", "mouthSharpCornerPullLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthSharpCornerPullLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthSharpCornerPullRInput = nAttr.create("mouthSharpCornerPullRInput", "mouthSharpCornerPullRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthSharpCornerPullRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUCInput = nAttr.create("mouthStickyUCInput", "mouthStickyUCIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyUCInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUINLInput = nAttr.create("mouthStickyUINLInput", "mouthStickyUINLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyUINLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUINRInput = nAttr.create("mouthStickyUINRInput", "mouthStickyUINRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyUINRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUOUTLInput = nAttr.create("mouthStickyUOUTLInput", "mouthStickyUOUTLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyUOUTLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUOUTRInput = nAttr.create("mouthStickyUOUTRInput", "mouthStickyUOUTRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyUOUTRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDCInput = nAttr.create("mouthStickyDCInput", "mouthStickyDCIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyDCInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDINLInput = nAttr.create("mouthStickyDINLInput", "mouthStickyDINLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyDINLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDINRInput = nAttr.create("mouthStickyDINRInput", "mouthStickyDINRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyDINRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDOUTLInput = nAttr.create("mouthStickyDOUTLInput", "mouthStickyDOUTLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyDOUTLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDOUTRInput = nAttr.create("mouthStickyDOUTRInput", "mouthStickyDOUTRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthStickyDOUTRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyLPh1Input = nAttr.create("mouthLipsStickyLPh1Input", "mouthLipsStickyLPh1In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsStickyLPh1Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyLPh2Input = nAttr.create("mouthLipsStickyLPh2Input", "mouthLipsStickyLPh2In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsStickyLPh2Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyLPh3Input = nAttr.create("mouthLipsStickyLPh3Input", "mouthLipsStickyLPh3In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsStickyLPh3Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyRPh1Input = nAttr.create("mouthLipsStickyRPh1Input", "mouthLipsStickyRPh1In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsStickyRPh1Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyRPh2Input = nAttr.create("mouthLipsStickyRPh2Input", "mouthLipsStickyRPh2In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsStickyRPh2Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyRPh3Input = nAttr.create("mouthLipsStickyRPh3Input", "mouthLipsStickyRPh3In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsStickyRPh3Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushULInput = nAttr.create("mouthLipsPushULInput", "mouthLipsPushULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPushULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushURInput = nAttr.create("mouthLipsPushURInput", "mouthLipsPushURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPushURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushDLInput = nAttr.create("mouthLipsPushDLInput", "mouthLipsPushDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPushDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushDRInput = nAttr.create("mouthLipsPushDRInput", "mouthLipsPushDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPushDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullULInput = nAttr.create("mouthLipsPullULInput", "mouthLipsPullULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPullULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullURInput = nAttr.create("mouthLipsPullURInput", "mouthLipsPullURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPullURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullDLInput = nAttr.create("mouthLipsPullDLInput", "mouthLipsPullDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPullDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullDRInput = nAttr.create("mouthLipsPullDRInput", "mouthLipsPullDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsPullDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinULInput = nAttr.create("mouthLipsThinULInput", "mouthLipsThinULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThinULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinURInput = nAttr.create("mouthLipsThinURInput", "mouthLipsThinURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThinURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinDLInput = nAttr.create("mouthLipsThinDLInput", "mouthLipsThinDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThinDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinDRInput = nAttr.create("mouthLipsThinDRInput", "mouthLipsThinDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThinDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickULInput = nAttr.create("mouthLipsThickULInput", "mouthLipsThickULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThickULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickURInput = nAttr.create("mouthLipsThickURInput", "mouthLipsThickURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThickURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickDLInput = nAttr.create("mouthLipsThickDLInput", "mouthLipsThickDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThickDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickDRInput = nAttr.create("mouthLipsThickDRInput", "mouthLipsThickDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLipsThickDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenULInput = nAttr.create("mouthCornerSharpenULInput", "mouthCornerSharpenULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerSharpenULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenURInput = nAttr.create("mouthCornerSharpenURInput", "mouthCornerSharpenURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerSharpenURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenDLInput = nAttr.create("mouthCornerSharpenDLInput", "mouthCornerSharpenDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerSharpenDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenDRInput = nAttr.create("mouthCornerSharpenDRInput", "mouthCornerSharpenDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerSharpenDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderULInput = nAttr.create("mouthCornerRounderULInput", "mouthCornerRounderULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerRounderULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderURInput = nAttr.create("mouthCornerRounderURInput", "mouthCornerRounderURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerRounderURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderDLInput = nAttr.create("mouthCornerRounderDLInput", "mouthCornerRounderDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerRounderDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderDRInput = nAttr.create("mouthCornerRounderDRInput", "mouthCornerRounderDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerRounderDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipTowardsTeethLInput = nAttr.create("mouthUpperLipTowardsTeethLInput", "mouthUpperLipTowardsTeethLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipTowardsTeethLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipTowardsTeethRInput = nAttr.create("mouthUpperLipTowardsTeethRInput", "mouthUpperLipTowardsTeethRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipTowardsTeethRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipTowardsTeethLInput = nAttr.create("mouthLowerLipTowardsTeethLInput", "mouthLowerLipTowardsTeethLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipTowardsTeethLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipTowardsTeethRInput = nAttr.create("mouthLowerLipTowardsTeethRInput", "mouthLowerLipTowardsTeethRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipTowardsTeethRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipShiftLeftInput = nAttr.create("mouthUpperLipShiftLeftInput", "mouthUpperLipShiftLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipShiftLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipShiftRightInput = nAttr.create("mouthUpperLipShiftRightInput", "mouthUpperLipShiftRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipShiftRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipShiftLeftInput = nAttr.create("mouthLowerLipShiftLeftInput", "mouthLowerLipShiftLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipShiftLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipShiftRightInput = nAttr.create("mouthLowerLipShiftRightInput", "mouthLowerLipShiftRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipShiftRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollInLInput = nAttr.create("mouthUpperLipRollInLInput", "mouthUpperLipRollInLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipRollInLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollInRInput = nAttr.create("mouthUpperLipRollInRInput", "mouthUpperLipRollInRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipRollInRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollOutLInput = nAttr.create("mouthUpperLipRollOutLInput", "mouthUpperLipRollOutLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipRollOutLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollOutRInput = nAttr.create("mouthUpperLipRollOutRInput", "mouthUpperLipRollOutRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthUpperLipRollOutRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollInLInput = nAttr.create("mouthLowerLipRollInLInput", "mouthLowerLipRollInLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipRollInLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollInRInput = nAttr.create("mouthLowerLipRollInRInput", "mouthLowerLipRollInRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipRollInRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollOutLInput = nAttr.create("mouthLowerLipRollOutLInput", "mouthLowerLipRollOutLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipRollOutLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollOutRInput = nAttr.create("mouthLowerLipRollOutRInput", "mouthLowerLipRollOutRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthLowerLipRollOutRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerUpLInput = nAttr.create("mouthCornerUpLInput", "mouthCornerUpLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerUpLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerUpRInput = nAttr.create("mouthCornerUpRInput", "mouthCornerUpRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerUpRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDownLInput = nAttr.create("mouthCornerDownLInput", "mouthCornerDownLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerDownLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDownRInput = nAttr.create("mouthCornerDownRInput", "mouthCornerDownRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerDownRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerWideLInput = nAttr.create("mouthCornerWideLInput", "mouthCornerWideLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerWideLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerWideRInput = nAttr.create("mouthCornerWideRInput", "mouthCornerWideRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerWideRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerNarrowLInput = nAttr.create("mouthCornerNarrowLInput", "mouthCornerNarrowLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerNarrowLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerNarrowRInput = nAttr.create("mouthCornerNarrowRInput", "mouthCornerNarrowRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(mouthCornerNarrowRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueUpInput = nAttr.create("tongueUpInput", "tongueUpIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueUpInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueDownInput = nAttr.create("tongueDownInput", "tongueDownIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueDownInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueLeftInput = nAttr.create("tongueLeftInput", "tongueLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRightInput = nAttr.create("tongueRightInput", "tongueRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueOutInput = nAttr.create("tongueOutInput", "tongueOutIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueOutInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueInInput = nAttr.create("tongueInInput", "tongueInIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueInInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollUpInput = nAttr.create("tongueRollUpInput", "tongueRollUpIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueRollUpInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollDownInput = nAttr.create("tongueRollDownInput", "tongueRollDownIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueRollDownInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollLeftInput = nAttr.create("tongueRollLeftInput", "tongueRollLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueRollLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollRightInput = nAttr.create("tongueRollRightInput", "tongueRollRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueRollRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipUpInput = nAttr.create("tongueTipUpInput", "tongueTipUpIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueTipUpInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipDownInput = nAttr.create("tongueTipDownInput", "tongueTipDownIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueTipDownInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipLeftInput = nAttr.create("tongueTipLeftInput", "tongueTipLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueTipLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipRightInput = nAttr.create("tongueTipRightInput", "tongueTipRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueTipRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueWideInput = nAttr.create("tongueWideInput", "tongueWideIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueWideInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueNarrowInput = nAttr.create("tongueNarrowInput", "tongueNarrowIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tongueNarrowInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tonguePressInput = nAttr.create("tonguePressInput", "tonguePressIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(tonguePressInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawOpenInput = nAttr.create("jawOpenInput", "jawOpenIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawOpenInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawLeftInput = nAttr.create("jawLeftInput", "jawLeftIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawLeftInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawRightInput = nAttr.create("jawRightInput", "jawRightIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawRightInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawFwdInput = nAttr.create("jawFwdInput", "jawFwdIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawFwdInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawBackInput = nAttr.create("jawBackInput", "jawBackIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawBackInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawClenchLInput = nAttr.create("jawClenchLInput", "jawClenchLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawClenchLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawClenchRInput = nAttr.create("jawClenchRInput", "jawClenchRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawClenchRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseDLInput = nAttr.create("jawChinRaiseDLInput", "jawChinRaiseDLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawChinRaiseDLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseDRInput = nAttr.create("jawChinRaiseDRInput", "jawChinRaiseDRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawChinRaiseDRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseULInput = nAttr.create("jawChinRaiseULInput", "jawChinRaiseULIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawChinRaiseULInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseURInput = nAttr.create("jawChinRaiseURInput", "jawChinRaiseURIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawChinRaiseURInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinCompressLInput = nAttr.create("jawChinCompressLInput", "jawChinCompressLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawChinCompressLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinCompressRInput = nAttr.create("jawChinCompressRInput", "jawChinCompressRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawChinCompressRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawOpenExtremeInput = nAttr.create("jawOpenExtremeInput", "jawOpenExtremeIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(jawOpenExtremeInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckStretchLInput = nAttr.create("neckStretchLInput", "neckStretchLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckStretchLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckStretchRInput = nAttr.create("neckStretchRInput", "neckStretchRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckStretchRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh1Input = nAttr.create("neckSwallowPh1Input", "neckSwallowPh1In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckSwallowPh1Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh2Input = nAttr.create("neckSwallowPh2Input", "neckSwallowPh2In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckSwallowPh2Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh3Input = nAttr.create("neckSwallowPh3Input", "neckSwallowPh3In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckSwallowPh3Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh4Input = nAttr.create("neckSwallowPh4Input", "neckSwallowPh4In", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckSwallowPh4Input);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckMastoidContractLInput = nAttr.create("neckMastoidContractLInput", "neckMastoidContractLIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckMastoidContractLInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckMastoidContractRInput = nAttr.create("neckMastoidContractRInput", "neckMastoidContractRIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckMastoidContractRInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatDownInput = nAttr.create("neckThroatDownInput", "neckThroatDownIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckThroatDownInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatUpInput = nAttr.create("neckThroatUpInput", "neckThroatUpIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckThroatUpInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckDigastricDownInput = nAttr.create("neckDigastricDownInput", "neckDigastricDownIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckDigastricDownInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckDigastricUpInput = nAttr.create("neckDigastricUpInput", "neckDigastricUpIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckDigastricUpInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatExhaleInput = nAttr.create("neckThroatExhaleInput", "neckThroatExhaleIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckThroatExhaleInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatInhaleInput = nAttr.create("neckThroatInhaleInput", "neckThroatInhaleIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(neckThroatInhaleInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethUpUInput = nAttr.create("teethUpUInput", "teethUpUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethUpUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethUpDInput = nAttr.create("teethUpDInput", "teethUpDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethUpDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethDownUInput = nAttr.create("teethDownUInput", "teethDownUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethDownUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethDownDInput = nAttr.create("teethDownDInput", "teethDownDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethDownDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethLeftUInput = nAttr.create("teethLeftUInput", "teethLeftUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethLeftUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethLeftDInput = nAttr.create("teethLeftDInput", "teethLeftDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethLeftDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethRightUInput = nAttr.create("teethRightUInput", "teethRightUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethRightUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethRightDInput = nAttr.create("teethRightDInput", "teethRightDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethRightDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethFwdUInput = nAttr.create("teethFwdUInput", "teethFwdUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethFwdUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethFwdDInput = nAttr.create("teethFwdDInput", "teethFwdDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethFwdDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethBackUInput = nAttr.create("teethBackUInput", "teethBackUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethBackUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethBackDInput = nAttr.create("teethBackDInput", "teethBackDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(teethBackDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnUpUInput = nAttr.create("headTurnUpUInput", "headTurnUpUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnUpUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnUpMInput = nAttr.create("headTurnUpMInput", "headTurnUpMIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnUpMInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnUpDInput = nAttr.create("headTurnUpDInput", "headTurnUpDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnUpDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnDownUInput = nAttr.create("headTurnDownUInput", "headTurnDownUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnDownUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnDownMInput = nAttr.create("headTurnDownMInput", "headTurnDownMIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnDownMInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnDownDInput = nAttr.create("headTurnDownDInput", "headTurnDownDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnDownDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnLeftUInput = nAttr.create("headTurnLeftUInput", "headTurnLeftUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnLeftUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnLeftMInput = nAttr.create("headTurnLeftMInput", "headTurnLeftMIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnLeftMInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnLeftDInput = nAttr.create("headTurnLeftDInput", "headTurnLeftDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnLeftDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnRightUInput = nAttr.create("headTurnRightUInput", "headTurnRightUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnRightUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnRightMInput = nAttr.create("headTurnRightMInput", "headTurnRightMIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnRightMInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnRightDInput = nAttr.create("headTurnRightDInput", "headTurnRightDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTurnRightDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltLeftUInput = nAttr.create("headTiltLeftUInput", "headTiltLeftUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTiltLeftUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltLeftMInput = nAttr.create("headTiltLeftMInput", "headTiltLeftMIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTiltLeftMInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltLeftDInput = nAttr.create("headTiltLeftDInput", "headTiltLeftDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTiltLeftDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltRightUInput = nAttr.create("headTiltRightUInput", "headTiltRightUIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTiltRightUInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltRightMInput = nAttr.create("headTiltRightMInput", "headTiltRightMIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTiltRightMInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltRightDInput = nAttr.create("headTiltRightDInput", "headTiltRightDIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(headTiltRightDInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		lookAtSwitchInput = nAttr.create("lookAtSwitchInput", "lookAtSwitchIn", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(true); nAttr.setReadable(false);
		stat = addAttribute(lookAtSwitchInput);
		if (!stat) { stat.perror("addAttribute"); return stat; }

		//////////////Output Attrs///////////////

		browDownLOutput = nAttr.create("browDownLOutput", "browDownLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browDownLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browDownROutput = nAttr.create("browDownROutput", "browDownROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browDownROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browLateralLOutput = nAttr.create("browLateralLOutput", "browLateralLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browLateralLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browLateralROutput = nAttr.create("browLateralROutput", "browLateralROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browLateralROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseInLOutput = nAttr.create("browRaiseInLOutput", "browRaiseInLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browRaiseInLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseInROutput = nAttr.create("browRaiseInROutput", "browRaiseInROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browRaiseInROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseOuterLOutput = nAttr.create("browRaiseOuterLOutput", "browRaiseOuterLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browRaiseOuterLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		browRaiseOuterROutput = nAttr.create("browRaiseOuterROutput", "browRaiseOuterROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(browRaiseOuterROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		earUpLOutput = nAttr.create("earUpLOutput", "earUpLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(earUpLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		earUpROutput = nAttr.create("earUpROutput", "earUpROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(earUpROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeBlinkLOutput = nAttr.create("eyeBlinkLOutput", "eyeBlinkLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeBlinkLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeBlinkROutput = nAttr.create("eyeBlinkROutput", "eyeBlinkROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeBlinkROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLidPressLOutput = nAttr.create("eyeLidPressLOutput", "eyeLidPressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLidPressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLidPressROutput = nAttr.create("eyeLidPressROutput", "eyeLidPressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLidPressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeWidenLOutput = nAttr.create("eyeWidenLOutput", "eyeWidenLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeWidenLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeWidenROutput = nAttr.create("eyeWidenROutput", "eyeWidenROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeWidenROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeSquintInnerLOutput = nAttr.create("eyeSquintInnerLOutput", "eyeSquintInnerLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeSquintInnerLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeSquintInnerROutput = nAttr.create("eyeSquintInnerROutput", "eyeSquintInnerROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeSquintInnerROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeCheekRaiseLOutput = nAttr.create("eyeCheekRaiseLOutput", "eyeCheekRaiseLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeCheekRaiseLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeCheekRaiseROutput = nAttr.create("eyeCheekRaiseROutput", "eyeCheekRaiseROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeCheekRaiseROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeFaceScrunchLOutput = nAttr.create("eyeFaceScrunchLOutput", "eyeFaceScrunchLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeFaceScrunchLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeFaceScrunchROutput = nAttr.create("eyeFaceScrunchROutput", "eyeFaceScrunchROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeFaceScrunchROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeUpperLidUpLOutput = nAttr.create("eyeUpperLidUpLOutput", "eyeUpperLidUpLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeUpperLidUpLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeUpperLidUpROutput = nAttr.create("eyeUpperLidUpROutput", "eyeUpperLidUpROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeUpperLidUpROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeRelaxLOutput = nAttr.create("eyeRelaxLOutput", "eyeRelaxLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeRelaxLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeRelaxROutput = nAttr.create("eyeRelaxROutput", "eyeRelaxROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeRelaxROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidUpLOutput = nAttr.create("eyeLowerLidUpLOutput", "eyeLowerLidUpLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLowerLidUpLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidUpROutput = nAttr.create("eyeLowerLidUpROutput", "eyeLowerLidUpROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLowerLidUpROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidDownLOutput = nAttr.create("eyeLowerLidDownLOutput", "eyeLowerLidDownLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLowerLidDownLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLowerLidDownROutput = nAttr.create("eyeLowerLidDownROutput", "eyeLowerLidDownROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLowerLidDownROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookUpLOutput = nAttr.create("eyeLookUpLOutput", "eyeLookUpLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookUpLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookUpROutput = nAttr.create("eyeLookUpROutput", "eyeLookUpROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookUpROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookDownLOutput = nAttr.create("eyeLookDownLOutput", "eyeLookDownLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookDownLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookDownROutput = nAttr.create("eyeLookDownROutput", "eyeLookDownROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookDownROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookLeftLOutput = nAttr.create("eyeLookLeftLOutput", "eyeLookLeftLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookLeftLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookLeftROutput = nAttr.create("eyeLookLeftROutput", "eyeLookLeftROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookLeftROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookRightLOutput = nAttr.create("eyeLookRightLOutput", "eyeLookRightLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookRightLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeLookRightROutput = nAttr.create("eyeLookRightROutput", "eyeLookRightROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeLookRightROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilWideLOutput = nAttr.create("eyePupilWideLOutput", "eyePupilWideLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyePupilWideLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilWideROutput = nAttr.create("eyePupilWideROutput", "eyePupilWideROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyePupilWideROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilNarrowLOutput = nAttr.create("eyePupilNarrowLOutput", "eyePupilNarrowLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyePupilNarrowLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyePupilNarrowROutput = nAttr.create("eyePupilNarrowROutput", "eyePupilNarrowROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyePupilNarrowROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyeParallelLookDirectionOutput = nAttr.create("eyeParallelLookDirectionOutput", "eyeParallelLookDirectionOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyeParallelLookDirectionOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpINLOutput = nAttr.create("eyelashesUpINLOutput", "eyelashesUpINLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesUpINLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpINROutput = nAttr.create("eyelashesUpINROutput", "eyelashesUpINROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesUpINROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpOUTLOutput = nAttr.create("eyelashesUpOUTLOutput", "eyelashesUpOUTLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesUpOUTLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesUpOUTROutput = nAttr.create("eyelashesUpOUTROutput", "eyelashesUpOUTROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesUpOUTROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownINLOutput = nAttr.create("eyelashesDownINLOutput", "eyelashesDownINLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesDownINLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownINROutput = nAttr.create("eyelashesDownINROutput", "eyelashesDownINROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesDownINROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownOUTLOutput = nAttr.create("eyelashesDownOUTLOutput", "eyelashesDownOUTLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesDownOUTLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		eyelashesDownOUTROutput = nAttr.create("eyelashesDownOUTROutput", "eyelashesDownOUTROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(eyelashesDownOUTROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleLOutput = nAttr.create("noseWrinkleLOutput", "noseWrinkleLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseWrinkleLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleROutput = nAttr.create("noseWrinkleROutput", "noseWrinkleROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseWrinkleROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleUpperLOutput = nAttr.create("noseWrinkleUpperLOutput", "noseWrinkleUpperLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseWrinkleUpperLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseWrinkleUpperROutput = nAttr.create("noseWrinkleUpperROutput", "noseWrinkleUpperROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseWrinkleUpperROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDepressLOutput = nAttr.create("noseNostrilDepressLOutput", "noseNostrilDepressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNostrilDepressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDepressROutput = nAttr.create("noseNostrilDepressROutput", "noseNostrilDepressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNostrilDepressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDilateLOutput = nAttr.create("noseNostrilDilateLOutput", "noseNostrilDilateLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNostrilDilateLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilDilateROutput = nAttr.create("noseNostrilDilateROutput", "noseNostrilDilateROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNostrilDilateROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilCompressLOutput = nAttr.create("noseNostrilCompressLOutput", "noseNostrilCompressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNostrilCompressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNostrilCompressROutput = nAttr.create("noseNostrilCompressROutput", "noseNostrilCompressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNostrilCompressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNasolabialDeepenLOutput = nAttr.create("noseNasolabialDeepenLOutput", "noseNasolabialDeepenLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNasolabialDeepenLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		noseNasolabialDeepenROutput = nAttr.create("noseNasolabialDeepenROutput", "noseNasolabialDeepenROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(noseNasolabialDeepenROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekSuckLOutput = nAttr.create("mouthCheekSuckLOutput", "mouthCheekSuckLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCheekSuckLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekSuckROutput = nAttr.create("mouthCheekSuckROutput", "mouthCheekSuckROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCheekSuckROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekBlowLOutput = nAttr.create("mouthCheekBlowLOutput", "mouthCheekBlowLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCheekBlowLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCheekBlowROutput = nAttr.create("mouthCheekBlowROutput", "mouthCheekBlowROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCheekBlowROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsBlowLOutput = nAttr.create("mouthLipsBlowLOutput", "mouthLipsBlowLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsBlowLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsBlowROutput = nAttr.create("mouthLipsBlowROutput", "mouthLipsBlowROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsBlowROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLeftOutput = nAttr.create("mouthLeftOutput", "mouthLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthRightOutput = nAttr.create("mouthRightOutput", "mouthRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpOutput = nAttr.create("mouthUpOutput", "mouthUpOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthDownOutput = nAttr.create("mouthDownOutput", "mouthDownOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthDownOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRaiseLOutput = nAttr.create("mouthUpperLipRaiseLOutput", "mouthUpperLipRaiseLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipRaiseLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRaiseROutput = nAttr.create("mouthUpperLipRaiseROutput", "mouthUpperLipRaiseROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipRaiseROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipDepressLOutput = nAttr.create("mouthLowerLipDepressLOutput", "mouthLowerLipDepressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipDepressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipDepressROutput = nAttr.create("mouthLowerLipDepressROutput", "mouthLowerLipDepressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipDepressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerPullLOutput = nAttr.create("mouthCornerPullLOutput", "mouthCornerPullLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerPullLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerPullROutput = nAttr.create("mouthCornerPullROutput", "mouthCornerPullROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerPullROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchLOutput = nAttr.create("mouthStretchLOutput", "mouthStretchLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStretchLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchROutput = nAttr.create("mouthStretchROutput", "mouthStretchROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStretchROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchLipsCloseLOutput = nAttr.create("mouthStretchLipsCloseLOutput", "mouthStretchLipsCloseLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStretchLipsCloseLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStretchLipsCloseROutput = nAttr.create("mouthStretchLipsCloseROutput", "mouthStretchLipsCloseROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStretchLipsCloseROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthDimpleLOutput = nAttr.create("mouthDimpleLOutput", "mouthDimpleLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthDimpleLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthDimpleROutput = nAttr.create("mouthDimpleROutput", "mouthDimpleROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthDimpleROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDepressLOutput = nAttr.create("mouthCornerDepressLOutput", "mouthCornerDepressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerDepressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDepressROutput = nAttr.create("mouthCornerDepressROutput", "mouthCornerDepressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerDepressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressULOutput = nAttr.create("mouthPressULOutput", "mouthPressULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthPressULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressUROutput = nAttr.create("mouthPressUROutput", "mouthPressUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthPressUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressDLOutput = nAttr.create("mouthPressDLOutput", "mouthPressDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthPressDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthPressDROutput = nAttr.create("mouthPressDROutput", "mouthPressDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthPressDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseULOutput = nAttr.create("mouthLipsPurseULOutput", "mouthLipsPurseULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPurseULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseUROutput = nAttr.create("mouthLipsPurseUROutput", "mouthLipsPurseUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPurseUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseDLOutput = nAttr.create("mouthLipsPurseDLOutput", "mouthLipsPurseDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPurseDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPurseDROutput = nAttr.create("mouthLipsPurseDROutput", "mouthLipsPurseDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPurseDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsULOutput = nAttr.create("mouthLipsTowardsULOutput", "mouthLipsTowardsULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTowardsULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsUROutput = nAttr.create("mouthLipsTowardsUROutput", "mouthLipsTowardsUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTowardsUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsDLOutput = nAttr.create("mouthLipsTowardsDLOutput", "mouthLipsTowardsDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTowardsDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTowardsDROutput = nAttr.create("mouthLipsTowardsDROutput", "mouthLipsTowardsDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTowardsDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelULOutput = nAttr.create("mouthFunnelULOutput", "mouthFunnelULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthFunnelULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelUROutput = nAttr.create("mouthFunnelUROutput", "mouthFunnelUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthFunnelUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelDLOutput = nAttr.create("mouthFunnelDLOutput", "mouthFunnelDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthFunnelDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthFunnelDROutput = nAttr.create("mouthFunnelDROutput", "mouthFunnelDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthFunnelDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherULOutput = nAttr.create("mouthLipsTogetherULOutput", "mouthLipsTogetherULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTogetherULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherUROutput = nAttr.create("mouthLipsTogetherUROutput", "mouthLipsTogetherUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTogetherUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherDLOutput = nAttr.create("mouthLipsTogetherDLOutput", "mouthLipsTogetherDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTogetherDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTogetherDROutput = nAttr.create("mouthLipsTogetherDROutput", "mouthLipsTogetherDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTogetherDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipBiteLOutput = nAttr.create("mouthUpperLipBiteLOutput", "mouthUpperLipBiteLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipBiteLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipBiteROutput = nAttr.create("mouthUpperLipBiteROutput", "mouthUpperLipBiteROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipBiteROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipBiteLOutput = nAttr.create("mouthLowerLipBiteLOutput", "mouthLowerLipBiteLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipBiteLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipBiteROutput = nAttr.create("mouthLowerLipBiteROutput", "mouthLowerLipBiteROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipBiteROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenULOutput = nAttr.create("mouthLipsTightenULOutput", "mouthLipsTightenULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTightenULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenUROutput = nAttr.create("mouthLipsTightenUROutput", "mouthLipsTightenUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTightenUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenDLOutput = nAttr.create("mouthLipsTightenDLOutput", "mouthLipsTightenDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTightenDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsTightenDROutput = nAttr.create("mouthLipsTightenDROutput", "mouthLipsTightenDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsTightenDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPressLOutput = nAttr.create("mouthLipsPressLOutput", "mouthLipsPressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPressROutput = nAttr.create("mouthLipsPressROutput", "mouthLipsPressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthSharpCornerPullLOutput = nAttr.create("mouthSharpCornerPullLOutput", "mouthSharpCornerPullLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthSharpCornerPullLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthSharpCornerPullROutput = nAttr.create("mouthSharpCornerPullROutput", "mouthSharpCornerPullROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthSharpCornerPullROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUCOutput = nAttr.create("mouthStickyUCOutput", "mouthStickyUCOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyUCOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUINLOutput = nAttr.create("mouthStickyUINLOutput", "mouthStickyUINLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyUINLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUINROutput = nAttr.create("mouthStickyUINROutput", "mouthStickyUINROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyUINROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUOUTLOutput = nAttr.create("mouthStickyUOUTLOutput", "mouthStickyUOUTLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyUOUTLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyUOUTROutput = nAttr.create("mouthStickyUOUTROutput", "mouthStickyUOUTROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyUOUTROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDCOutput = nAttr.create("mouthStickyDCOutput", "mouthStickyDCOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyDCOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDINLOutput = nAttr.create("mouthStickyDINLOutput", "mouthStickyDINLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyDINLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDINROutput = nAttr.create("mouthStickyDINROutput", "mouthStickyDINROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyDINROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDOUTLOutput = nAttr.create("mouthStickyDOUTLOutput", "mouthStickyDOUTLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyDOUTLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthStickyDOUTROutput = nAttr.create("mouthStickyDOUTROutput", "mouthStickyDOUTROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthStickyDOUTROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyLPh1Output = nAttr.create("mouthLipsStickyLPh1Output", "mouthLipsStickyLPh1Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsStickyLPh1Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyLPh2Output = nAttr.create("mouthLipsStickyLPh2Output", "mouthLipsStickyLPh2Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsStickyLPh2Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyLPh3Output = nAttr.create("mouthLipsStickyLPh3Output", "mouthLipsStickyLPh3Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsStickyLPh3Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyRPh1Output = nAttr.create("mouthLipsStickyRPh1Output", "mouthLipsStickyRPh1Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsStickyRPh1Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyRPh2Output = nAttr.create("mouthLipsStickyRPh2Output", "mouthLipsStickyRPh2Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsStickyRPh2Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsStickyRPh3Output = nAttr.create("mouthLipsStickyRPh3Output", "mouthLipsStickyRPh3Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsStickyRPh3Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushULOutput = nAttr.create("mouthLipsPushULOutput", "mouthLipsPushULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPushULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushUROutput = nAttr.create("mouthLipsPushUROutput", "mouthLipsPushUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPushUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushDLOutput = nAttr.create("mouthLipsPushDLOutput", "mouthLipsPushDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPushDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPushDROutput = nAttr.create("mouthLipsPushDROutput", "mouthLipsPushDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPushDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullULOutput = nAttr.create("mouthLipsPullULOutput", "mouthLipsPullULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPullULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullUROutput = nAttr.create("mouthLipsPullUROutput", "mouthLipsPullUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPullUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullDLOutput = nAttr.create("mouthLipsPullDLOutput", "mouthLipsPullDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPullDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsPullDROutput = nAttr.create("mouthLipsPullDROutput", "mouthLipsPullDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsPullDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinULOutput = nAttr.create("mouthLipsThinULOutput", "mouthLipsThinULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThinULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinUROutput = nAttr.create("mouthLipsThinUROutput", "mouthLipsThinUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThinUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinDLOutput = nAttr.create("mouthLipsThinDLOutput", "mouthLipsThinDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThinDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThinDROutput = nAttr.create("mouthLipsThinDROutput", "mouthLipsThinDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThinDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickULOutput = nAttr.create("mouthLipsThickULOutput", "mouthLipsThickULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThickULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickUROutput = nAttr.create("mouthLipsThickUROutput", "mouthLipsThickUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThickUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickDLOutput = nAttr.create("mouthLipsThickDLOutput", "mouthLipsThickDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThickDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLipsThickDROutput = nAttr.create("mouthLipsThickDROutput", "mouthLipsThickDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLipsThickDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenULOutput = nAttr.create("mouthCornerSharpenULOutput", "mouthCornerSharpenULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerSharpenULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenUROutput = nAttr.create("mouthCornerSharpenUROutput", "mouthCornerSharpenUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerSharpenUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenDLOutput = nAttr.create("mouthCornerSharpenDLOutput", "mouthCornerSharpenDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerSharpenDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerSharpenDROutput = nAttr.create("mouthCornerSharpenDROutput", "mouthCornerSharpenDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerSharpenDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderULOutput = nAttr.create("mouthCornerRounderULOutput", "mouthCornerRounderULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerRounderULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderUROutput = nAttr.create("mouthCornerRounderUROutput", "mouthCornerRounderUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerRounderUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderDLOutput = nAttr.create("mouthCornerRounderDLOutput", "mouthCornerRounderDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerRounderDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerRounderDROutput = nAttr.create("mouthCornerRounderDROutput", "mouthCornerRounderDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerRounderDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipTowardsTeethLOutput = nAttr.create("mouthUpperLipTowardsTeethLOutput", "mouthUpperLipTowardsTeethLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipTowardsTeethLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipTowardsTeethROutput = nAttr.create("mouthUpperLipTowardsTeethROutput", "mouthUpperLipTowardsTeethROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipTowardsTeethROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipTowardsTeethLOutput = nAttr.create("mouthLowerLipTowardsTeethLOutput", "mouthLowerLipTowardsTeethLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipTowardsTeethLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipTowardsTeethROutput = nAttr.create("mouthLowerLipTowardsTeethROutput", "mouthLowerLipTowardsTeethROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipTowardsTeethROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipShiftLeftOutput = nAttr.create("mouthUpperLipShiftLeftOutput", "mouthUpperLipShiftLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipShiftLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipShiftRightOutput = nAttr.create("mouthUpperLipShiftRightOutput", "mouthUpperLipShiftRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipShiftRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipShiftLeftOutput = nAttr.create("mouthLowerLipShiftLeftOutput", "mouthLowerLipShiftLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipShiftLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipShiftRightOutput = nAttr.create("mouthLowerLipShiftRightOutput", "mouthLowerLipShiftRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipShiftRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollInLOutput = nAttr.create("mouthUpperLipRollInLOutput", "mouthUpperLipRollInLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipRollInLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollInROutput = nAttr.create("mouthUpperLipRollInROutput", "mouthUpperLipRollInROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipRollInROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollOutLOutput = nAttr.create("mouthUpperLipRollOutLOutput", "mouthUpperLipRollOutLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipRollOutLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthUpperLipRollOutROutput = nAttr.create("mouthUpperLipRollOutROutput", "mouthUpperLipRollOutROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthUpperLipRollOutROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollInLOutput = nAttr.create("mouthLowerLipRollInLOutput", "mouthLowerLipRollInLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipRollInLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollInROutput = nAttr.create("mouthLowerLipRollInROutput", "mouthLowerLipRollInROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipRollInROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollOutLOutput = nAttr.create("mouthLowerLipRollOutLOutput", "mouthLowerLipRollOutLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipRollOutLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthLowerLipRollOutROutput = nAttr.create("mouthLowerLipRollOutROutput", "mouthLowerLipRollOutROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthLowerLipRollOutROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerUpLOutput = nAttr.create("mouthCornerUpLOutput", "mouthCornerUpLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerUpLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerUpROutput = nAttr.create("mouthCornerUpROutput", "mouthCornerUpROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerUpROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDownLOutput = nAttr.create("mouthCornerDownLOutput", "mouthCornerDownLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerDownLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerDownROutput = nAttr.create("mouthCornerDownROutput", "mouthCornerDownROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerDownROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerWideLOutput = nAttr.create("mouthCornerWideLOutput", "mouthCornerWideLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerWideLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerWideROutput = nAttr.create("mouthCornerWideROutput", "mouthCornerWideROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerWideROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerNarrowLOutput = nAttr.create("mouthCornerNarrowLOutput", "mouthCornerNarrowLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerNarrowLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		mouthCornerNarrowROutput = nAttr.create("mouthCornerNarrowROutput", "mouthCornerNarrowROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(mouthCornerNarrowROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueUpOutput = nAttr.create("tongueUpOutput", "tongueUpOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueUpOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueDownOutput = nAttr.create("tongueDownOutput", "tongueDownOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueDownOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueLeftOutput = nAttr.create("tongueLeftOutput", "tongueLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRightOutput = nAttr.create("tongueRightOutput", "tongueRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueOutOutput = nAttr.create("tongueOutOutput", "tongueOutOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueOutOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueInOutput = nAttr.create("tongueInOutput", "tongueInOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueInOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollUpOutput = nAttr.create("tongueRollUpOutput", "tongueRollUpOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueRollUpOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollDownOutput = nAttr.create("tongueRollDownOutput", "tongueRollDownOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueRollDownOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollLeftOutput = nAttr.create("tongueRollLeftOutput", "tongueRollLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueRollLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueRollRightOutput = nAttr.create("tongueRollRightOutput", "tongueRollRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueRollRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipUpOutput = nAttr.create("tongueTipUpOutput", "tongueTipUpOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueTipUpOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipDownOutput = nAttr.create("tongueTipDownOutput", "tongueTipDownOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueTipDownOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipLeftOutput = nAttr.create("tongueTipLeftOutput", "tongueTipLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueTipLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueTipRightOutput = nAttr.create("tongueTipRightOutput", "tongueTipRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueTipRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueWideOutput = nAttr.create("tongueWideOutput", "tongueWideOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueWideOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tongueNarrowOutput = nAttr.create("tongueNarrowOutput", "tongueNarrowOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tongueNarrowOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		tonguePressOutput = nAttr.create("tonguePressOutput", "tonguePressOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(tonguePressOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawOpenOutput = nAttr.create("jawOpenOutput", "jawOpenOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawOpenOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawLeftOutput = nAttr.create("jawLeftOutput", "jawLeftOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawLeftOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawRightOutput = nAttr.create("jawRightOutput", "jawRightOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawRightOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawFwdOutput = nAttr.create("jawFwdOutput", "jawFwdOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawFwdOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawBackOutput = nAttr.create("jawBackOutput", "jawBackOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawBackOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawClenchLOutput = nAttr.create("jawClenchLOutput", "jawClenchLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawClenchLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawClenchROutput = nAttr.create("jawClenchROutput", "jawClenchROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawClenchROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseDLOutput = nAttr.create("jawChinRaiseDLOutput", "jawChinRaiseDLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawChinRaiseDLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseDROutput = nAttr.create("jawChinRaiseDROutput", "jawChinRaiseDROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawChinRaiseDROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseULOutput = nAttr.create("jawChinRaiseULOutput", "jawChinRaiseULOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawChinRaiseULOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinRaiseUROutput = nAttr.create("jawChinRaiseUROutput", "jawChinRaiseUROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawChinRaiseUROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinCompressLOutput = nAttr.create("jawChinCompressLOutput", "jawChinCompressLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawChinCompressLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawChinCompressROutput = nAttr.create("jawChinCompressROutput", "jawChinCompressROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawChinCompressROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		jawOpenExtremeOutput = nAttr.create("jawOpenExtremeOutput", "jawOpenExtremeOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(jawOpenExtremeOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckStretchLOutput = nAttr.create("neckStretchLOutput", "neckStretchLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckStretchLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckStretchROutput = nAttr.create("neckStretchROutput", "neckStretchROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckStretchROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh1Output = nAttr.create("neckSwallowPh1Output", "neckSwallowPh1Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckSwallowPh1Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh2Output = nAttr.create("neckSwallowPh2Output", "neckSwallowPh2Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckSwallowPh2Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh3Output = nAttr.create("neckSwallowPh3Output", "neckSwallowPh3Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckSwallowPh3Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckSwallowPh4Output = nAttr.create("neckSwallowPh4Output", "neckSwallowPh4Out", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckSwallowPh4Output);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckMastoidContractLOutput = nAttr.create("neckMastoidContractLOutput", "neckMastoidContractLOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckMastoidContractLOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckMastoidContractROutput = nAttr.create("neckMastoidContractROutput", "neckMastoidContractROut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckMastoidContractROutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatDownOutput = nAttr.create("neckThroatDownOutput", "neckThroatDownOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckThroatDownOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatUpOutput = nAttr.create("neckThroatUpOutput", "neckThroatUpOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckThroatUpOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckDigastricDownOutput = nAttr.create("neckDigastricDownOutput", "neckDigastricDownOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckDigastricDownOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckDigastricUpOutput = nAttr.create("neckDigastricUpOutput", "neckDigastricUpOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckDigastricUpOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatExhaleOutput = nAttr.create("neckThroatExhaleOutput", "neckThroatExhaleOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckThroatExhaleOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		neckThroatInhaleOutput = nAttr.create("neckThroatInhaleOutput", "neckThroatInhaleOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(neckThroatInhaleOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethUpUOutput = nAttr.create("teethUpUOutput", "teethUpUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethUpUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethUpDOutput = nAttr.create("teethUpDOutput", "teethUpDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethUpDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethDownUOutput = nAttr.create("teethDownUOutput", "teethDownUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethDownUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethDownDOutput = nAttr.create("teethDownDOutput", "teethDownDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethDownDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethLeftUOutput = nAttr.create("teethLeftUOutput", "teethLeftUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethLeftUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethLeftDOutput = nAttr.create("teethLeftDOutput", "teethLeftDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethLeftDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethRightUOutput = nAttr.create("teethRightUOutput", "teethRightUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethRightUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethRightDOutput = nAttr.create("teethRightDOutput", "teethRightDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethRightDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethFwdUOutput = nAttr.create("teethFwdUOutput", "teethFwdUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethFwdUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethFwdDOutput = nAttr.create("teethFwdDOutput", "teethFwdDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethFwdDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethBackUOutput = nAttr.create("teethBackUOutput", "teethBackUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethBackUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		teethBackDOutput = nAttr.create("teethBackDOutput", "teethBackDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(teethBackDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnUpUOutput = nAttr.create("headTurnUpUOutput", "headTurnUpUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnUpUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnUpMOutput = nAttr.create("headTurnUpMOutput", "headTurnUpMOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnUpMOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnUpDOutput = nAttr.create("headTurnUpDOutput", "headTurnUpDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnUpDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnDownUOutput = nAttr.create("headTurnDownUOutput", "headTurnDownUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnDownUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnDownMOutput = nAttr.create("headTurnDownMOutput", "headTurnDownMOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnDownMOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnDownDOutput = nAttr.create("headTurnDownDOutput", "headTurnDownDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnDownDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnLeftUOutput = nAttr.create("headTurnLeftUOutput", "headTurnLeftUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnLeftUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnLeftMOutput = nAttr.create("headTurnLeftMOutput", "headTurnLeftMOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnLeftMOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnLeftDOutput = nAttr.create("headTurnLeftDOutput", "headTurnLeftDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnLeftDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnRightUOutput = nAttr.create("headTurnRightUOutput", "headTurnRightUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnRightUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnRightMOutput = nAttr.create("headTurnRightMOutput", "headTurnRightMOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnRightMOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTurnRightDOutput = nAttr.create("headTurnRightDOutput", "headTurnRightDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTurnRightDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltLeftUOutput = nAttr.create("headTiltLeftUOutput", "headTiltLeftUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTiltLeftUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltLeftMOutput = nAttr.create("headTiltLeftMOutput", "headTiltLeftMOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTiltLeftMOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltLeftDOutput = nAttr.create("headTiltLeftDOutput", "headTiltLeftDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTiltLeftDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltRightUOutput = nAttr.create("headTiltRightUOutput", "headTiltRightUOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTiltRightUOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltRightMOutput = nAttr.create("headTiltRightMOutput", "headTiltRightMOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTiltRightMOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		headTiltRightDOutput = nAttr.create("headTiltRightDOutput", "headTiltRightDOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(headTiltRightDOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
		lookAtSwitchOutput = nAttr.create("lookAtSwitchOutput", "lookAtSwitchOut", MFnNumericData::kDouble, 0.0);
		nAttr.setKeyable(false); nAttr.setReadable(true);
		stat = addAttribute(lookAtSwitchOutput);
		if (!stat) { stat.perror("addAttribute"); return stat; }
	}
	//////////////extr_out/////////////////////////////////////////////////////////////////////////////////
	InitialAndAddAttrForExtrOut(brow_raise_L, "brow_raise_L_out", "brow_raise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(brow_raise_R, "brow_raise_R_out", "brow_raise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Bdown_Blateral__browLower_L, "Bdown_Blateral__browLower_L_out", "Bdown_Blateral__browLower_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Bdown_Blateral__browLower_R, "Bdown_Blateral__browLower_R_out", "Bdown_Blateral__browLower_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(BraiseIn_Bdown__browInnerRaise_L, "BraiseIn_Bdown__browInnerRaise_L_out", "BraiseIn_Bdown__browInnerRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(BraiseIn_Bdown__browInnerRaise_R, "BraiseIn_Bdown__browInnerRaise_R_out", "BraiseIn_Bdown__browInnerRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookLeft_L, "ElookUp_ElookLeft_L_out", "ElookUp_ElookLeft_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookLeft_R, "ElookUp_ElookLeft_R_out", "ElookUp_ElookLeft_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookLeft_L, "ElookDown_ElookLeft_L_out", "ElookDown_ElookLeft_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookLeft_R, "ElookDown_ElookLeft_R_out", "ElookDown_ElookLeft_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookRight_L, "ElookUp_ElookRight_L_out", "ElookUp_ElookRight_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookRight_R, "ElookUp_ElookRight_R_out", "ElookUp_ElookRight_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookRight_L, "ElookDown_ElookRight_L_out", "ElookDown_ElookRight_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookRight_R, "ElookDown_ElookRight_R_out", "ElookDown_ElookRight_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(EsquintInner_Eblink_L, "EsquintInner_Eblink_L_out", "EsquintInner_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(EsquintInner_Eblink_R, "EsquintInner_Eblink_R_out", "EsquintInner_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_Eblink_L, "EcheekRaise_Eblink_L_out", "EcheekRaise_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_Eblink_R, "EcheekRaise_Eblink_R_out", "EcheekRaise_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_EsquintInner_L, "EcheekRaise_EsquintInner_L_out", "EcheekRaise_EsquintInner_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_EsquintInner_R, "EcheekRaise_EsquintInner_R_out", "EcheekRaise_EsquintInner_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookLeft_Eblink_L, "ElookLeft_Eblink_L_out", "ElookLeft_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookLeft_Eblink_R, "ElookLeft_Eblink_R_out", "ElookLeft_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_Eblink_L, "ElookUp_Eblink_L_out", "ElookUp_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_Eblink_R, "ElookUp_Eblink_R_out", "ElookUp_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_Eblink_L, "ElookDown_Eblink_L_out", "ElookDown_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_Eblink_R, "ElookDown_Eblink_R_out", "ElookDown_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookRight_Eblink_L, "ElookRight_Eblink_L_out", "ElookRight_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookRight_Eblink_R, "ElookRight_Eblink_R_out", "ElookRight_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(nose_wrinkle_cor, "nose_wrinkle_cor_out", "nose_wrinkle_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_NSwrinkle_L, "EcheekRaise_NSwrinkle_L_out", "EcheekRaise_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_NSwrinkle_R, "EcheekRaise_NSwrinkle_R_out", "EcheekRaise_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_dimple_cor, "mouth_dimple_cor_out", "mouth_dimple_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_cornerPull_cor, "mouth_cornerPull_cor_out", "mouth_cornerPull_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_upperLipRaise_cor, "mouth_upperLipRaise_cor_out", "mouth_upperLipRaise_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_stretch_cor, "mouth_stretch_cor_out", "mouth_stretch_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_lowerLipDepress_cor, "mouth_lowerLipDepress_cor_out", "mouth_lowerLipDepress_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mdimple_L, "McornerPull_Mdimple_L_out", "McornerPull_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mdimple_R, "McornerPull_Mdimple_R_out", "McornerPull_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_MupperLipRaise_L, "Mdimple_MupperLipRaise_L_out", "Mdimple_MupperLipRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_MupperLipRaise_R, "Mdimple_MupperLipRaise_R_out", "Mdimple_MupperLipRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mdimple_L, "Mstretch_Mdimple_L_out", "Mstretch_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mdimple_R, "Mstretch_Mdimple_R_out", "Mstretch_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_MlowerLipDepress_L, "Mdimple_MlowerLipDepress_L_out", "Mdimple_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_MlowerLipDepress_R, "Mdimple_MlowerLipDepress_R_out", "Mdimple_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MsharpCornerPull_L, "McornerPull_MsharpCornerPull_L_out", "McornerPull_MsharpCornerPull_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MsharpCornerPull_R, "McornerPull_MsharpCornerPull_R_out", "McornerPull_MsharpCornerPull_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_L, "McornerPull_MupperLipRaise_L_out", "McornerPull_MupperLipRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_R, "McornerPull_MupperLipRaise_R_out", "McornerPull_MupperLipRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_L, "McornerPull_Mstretch_L_out", "McornerPull_Mstretch_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_R, "McornerPull_Mstretch_R_out", "McornerPull_Mstretch_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_L, "McornerPull_MlowerLipDepress_L_out", "McornerPull_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_R, "McornerPull_MlowerLipDepress_R_out", "McornerPull_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_McornerDepress_L, "MupperLipRaise_McornerDepress_L_out", "MupperLipRaise_McornerDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_McornerDepress_R, "MupperLipRaise_McornerDepress_R_out", "MupperLipRaise_McornerDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_L, "Mstretch_MupperLipRaise_L_out", "Mstretch_MupperLipRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_R, "Mstretch_MupperLipRaise_R_out", "Mstretch_MupperLipRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_L, "MupperLipRaise_MlowerLipDepress_L_out", "MupperLipRaise_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_R, "MupperLipRaise_MlowerLipDepress_R_out", "MupperLipRaise_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_L, "Mstretch_MlowerLipDepress_L_out", "Mstretch_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_R, "Mstretch_MlowerLipDepress_R_out", "Mstretch_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Jopen_L, "Mdimple_Jopen_L_out", "Mdimple_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Jopen_R, "Mdimple_Jopen_R_out", "Mdimple_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Jopen_L, "McornerPull_Jopen_L_out", "McornerPull_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Jopen_R, "McornerPull_Jopen_R_out", "McornerPull_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerDepress_Jopen_L, "McornerDepress_Jopen_L_out", "McornerDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerDepress_Jopen_R, "McornerDepress_Jopen_R_out", "McornerDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Jopen_L, "Mstretch_Jopen_L_out", "Mstretch_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Jopen_R, "Mstretch_Jopen_R_out", "Mstretch_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_Jopen_L, "MlowerLipDepress_Jopen_L_out", "MlowerLipDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_Jopen_R, "MlowerLipDepress_Jopen_R_out", "MlowerLipDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MsharpCornerPull_Jopen_L, "MsharpCornerPull_Jopen_L_out", "MsharpCornerPull_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MsharpCornerPull_Jopen_R, "MsharpCornerPull_Jopen_R_out", "MsharpCornerPull_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_Jopen_L, "MupperLipRaise_Jopen_L_out", "MupperLipRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_Jopen_R, "MupperLipRaise_Jopen_R_out", "MupperLipRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_Jopen_cor, "Jleft_Jopen_cor_out", "Jleft_Jopen_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_Jopen_cor, "Jright_Jopen_cor_out", "Jright_Jopen_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards__pucker_UL, "Mpurse_Mtowards__pucker_UL_out", "Mpurse_Mtowards__pucker_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards__pucker_UR, "Mpurse_Mtowards__pucker_UR_out", "Mpurse_Mtowards__pucker_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards__pucker_DL, "Mpurse_Mtowards__pucker_DL_out", "Mpurse_Mtowards__pucker_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards__pucker_DR, "Mpurse_Mtowards__pucker_DR_out", "Mpurse_Mtowards__pucker_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_UL, "Mpurse_Mfunnel_UL_out", "Mpurse_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_UR, "Mpurse_Mfunnel_UR_out", "Mpurse_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_DL, "Mpurse_Mfunnel_DL_out", "Mpurse_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_DR, "Mpurse_Mfunnel_DR_out", "Mpurse_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_UL, "Mfunnel_Mtowards_UL_out", "Mfunnel_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_UR, "Mfunnel_Mtowards_UR_out", "Mfunnel_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_DL, "Mfunnel_Mtowards_DL_out", "Mfunnel_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_DR, "Mfunnel_Mtowards_DR_out", "Mfunnel_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel__oh_UL, "Mpurse_Mtowards_Mfunnel__oh_UL_out", "Mpurse_Mtowards_Mfunnel__oh_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel__oh_UR, "Mpurse_Mtowards_Mfunnel__oh_UR_out", "Mpurse_Mtowards_Mfunnel__oh_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel__oh_DL, "Mpurse_Mtowards_Mfunnel__oh_DL_out", "Mpurse_Mtowards_Mfunnel__oh_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel__oh_DR, "Mpurse_Mtowards_Mfunnel__oh_DR_out", "Mpurse_Mtowards_Mfunnel__oh_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Jopen_UL, "Mpurse_Jopen_UL_out", "Mpurse_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Jopen_UR, "Mpurse_Jopen_UR_out", "Mpurse_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Jopen_DL, "Mpurse_Jopen_DL_out", "Mpurse_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Jopen_DR, "Mpurse_Jopen_DR_out", "Mpurse_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Jopen_UL, "Mtowards_Jopen_UL_out", "Mtowards_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Jopen_UR, "Mtowards_Jopen_UR_out", "Mtowards_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Jopen_DL, "Mtowards_Jopen_DL_out", "Mtowards_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Jopen_DR, "Mtowards_Jopen_DR_out", "Mtowards_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Jopen_UL, "Mfunnel_Jopen_UL_out", "Mfunnel_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Jopen_UR, "Mfunnel_Jopen_UR_out", "Mfunnel_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Jopen_DL, "Mfunnel_Jopen_DL_out", "Mfunnel_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Jopen_DR, "Mfunnel_Jopen_DR_out", "Mfunnel_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpress_Jopen_UL, "Mpress_Jopen_UL_out", "Mpress_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpress_Jopen_UR, "Mpress_Jopen_UR_out", "Mpress_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpress_Jopen_DL, "Mpress_Jopen_DL_out", "Mpress_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpress_Jopen_DR, "Mpress_Jopen_DR_out", "Mpress_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_lipsBite_L, "mouth_lipsBite_L_out", "mouth_lipsBite_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(mouth_lipsBite_R, "mouth_lipsBite_R_out", "mouth_lipsBite_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipBite_Jopen_L, "MupperLipBite_Jopen_L_out", "MupperLipBite_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipBite_Jopen_R, "MupperLipBite_Jopen_R_out", "MupperLipBite_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipBite_Jopen_L, "MlowerLipBite_Jopen_L_out", "MlowerLipBite_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipBite_Jopen_R, "MlowerLipBite_Jopen_R_out", "MlowerLipBite_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtighten_UL, "Mpurse_Mtighten_UL_out", "Mpurse_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtighten_UR, "Mpurse_Mtighten_UR_out", "Mpurse_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtighten_DL, "Mpurse_Mtighten_DL_out", "Mpurse_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtighten_DR, "Mpurse_Mtighten_DR_out", "Mpurse_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Mtighten_UL, "Mtowards_Mtighten_UL_out", "Mtowards_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Mtighten_UR, "Mtowards_Mtighten_UR_out", "Mtowards_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Mtighten_DL, "Mtowards_Mtighten_DL_out", "Mtowards_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mtowards_Mtighten_DR, "Mtowards_Mtighten_DR_out", "Mtowards_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtighten_UL, "Mfunnel_Mtighten_UL_out", "Mfunnel_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtighten_UR, "Mfunnel_Mtighten_UR_out", "Mfunnel_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtighten_DL, "Mfunnel_Mtighten_DL_out", "Mfunnel_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtighten_DR, "Mfunnel_Mtighten_DR_out", "Mfunnel_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(NKstretch_Jopen_L, "NKstretch_Jopen_L_out", "NKstretch_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(NKstretch_Jopen_R, "NKstretch_Jopen_R_out", "NKstretch_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(cheek_blow_cor, "cheek_blow_cor_out", "cheek_blow_cor", nAttr, stat);
	InitialAndAddAttrForExtrOut(JlowerChinRaise_Jopen_L, "JlowerChinRaise_Jopen_L_out", "JlowerChinRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(JlowerChinRaise_Jopen_R, "JlowerChinRaise_Jopen_R_out", "JlowerChinRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookLeft_Eblink_L, "ElookUp_ElookLeft_Eblink_L_out", "ElookUp_ElookLeft_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookLeft_Eblink_R, "ElookUp_ElookLeft_Eblink_R_out", "ElookUp_ElookLeft_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookRight_Eblink_L, "ElookUp_ElookRight_Eblink_L_out", "ElookUp_ElookRight_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookUp_ElookRight_Eblink_R, "ElookUp_ElookRight_Eblink_R_out", "ElookUp_ElookRight_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookLeft_Eblink_L, "ElookDown_ElookLeft_Eblink_L_out", "ElookDown_ElookLeft_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookLeft_Eblink_R, "ElookDown_ElookLeft_Eblink_R_out", "ElookDown_ElookLeft_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookRight_Eblink_L, "ElookDown_ElookRight_Eblink_L_out", "ElookDown_ElookRight_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_ElookRight_Eblink_R, "ElookDown_ElookRight_Eblink_R_out", "ElookDown_ElookRight_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_EsquintInner_Eblink_L, "EcheekRaise_EsquintInner_Eblink_L_out", "EcheekRaise_EsquintInner_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(EcheekRaise_EsquintInner_Eblink_R, "EcheekRaise_EsquintInner_Eblink_R_out", "EcheekRaise_EsquintInner_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_Mdimple_L, "McornerPull_MupperLipRaise_Mdimple_L_out", "McornerPull_MupperLipRaise_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_Mdimple_R, "McornerPull_MupperLipRaise_Mdimple_R_out", "McornerPull_MupperLipRaise_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_Mdimple_L, "McornerPull_Mstretch_Mdimple_L_out", "McornerPull_Mstretch_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_Mdimple_R, "McornerPull_Mstretch_Mdimple_R_out", "McornerPull_Mstretch_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_Mdimple_L, "McornerPull_MlowerLipDepress_Mdimple_L_out", "McornerPull_MlowerLipDepress_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_Mdimple_R, "McornerPull_MlowerLipDepress_Mdimple_R_out", "McornerPull_MlowerLipDepress_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_Mdimple_L, "Mstretch_MupperLipRaise_Mdimple_L_out", "Mstretch_MupperLipRaise_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_Mdimple_R, "Mstretch_MupperLipRaise_Mdimple_R_out", "Mstretch_MupperLipRaise_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_MupperLipRaise_MlowerLipDepress__ee_L, "Mdimple_MupperLipRaise_MlowerLipDepress__ee_L_out", "Mdimple_MupperLipRaise_MlowerLipDepress__ee_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_MupperLipRaise_MlowerLipDepress__ee_R, "Mdimple_MupperLipRaise_MlowerLipDepress__ee_R_out", "Mdimple_MupperLipRaise_MlowerLipDepress__ee_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_Mdimple_L, "Mstretch_MlowerLipDepress_Mdimple_L_out", "Mstretch_MlowerLipDepress_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_Mdimple_R, "Mstretch_MlowerLipDepress_Mdimple_R_out", "Mstretch_MlowerLipDepress_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_L, "McornerPull_Mstretch_MupperLipRaise_L_out", "McornerPull_Mstretch_MupperLipRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_R, "McornerPull_Mstretch_MupperLipRaise_R_out", "McornerPull_Mstretch_MupperLipRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_MupperLipRaise_L, "McornerPull_MlowerLipDepress_MupperLipRaise_L_out", "McornerPull_MlowerLipDepress_MupperLipRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_MupperLipRaise_R, "McornerPull_MlowerLipDepress_MupperLipRaise_R_out", "McornerPull_MlowerLipDepress_MupperLipRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_L, "McornerPull_Mstretch_MlowerLipDepress_L_out", "McornerPull_Mstretch_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_R, "McornerPull_Mstretch_MlowerLipDepress_R_out", "McornerPull_Mstretch_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_MlowerLipDepress_L, "Mstretch_MupperLipRaise_MlowerLipDepress_L_out", "Mstretch_MupperLipRaise_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_MlowerLipDepress_R, "Mstretch_MupperLipRaise_MlowerLipDepress_R_out", "Mstretch_MupperLipRaise_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_Jopen_L, "McornerPull_MupperLipRaise_Jopen_L_out", "McornerPull_MupperLipRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_Jopen_R, "McornerPull_MupperLipRaise_Jopen_R_out", "McornerPull_MupperLipRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mdimple_Jopen_L, "McornerPull_Mdimple_Jopen_L_out", "McornerPull_Mdimple_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mdimple_Jopen_R, "McornerPull_Mdimple_Jopen_R_out", "McornerPull_Mdimple_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mdimple_Jopen_L, "Mstretch_Mdimple_Jopen_L_out", "Mstretch_Mdimple_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mdimple_Jopen_R, "Mstretch_Mdimple_Jopen_R_out", "Mstretch_Mdimple_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Jopen__puckerJawOpen_UL, "Mpurse_Mtowards_Jopen__puckerJawOpen_UL_out", "Mpurse_Mtowards_Jopen__puckerJawOpen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Jopen__puckerJawOpen_UR, "Mpurse_Mtowards_Jopen__puckerJawOpen_UR_out", "Mpurse_Mtowards_Jopen__puckerJawOpen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Jopen__puckerJawOpen_DL, "Mpurse_Mtowards_Jopen__puckerJawOpen_DL_out", "Mpurse_Mtowards_Jopen__puckerJawOpen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Jopen__puckerJawOpen_DR, "Mpurse_Mtowards_Jopen__puckerJawOpen_DR_out", "Mpurse_Mtowards_Jopen__puckerJawOpen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Jopen_UL, "Mpurse_Mfunnel_Jopen_UL_out", "Mpurse_Mfunnel_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Jopen_UR, "Mpurse_Mfunnel_Jopen_UR_out", "Mpurse_Mfunnel_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Jopen_DL, "Mpurse_Mfunnel_Jopen_DL_out", "Mpurse_Mfunnel_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Jopen_DR, "Mpurse_Mfunnel_Jopen_DR_out", "Mpurse_Mfunnel_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Jopen_UL, "Mfunnel_Mtowards_Jopen_UL_out", "Mfunnel_Mtowards_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Jopen_UR, "Mfunnel_Mtowards_Jopen_UR_out", "Mfunnel_Mtowards_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Jopen_DL, "Mfunnel_Mtowards_Jopen_DL_out", "Mfunnel_Mtowards_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Jopen_DR, "Mfunnel_Mtowards_Jopen_DR_out", "Mfunnel_Mtowards_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlipsTogether_Mpress_Jopen__mouthSuck_UL, "MlipsTogether_Mpress_Jopen__mouthSuck_UL_out", "MlipsTogether_Mpress_Jopen__mouthSuck_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlipsTogether_Mpress_Jopen__mouthSuck_UR, "MlipsTogether_Mpress_Jopen__mouthSuck_UR_out", "MlipsTogether_Mpress_Jopen__mouthSuck_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlipsTogether_Mpress_Jopen__mouthSuck_DL, "MlipsTogether_Mpress_Jopen__mouthSuck_DL_out", "MlipsTogether_Mpress_Jopen__mouthSuck_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlipsTogether_Mpress_Jopen__mouthSuck_DR, "MlipsTogether_Mpress_Jopen__mouthSuck_DR_out", "MlipsTogether_Mpress_Jopen__mouthSuck_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipBite_MupperLipBite_Jopen_L, "MlowerLipBite_MupperLipBite_Jopen_L_out", "MlowerLipBite_MupperLipBite_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipBite_MupperLipBite_Jopen_R, "MlowerLipBite_MupperLipBite_Jopen_R_out", "MlowerLipBite_MupperLipBite_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mtighten__puckerTighten_UL, "Mpurse_Mtowards_Mtighten__puckerTighten_UL_out", "Mpurse_Mtowards_Mtighten__puckerTighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mtighten__puckerTighten_UR, "Mpurse_Mtowards_Mtighten__puckerTighten_UR_out", "Mpurse_Mtowards_Mtighten__puckerTighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mtighten__puckerTighten_DL, "Mpurse_Mtowards_Mtighten__puckerTighten_DL_out", "Mpurse_Mtowards_Mtighten__puckerTighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mtighten__puckerTighten_DR, "Mpurse_Mtowards_Mtighten__puckerTighten_DR_out", "Mpurse_Mtowards_Mtighten__puckerTighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Mtighten_UL, "Mpurse_Mfunnel_Mtighten_UL_out", "Mpurse_Mfunnel_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Mtighten_UR, "Mpurse_Mfunnel_Mtighten_UR_out", "Mpurse_Mfunnel_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Mtighten_DL, "Mpurse_Mfunnel_Mtighten_DL_out", "Mpurse_Mfunnel_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mfunnel_Mtighten_DR, "Mpurse_Mfunnel_Mtighten_DR_out", "Mpurse_Mfunnel_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Mtighten_UL, "Mfunnel_Mtowards_Mtighten_UL_out", "Mfunnel_Mtowards_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Mtighten_UR, "Mfunnel_Mtowards_Mtighten_UR_out", "Mfunnel_Mtowards_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Mtighten_DL, "Mfunnel_Mtowards_Mtighten_DL_out", "Mfunnel_Mtowards_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_Mtowards_Mtighten_DR, "Mfunnel_Mtowards_Mtighten_DR_out", "Mfunnel_Mtowards_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, "Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L_out", "Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_Mdimple_L, "McornerPull_Mstretch_MupperLipRaise_Mdimple_L_out", "McornerPull_Mstretch_MupperLipRaise_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_Mdimple_R, "McornerPull_Mstretch_MupperLipRaise_Mdimple_R_out", "McornerPull_Mstretch_MupperLipRaise_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L, "McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L_out", "McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R, "McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R_out", "McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_Jopen_L, "McornerPull_Mstretch_MupperLipRaise_Jopen_L_out", "McornerPull_Mstretch_MupperLipRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_Jopen_R, "McornerPull_Mstretch_MupperLipRaise_Jopen_R_out", "McornerPull_Mstretch_MupperLipRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_Jopen_L, "McornerPull_Mstretch_MlowerLipDepress_Jopen_L_out", "McornerPull_Mstretch_MlowerLipDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_Jopen_R, "McornerPull_Mstretch_MlowerLipDepress_Jopen_R_out", "McornerPull_Mstretch_MlowerLipDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L, "McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L_out", "McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R, "McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R_out", "McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L, "Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L_out", "Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R, "Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R_out", "Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_Mdimple_Jopen_L, "McornerPull_Mstretch_Mdimple_Jopen_L_out", "McornerPull_Mstretch_Mdimple_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_Mdimple_Jopen_R, "McornerPull_Mstretch_Mdimple_Jopen_R_out", "McornerPull_Mstretch_Mdimple_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL, "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL_out", "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR, "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR_out", "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL, "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL_out", "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR, "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR_out", "Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL, "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL_out", "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR, "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR_out", "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL, "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL_out", "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR, "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR_out", "Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R", nAttr, stat);

	//////////////////////////////////////////////////add new objects///////////////////////////////////////////////////
	InitialAndAddAttrForExtrOut(BraiseIn_Bdown_Blateral_L, "BraiseIn_Bdown_Blateral_L_out", "BraiseIn_Bdown_Blateral_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(BraiseIn_Bdown_Blateral_R, "BraiseIn_Bdown_Blateral_R_out", "BraiseIn_Bdown_Blateral_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Ewiden_INL, "Braise_Ewiden_INL_out", "Braise_Ewiden_INL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Ewiden_INR, "Braise_Ewiden_INR_out", "Braise_Ewiden_INR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Ewiden_OUTL, "Braise_Ewiden_OUTL_out", "Braise_Ewiden_OUTL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Ewiden_OUTR, "Braise_Ewiden_OUTR_out", "Braise_Ewiden_OUTR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Eblink_INL, "Braise_Eblink_INL_out", "Braise_Eblink_INL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Eblink_INR, "Braise_Eblink_INR_out", "Braise_Eblink_INR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Eblink_OUTL, "Braise_Eblink_OUTL_out", "Braise_Eblink_OUTL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_Eblink_OUTR, "Braise_Eblink_OUTR_out", "Braise_Eblink_OUTR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_ElookDown_INL, "Braise_ElookDown_INL_out", "Braise_ElookDown_INL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_ElookDown_INR, "Braise_ElookDown_INR_out", "Braise_ElookDown_INR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_ElookDown_OUTL, "Braise_ElookDown_OUTL_out", "Braise_ElookDown_OUTL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Braise_ElookDown_OUTR, "Braise_ElookDown_OUTR_out", "Braise_ElookDown_OUTR", nAttr, stat);
	InitialAndAddAttrForExtrOut(EfaceScrunch_Eblink_L, "EfaceScrunch_Eblink_L_out", "EfaceScrunch_Eblink_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(EfaceScrunch_Eblink_R, "EfaceScrunch_Eblink_R_out", "EfaceScrunch_Eblink_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_Ewiden_L, "ElookDown_Ewiden_L_out", "ElookDown_Ewiden_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(ElookDown_Ewiden_R, "ElookDown_Ewiden_R_out", "ElookDown_Ewiden_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(NSwrinkle_Jopen_L, "NSwrinkle_Jopen_L_out", "NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(NSwrinkle_Jopen_R, "NSwrinkle_Jopen_R_out", "NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Cblow_MlipsBlow_L, "Cblow_MlipsBlow_L_out", "Cblow_MlipsBlow_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Cblow_MlipsBlow_R, "Cblow_MlipsBlow_R_out", "Cblow_MlipsBlow_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_Jopen_L, "MupperLipRaise_MlowerLipDepress_Jopen_L_out", "MupperLipRaise_MlowerLipDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_Jopen_R, "MupperLipRaise_MlowerLipDepress_Jopen_R_out", "MupperLipRaise_MlowerLipDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MstretchLipsClose_L, "Mstretch_MstretchLipsClose_L_out", "Mstretch_MstretchLipsClose_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MstretchLipsClose_R, "Mstretch_MstretchLipsClose_R_out", "Mstretch_MstretchLipsClose_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_Jopen_L, "McornerPull_Mstretch_Jopen_L_out", "McornerPull_Mstretch_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_Jopen_R, "McornerPull_Mstretch_Jopen_R_out", "McornerPull_Mstretch_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_Jopen_L, "McornerPull_MlowerLipDepress_Jopen_L_out", "McornerPull_MlowerLipDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_Jopen_R, "McornerPull_MlowerLipDepress_Jopen_R_out", "McornerPull_MlowerLipDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_UL, "Mfunnel_MupperLipRaise_UL_out", "Mfunnel_MupperLipRaise_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_UR, "Mfunnel_MupperLipRaise_UR_out", "Mfunnel_MupperLipRaise_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_DL, "Mfunnel_MupperLipRaise_DL_out", "Mfunnel_MupperLipRaise_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_DR, "Mfunnel_MupperLipRaise_DR_out", "Mfunnel_MupperLipRaise_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MlowerLipDepress_UL, "Mfunnel_MlowerLipDepress_UL_out", "Mfunnel_MlowerLipDepress_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MlowerLipDepress_UR, "Mfunnel_MlowerLipDepress_UR_out", "Mfunnel_MlowerLipDepress_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MlowerLipDepress_DL, "Mfunnel_MlowerLipDepress_DL_out", "Mfunnel_MlowerLipDepress_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MlowerLipDepress_DR, "Mfunnel_MlowerLipDepress_DR_out", "Mfunnel_MlowerLipDepress_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL, "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL_out", "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR, "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR_out", "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL, "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL_out", "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR, "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR_out", "Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_L, "MupperLipRaise_NSwrinkle_L_out", "MupperLipRaise_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_R, "MupperLipRaise_NSwrinkle_R_out", "MupperLipRaise_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerDepress_NSwrinkle_L, "McornerDepress_NSwrinkle_L_out", "McornerDepress_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerDepress_NSwrinkle_R, "McornerDepress_NSwrinkle_R_out", "McornerDepress_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_McornerDepress_L, "MupperLipRaise_NSwrinkle_McornerDepress_L_out", "MupperLipRaise_NSwrinkle_McornerDepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_McornerDepress_R, "MupperLipRaise_NSwrinkle_McornerDepress_R_out", "MupperLipRaise_NSwrinkle_McornerDepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_Jopen_L, "MupperLipRaise_NSwrinkle_Jopen_L_out", "MupperLipRaise_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_Jopen_R, "MupperLipRaise_NSwrinkle_Jopen_R_out", "MupperLipRaise_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_McornerDepress_Jopen_L, "MupperLipRaise_McornerDepress_Jopen_L_out", "MupperLipRaise_McornerDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_McornerDepress_Jopen_R, "MupperLipRaise_McornerDepress_Jopen_R_out", "MupperLipRaise_McornerDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerDepress_NSwrinkle_Jopen_L, "McornerDepress_NSwrinkle_Jopen_L_out", "McornerDepress_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerDepress_NSwrinkle_Jopen_R, "McornerDepress_NSwrinkle_Jopen_R_out", "McornerDepress_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L, "MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L_out", "MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R, "MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R_out", "MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_Jopen_L, "Mstretch_MupperLipRaise_Jopen_L_out", "Mstretch_MupperLipRaise_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_Jopen_R, "Mstretch_MupperLipRaise_Jopen_R_out", "Mstretch_MupperLipRaise_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_UL, "McornerPull_Mpurse_UL_out", "McornerPull_Mpurse_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_UR, "McornerPull_Mpurse_UR_out", "McornerPull_Mpurse_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_DL, "McornerPull_Mpurse_DL_out", "McornerPull_Mpurse_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_DR, "McornerPull_Mpurse_DR_out", "McornerPull_Mpurse_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mtowards_UL, "McornerPull_Mtowards_UL_out", "McornerPull_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mtowards_UR, "McornerPull_Mtowards_UR_out", "McornerPull_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mtowards_DL, "McornerPull_Mtowards_DL_out", "McornerPull_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mtowards_DR, "McornerPull_Mtowards_DR_out", "McornerPull_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_UL, "McornerPull_Mfunnel_UL_out", "McornerPull_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_UR, "McornerPull_Mfunnel_UR_out", "McornerPull_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_DL, "McornerPull_Mfunnel_DL_out", "McornerPull_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_DR, "McornerPull_Mfunnel_DR_out", "McornerPull_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards__cornerPullPucker_UL, "McornerPull_Mpurse_Mtowards__cornerPullPucker_UL_out", "McornerPull_Mpurse_Mtowards__cornerPullPucker_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards__cornerPullPucker_UR, "McornerPull_Mpurse_Mtowards__cornerPullPucker_UR_out", "McornerPull_Mpurse_Mtowards__cornerPullPucker_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards__cornerPullPucker_DL, "McornerPull_Mpurse_Mtowards__cornerPullPucker_DL_out", "McornerPull_Mpurse_Mtowards__cornerPullPucker_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards__cornerPullPucker_DR, "McornerPull_Mpurse_Mtowards__cornerPullPucker_DR_out", "McornerPull_Mpurse_Mtowards__cornerPullPucker_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mfunnel_UL, "McornerPull_Mpurse_Mfunnel_UL_out", "McornerPull_Mpurse_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mfunnel_UR, "McornerPull_Mpurse_Mfunnel_UR_out", "McornerPull_Mpurse_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mfunnel_DL, "McornerPull_Mpurse_Mfunnel_DL_out", "McornerPull_Mpurse_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mfunnel_DR, "McornerPull_Mpurse_Mfunnel_DR_out", "McornerPull_Mpurse_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_Mtowards_UL, "McornerPull_Mfunnel_Mtowards_UL_out", "McornerPull_Mfunnel_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_Mtowards_UR, "McornerPull_Mfunnel_Mtowards_UR_out", "McornerPull_Mfunnel_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_Mtowards_DL, "McornerPull_Mfunnel_Mtowards_DL_out", "McornerPull_Mfunnel_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mfunnel_Mtowards_DR, "McornerPull_Mfunnel_Mtowards_DR_out", "McornerPull_Mfunnel_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL, "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL_out", "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR, "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR_out", "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL, "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL_out", "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR, "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR_out", "McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_Mtighten_UL, "MupperLipRaise_Mtighten_UL_out", "MupperLipRaise_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_Mtighten_UR, "MupperLipRaise_Mtighten_UR_out", "MupperLipRaise_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_Mtighten_DL, "MupperLipRaise_Mtighten_DL_out", "MupperLipRaise_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_Mtighten_DR, "MupperLipRaise_Mtighten_DR_out", "MupperLipRaise_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_Mtighten_UL, "MlowerLipDepress_Mtighten_UL_out", "MlowerLipDepress_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_Mtighten_UR, "MlowerLipDepress_Mtighten_UR_out", "MlowerLipDepress_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_Mtighten_DL, "MlowerLipDepress_Mtighten_DL_out", "MlowerLipDepress_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_Mtighten_DR, "MlowerLipDepress_Mtighten_DR_out", "MlowerLipDepress_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_Mtighten_UL, "MupperLipRaise_MlowerLipDepress_Mtighten_UL_out", "MupperLipRaise_MlowerLipDepress_Mtighten_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_Mtighten_UR, "MupperLipRaise_MlowerLipDepress_Mtighten_UR_out", "MupperLipRaise_MlowerLipDepress_Mtighten_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_Mtighten_DL, "MupperLipRaise_MlowerLipDepress_Mtighten_DL_out", "MupperLipRaise_MlowerLipDepress_Mtighten_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_Mtighten_DR, "MupperLipRaise_MlowerLipDepress_Mtighten_DR_out", "MupperLipRaise_MlowerLipDepress_Mtighten_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_EcheekRaise_L, "McornerPull_EcheekRaise_L_out", "McornerPull_EcheekRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_EcheekRaise_R, "McornerPull_EcheekRaise_R_out", "McornerPull_EcheekRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_JlowerChinRaise_L, "Mstretch_JlowerChinRaise_L_out", "Mstretch_JlowerChinRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_JlowerChinRaise_R, "Mstretch_JlowerChinRaise_R_out", "Mstretch_JlowerChinRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_NSwrinkle_L, "McornerPull_NSwrinkle_L_out", "McornerPull_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_NSwrinkle_R, "McornerPull_NSwrinkle_R_out", "McornerPull_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_NSwrinkle_L, "McornerPull_MupperLipRaise_NSwrinkle_L_out", "McornerPull_MupperLipRaise_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_NSwrinkle_R, "McornerPull_MupperLipRaise_NSwrinkle_R_out", "McornerPull_MupperLipRaise_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_NSwrinkle_Jopen_L, "McornerPull_NSwrinkle_Jopen_L_out", "McornerPull_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_NSwrinkle_Jopen_R, "McornerPull_NSwrinkle_Jopen_R_out", "McornerPull_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_NSwrinkle_Jopen_L, "McornerPull_MupperLipRaise_NSwrinkle_Jopen_L_out", "McornerPull_MupperLipRaise_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_NSwrinkle_Jopen_R, "McornerPull_MupperLipRaise_NSwrinkle_Jopen_R_out", "McornerPull_MupperLipRaise_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_NSdepress_L, "Mstretch_NSdepress_L_out", "Mstretch_NSdepress_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_NSdepress_R, "Mstretch_NSdepress_R_out", "Mstretch_NSdepress_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_UL, "Mstretch_Mpurse_UL_out", "Mstretch_Mpurse_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_UR, "Mstretch_Mpurse_UR_out", "Mstretch_Mpurse_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_DL, "Mstretch_Mpurse_DL_out", "Mstretch_Mpurse_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_DR, "Mstretch_Mpurse_DR_out", "Mstretch_Mpurse_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mtowards_UL, "Mstretch_Mtowards_UL_out", "Mstretch_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mtowards_UR, "Mstretch_Mtowards_UR_out", "Mstretch_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mtowards_DL, "Mstretch_Mtowards_DL_out", "Mstretch_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mtowards_DR, "Mstretch_Mtowards_DR_out", "Mstretch_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_UL, "Mstretch_Mfunnel_UL_out", "Mstretch_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_UR, "Mstretch_Mfunnel_UR_out", "Mstretch_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_DL, "Mstretch_Mfunnel_DL_out", "Mstretch_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_DR, "Mstretch_Mfunnel_DR_out", "Mstretch_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL, "Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL_out", "Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR, "Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR_out", "Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL, "Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL_out", "Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR, "Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR_out", "Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mfunnel_UL, "Mstretch_Mpurse_Mfunnel_UL_out", "Mstretch_Mpurse_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mfunnel_UR, "Mstretch_Mpurse_Mfunnel_UR_out", "Mstretch_Mpurse_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mfunnel_DL, "Mstretch_Mpurse_Mfunnel_DL_out", "Mstretch_Mpurse_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mfunnel_DR, "Mstretch_Mpurse_Mfunnel_DR_out", "Mstretch_Mpurse_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_Mtowards_UL, "Mstretch_Mfunnel_Mtowards_UL_out", "Mstretch_Mfunnel_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_Mtowards_UR, "Mstretch_Mfunnel_Mtowards_UR_out", "Mstretch_Mfunnel_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_Mtowards_DL, "Mstretch_Mfunnel_Mtowards_DL_out", "Mstretch_Mfunnel_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mfunnel_Mtowards_DR, "Mstretch_Mfunnel_Mtowards_DR_out", "Mstretch_Mfunnel_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL, "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL_out", "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR, "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR_out", "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL, "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL_out", "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR, "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR_out", "Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_UL, "Mdimple_Mpurse_UL_out", "Mdimple_Mpurse_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_UR, "Mdimple_Mpurse_UR_out", "Mdimple_Mpurse_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_DL, "Mdimple_Mpurse_DL_out", "Mdimple_Mpurse_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_DR, "Mdimple_Mpurse_DR_out", "Mdimple_Mpurse_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mtowards_UL, "Mdimple_Mtowards_UL_out", "Mdimple_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mtowards_UR, "Mdimple_Mtowards_UR_out", "Mdimple_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mtowards_DL, "Mdimple_Mtowards_DL_out", "Mdimple_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mtowards_DR, "Mdimple_Mtowards_DR_out", "Mdimple_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_UL, "Mdimple_Mfunnel_UL_out", "Mdimple_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_UR, "Mdimple_Mfunnel_UR_out", "Mdimple_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_DL, "Mdimple_Mfunnel_DL_out", "Mdimple_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_DR, "Mdimple_Mfunnel_DR_out", "Mdimple_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards__dimplePucker_UL, "Mdimple_Mpurse_Mtowards__dimplePucker_UL_out", "Mdimple_Mpurse_Mtowards__dimplePucker_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards__dimplePucker_UR, "Mdimple_Mpurse_Mtowards__dimplePucker_UR_out", "Mdimple_Mpurse_Mtowards__dimplePucker_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards__dimplePucker_DL, "Mdimple_Mpurse_Mtowards__dimplePucker_DL_out", "Mdimple_Mpurse_Mtowards__dimplePucker_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards__dimplePucker_DR, "Mdimple_Mpurse_Mtowards__dimplePucker_DR_out", "Mdimple_Mpurse_Mtowards__dimplePucker_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mfunnel_UL, "Mdimple_Mpurse_Mfunnel_UL_out", "Mdimple_Mpurse_Mfunnel_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mfunnel_UR, "Mdimple_Mpurse_Mfunnel_UR_out", "Mdimple_Mpurse_Mfunnel_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mfunnel_DL, "Mdimple_Mpurse_Mfunnel_DL_out", "Mdimple_Mpurse_Mfunnel_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mfunnel_DR, "Mdimple_Mpurse_Mfunnel_DR_out", "Mdimple_Mpurse_Mfunnel_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_Mtowards_UL, "Mdimple_Mfunnel_Mtowards_UL_out", "Mdimple_Mfunnel_Mtowards_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_Mtowards_UR, "Mdimple_Mfunnel_Mtowards_UR_out", "Mdimple_Mfunnel_Mtowards_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_Mtowards_DL, "Mdimple_Mfunnel_Mtowards_DL_out", "Mdimple_Mfunnel_Mtowards_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mfunnel_Mtowards_DR, "Mdimple_Mfunnel_Mtowards_DR_out", "Mdimple_Mfunnel_Mtowards_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL, "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL_out", "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR, "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR_out", "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL, "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL_out", "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR, "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR_out", "Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_Jopen_L, "Mstretch_MlowerLipDepress_Jopen_L_out", "Mstretch_MlowerLipDepress_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_Jopen_R, "Mstretch_MlowerLipDepress_Jopen_R_out", "Mstretch_MlowerLipDepress_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_NSwrinkle_L, "Mstretch_NSwrinkle_L_out", "Mstretch_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_NSwrinkle_R, "Mstretch_NSwrinkle_R_out", "Mstretch_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_NSwrinkle_L, "Mstretch_MupperLipRaise_NSwrinkle_L_out", "Mstretch_MupperLipRaise_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_NSwrinkle_R, "Mstretch_MupperLipRaise_NSwrinkle_R_out", "Mstretch_MupperLipRaise_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_Mdimple_L, "McornerPull_Mstretch_MlowerLipDepress_Mdimple_L_out", "McornerPull_Mstretch_MlowerLipDepress_Mdimple_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_Mdimple_R, "McornerPull_Mstretch_MlowerLipDepress_Mdimple_R_out", "McornerPull_Mstretch_MlowerLipDepress_Mdimple_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_NSwrinkle_L, "McornerPull_Mstretch_NSwrinkle_L_out", "McornerPull_Mstretch_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_NSwrinkle_R, "McornerPull_Mstretch_NSwrinkle_R_out", "McornerPull_Mstretch_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L, "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L_out", "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R, "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R_out", "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_NSwrinkle_Jopen_L, "Mstretch_NSwrinkle_Jopen_L_out", "Mstretch_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_NSwrinkle_Jopen_R, "Mstretch_NSwrinkle_Jopen_R_out", "Mstretch_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, "Mstretch_MupperLipRaise_NSwrinkle_Jopen_L_out", "Mstretch_MupperLipRaise_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, "Mstretch_MupperLipRaise_NSwrinkle_Jopen_R_out", "Mstretch_MupperLipRaise_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_NSwrinkle_Jopen_L, "McornerPull_Mstretch_NSwrinkle_Jopen_L_out", "McornerPull_Mstretch_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_NSwrinkle_Jopen_R, "McornerPull_Mstretch_NSwrinkle_Jopen_R_out", "McornerPull_Mstretch_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L_out", "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R_out", "McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_JopenExtreme_L, "McornerPull_JopenExtreme_L_out", "McornerPull_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_JopenExtreme_R, "McornerPull_JopenExtreme_R_out", "McornerPull_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_JopenExtreme_L, "Mstretch_JopenExtreme_L_out", "Mstretch_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_JopenExtreme_R, "Mstretch_JopenExtreme_R_out", "Mstretch_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_JopenExtreme_L, "MupperLipRaise_JopenExtreme_L_out", "MupperLipRaise_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_JopenExtreme_R, "MupperLipRaise_JopenExtreme_R_out", "MupperLipRaise_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_JopenExtreme_L, "MlowerLipDepress_JopenExtreme_L_out", "MlowerLipDepress_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MlowerLipDepress_JopenExtreme_R, "MlowerLipDepress_JopenExtreme_R_out", "MlowerLipDepress_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_JopenExtreme_L, "McornerPull_Mstretch_JopenExtreme_L_out", "McornerPull_Mstretch_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_JopenExtreme_R, "McornerPull_Mstretch_JopenExtreme_R_out", "McornerPull_Mstretch_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_JopenExtreme_L, "McornerPull_MupperLipRaise_JopenExtreme_L_out", "McornerPull_MupperLipRaise_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MupperLipRaise_JopenExtreme_R, "McornerPull_MupperLipRaise_JopenExtreme_R_out", "McornerPull_MupperLipRaise_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_JopenExtreme_L, "Mstretch_MupperLipRaise_JopenExtreme_L_out", "Mstretch_MupperLipRaise_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MupperLipRaise_JopenExtreme_R, "Mstretch_MupperLipRaise_JopenExtreme_R_out", "Mstretch_MupperLipRaise_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_JopenExtreme_L, "McornerPull_MlowerLipDepress_JopenExtreme_L_out", "McornerPull_MlowerLipDepress_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_JopenExtreme_R, "McornerPull_MlowerLipDepress_JopenExtreme_R_out", "McornerPull_MlowerLipDepress_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_JopenExtreme_L, "Mstretch_MlowerLipDepress_JopenExtreme_L_out", "Mstretch_MlowerLipDepress_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_JopenExtreme_R, "Mstretch_MlowerLipDepress_JopenExtreme_R_out", "Mstretch_MlowerLipDepress_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_JopenExtreme_L, "MupperLipRaise_MlowerLipDepress_JopenExtreme_L_out", "MupperLipRaise_MlowerLipDepress_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(MupperLipRaise_MlowerLipDepress_JopenExtreme_R, "MupperLipRaise_MlowerLipDepress_JopenExtreme_R_out", "MupperLipRaise_MlowerLipDepress_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L, "McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L_out", "McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R, "McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R_out", "McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L, "McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L_out", "McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R, "McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R_out", "McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, "McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L_out", "McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, "McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R_out", "McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, "Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L_out", "Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, "Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R_out", "Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R_out", "McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_UL, "Jleft_MlipsTogether_UL_out", "Jleft_MlipsTogether_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_UR, "Jleft_MlipsTogether_UR_out", "Jleft_MlipsTogether_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_DL, "Jleft_MlipsTogether_DL_out", "Jleft_MlipsTogether_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_DR, "Jleft_MlipsTogether_DR_out", "Jleft_MlipsTogether_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_UL, "Jright_MlipsTogether_UL_out", "Jright_MlipsTogether_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_UR, "Jright_MlipsTogether_UR_out", "Jright_MlipsTogether_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_DL, "Jright_MlipsTogether_DL_out", "Jright_MlipsTogether_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_DR, "Jright_MlipsTogether_DR_out", "Jright_MlipsTogether_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_Jopen_UL, "Jleft_MlipsTogether_Jopen_UL_out", "Jleft_MlipsTogether_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_Jopen_UR, "Jleft_MlipsTogether_Jopen_UR_out", "Jleft_MlipsTogether_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_Jopen_DL, "Jleft_MlipsTogether_Jopen_DL_out", "Jleft_MlipsTogether_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jleft_MlipsTogether_Jopen_DR, "Jleft_MlipsTogether_Jopen_DR_out", "Jleft_MlipsTogether_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_Jopen_UL, "Jright_MlipsTogether_Jopen_UL_out", "Jright_MlipsTogether_Jopen_UL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_Jopen_UR, "Jright_MlipsTogether_Jopen_UR_out", "Jright_MlipsTogether_Jopen_UR", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_Jopen_DL, "Jright_MlipsTogether_Jopen_DL_out", "Jright_MlipsTogether_Jopen_DL", nAttr, stat);
	InitialAndAddAttrForExtrOut(Jright_MlipsTogether_Jopen_DR, "Jright_MlipsTogether_Jopen_DR_out", "Jright_MlipsTogether_Jopen_DR", nAttr, stat);
	InitialAndAddAttrForExtrOut(JlowerChinRaise_MupperLipRaise_L, "JlowerChinRaise_MupperLipRaise_L_out", "JlowerChinRaise_MupperLipRaise_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(JlowerChinRaise_MupperLipRaise_R, "JlowerChinRaise_MupperLipRaise_R_out", "JlowerChinRaise_MupperLipRaise_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(NKstretch_Mstretch_L, "NKstretch_Mstretch_L_out", "NKstretch_Mstretch_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(NKstretch_Mstretch_R, "NKstretch_Mstretch_R_out", "NKstretch_Mstretch_R", nAttr, stat);
	InitialAndAddAttrForExtrOut(NKstretch_Mstretch_Jopen_L, "NKstretch_Mstretch_Jopen_L_out", "NKstretch_Mstretch_Jopen_L", nAttr, stat);
	InitialAndAddAttrForExtrOut(NKstretch_Mstretch_Jopen_R, "NKstretch_Mstretch_Jopen_R_out", "NKstretch_Mstretch_Jopen_R", nAttr, stat);

	/*****************set attrs affect***********************/
	{
		stat = attributeAffects(browDownLInput, browDownLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browDownRInput, browDownROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browLateralLInput, browLateralLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browLateralRInput, browLateralROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browRaiseInLInput, browRaiseInLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browRaiseInRInput, browRaiseInROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browRaiseOuterLInput, browRaiseOuterLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(browRaiseOuterRInput, browRaiseOuterROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(earUpLInput, earUpLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(earUpRInput, earUpROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeBlinkLInput, eyeBlinkLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeBlinkRInput, eyeBlinkROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeWidenLInput, eyeWidenLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeWidenRInput, eyeWidenROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeSquintInnerLInput, eyeSquintInnerLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeSquintInnerRInput, eyeSquintInnerROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeCheekRaiseLInput, eyeCheekRaiseLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeCheekRaiseRInput, eyeCheekRaiseROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeFaceScrunchLInput, eyeFaceScrunchLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeFaceScrunchRInput, eyeFaceScrunchROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeUpperLidUpLInput, eyeUpperLidUpLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeUpperLidUpRInput, eyeUpperLidUpROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeRelaxLInput, eyeRelaxLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeRelaxRInput, eyeRelaxROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLowerLidUpLInput, eyeLowerLidUpLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLowerLidUpRInput, eyeLowerLidUpROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLowerLidDownLInput, eyeLowerLidDownLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLowerLidDownRInput, eyeLowerLidDownROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookUpLInput, eyeLookUpLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookUpRInput, eyeLookUpROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookDownLInput, eyeLookDownLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookDownRInput, eyeLookDownROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookLeftLInput, eyeLookLeftLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookLeftRInput, eyeLookLeftROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookRightLInput, eyeLookRightLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeLookRightRInput, eyeLookRightROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyePupilWideLInput, eyePupilWideLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyePupilWideRInput, eyePupilWideROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyePupilNarrowLInput, eyePupilNarrowLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyePupilNarrowRInput, eyePupilNarrowROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyeParallelLookDirectionInput, eyeParallelLookDirectionOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesUpINLInput, eyelashesUpINLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesUpINRInput, eyelashesUpINROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesUpOUTLInput, eyelashesUpOUTLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesUpOUTRInput, eyelashesUpOUTROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesDownINLInput, eyelashesDownINLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesDownINRInput, eyelashesDownINROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesDownOUTLInput, eyelashesDownOUTLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(eyelashesDownOUTRInput, eyelashesDownOUTROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseWrinkleLInput, noseWrinkleLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseWrinkleRInput, noseWrinkleROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNostrilDepressLInput, noseNostrilDepressLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNostrilDepressRInput, noseNostrilDepressROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNostrilDilateLInput, noseNostrilDilateLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNostrilDilateRInput, noseNostrilDilateROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNostrilCompressLInput, noseNostrilCompressLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNostrilCompressRInput, noseNostrilCompressROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNasolabialDeepenLInput, noseNasolabialDeepenLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(noseNasolabialDeepenRInput, noseNasolabialDeepenROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCheekSuckLInput, mouthCheekSuckLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCheekSuckRInput, mouthCheekSuckROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCheekBlowLInput, mouthCheekBlowLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCheekBlowRInput, mouthCheekBlowROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsBlowLInput, mouthLipsBlowLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsBlowRInput, mouthLipsBlowROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLeftInput, mouthLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthRightInput, mouthRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpInput, mouthUpOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthDownInput, mouthDownOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipRaiseLInput, mouthUpperLipRaiseLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipRaiseRInput, mouthUpperLipRaiseROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipDepressLInput, mouthLowerLipDepressLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipDepressRInput, mouthLowerLipDepressROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerPullLInput, mouthCornerPullLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerPullRInput, mouthCornerPullROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStretchLInput, mouthStretchLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStretchRInput, mouthStretchROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStretchLipsCloseLInput, mouthStretchLipsCloseLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStretchLipsCloseRInput, mouthStretchLipsCloseROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthDimpleLInput, mouthDimpleLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthDimpleRInput, mouthDimpleROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerDepressLInput, mouthCornerDepressLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerDepressRInput, mouthCornerDepressROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthPressULInput, mouthPressULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthPressURInput, mouthPressUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthPressDLInput, mouthPressDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthPressDRInput, mouthPressDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPurseULInput, mouthLipsPurseULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPurseURInput, mouthLipsPurseUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPurseDLInput, mouthLipsPurseDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPurseDRInput, mouthLipsPurseDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTowardsULInput, mouthLipsTowardsULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTowardsURInput, mouthLipsTowardsUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTowardsDLInput, mouthLipsTowardsDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTowardsDRInput, mouthLipsTowardsDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthFunnelULInput, mouthFunnelULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthFunnelURInput, mouthFunnelUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthFunnelDLInput, mouthFunnelDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthFunnelDRInput, mouthFunnelDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipBiteLInput, mouthUpperLipBiteLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipBiteRInput, mouthUpperLipBiteROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipBiteLInput, mouthLowerLipBiteLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipBiteRInput, mouthLowerLipBiteROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTightenULInput, mouthLipsTightenULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTightenURInput, mouthLipsTightenUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTightenDLInput, mouthLipsTightenDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsTightenDRInput, mouthLipsTightenDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPressLInput, mouthLipsPressLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPressRInput, mouthLipsPressROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthSharpCornerPullLInput, mouthSharpCornerPullLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthSharpCornerPullRInput, mouthSharpCornerPullROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyUCInput, mouthStickyUCOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyUINLInput, mouthStickyUINLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyUINRInput, mouthStickyUINROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyUOUTLInput, mouthStickyUOUTLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyUOUTRInput, mouthStickyUOUTROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyDCInput, mouthStickyDCOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyDINLInput, mouthStickyDINLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyDINRInput, mouthStickyDINROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyDOUTLInput, mouthStickyDOUTLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthStickyDOUTRInput, mouthStickyDOUTROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsStickyLPh1Input, mouthLipsStickyLPh1Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsStickyLPh2Input, mouthLipsStickyLPh2Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsStickyLPh3Input, mouthLipsStickyLPh3Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsStickyRPh1Input, mouthLipsStickyRPh1Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsStickyRPh2Input, mouthLipsStickyRPh2Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsStickyRPh3Input, mouthLipsStickyRPh3Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPushULInput, mouthLipsPushULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPushURInput, mouthLipsPushUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPushDLInput, mouthLipsPushDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPushDRInput, mouthLipsPushDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPullULInput, mouthLipsPullULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPullURInput, mouthLipsPullUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPullDLInput, mouthLipsPullDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsPullDRInput, mouthLipsPullDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThinULInput, mouthLipsThinULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThinURInput, mouthLipsThinUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThinDLInput, mouthLipsThinDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThinDRInput, mouthLipsThinDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThickULInput, mouthLipsThickULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThickURInput, mouthLipsThickUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThickDLInput, mouthLipsThickDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLipsThickDRInput, mouthLipsThickDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerSharpenULInput, mouthCornerSharpenULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerSharpenURInput, mouthCornerSharpenUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerSharpenDLInput, mouthCornerSharpenDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerSharpenDRInput, mouthCornerSharpenDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerRounderULInput, mouthCornerRounderULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerRounderURInput, mouthCornerRounderUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerRounderDLInput, mouthCornerRounderDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerRounderDRInput, mouthCornerRounderDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipTowardsTeethLInput, mouthUpperLipTowardsTeethLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipTowardsTeethRInput, mouthUpperLipTowardsTeethROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipTowardsTeethLInput, mouthLowerLipTowardsTeethLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipTowardsTeethRInput, mouthLowerLipTowardsTeethROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipShiftLeftInput, mouthUpperLipShiftLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipShiftRightInput, mouthUpperLipShiftRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipShiftLeftInput, mouthLowerLipShiftLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipShiftRightInput, mouthLowerLipShiftRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipRollInLInput, mouthUpperLipRollInLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipRollInRInput, mouthUpperLipRollInROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipRollOutLInput, mouthUpperLipRollOutLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthUpperLipRollOutRInput, mouthUpperLipRollOutROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipRollInLInput, mouthLowerLipRollInLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipRollInRInput, mouthLowerLipRollInROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipRollOutLInput, mouthLowerLipRollOutLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthLowerLipRollOutRInput, mouthLowerLipRollOutROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerUpLInput, mouthCornerUpLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerUpRInput, mouthCornerUpROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerDownLInput, mouthCornerDownLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerDownRInput, mouthCornerDownROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerWideLInput, mouthCornerWideLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerWideRInput, mouthCornerWideROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerNarrowLInput, mouthCornerNarrowLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(mouthCornerNarrowRInput, mouthCornerNarrowROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueUpInput, tongueUpOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueDownInput, tongueDownOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueLeftInput, tongueLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueRightInput, tongueRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueOutInput, tongueOutOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueInInput, tongueInOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueRollUpInput, tongueRollUpOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueRollDownInput, tongueRollDownOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueRollLeftInput, tongueRollLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueRollRightInput, tongueRollRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueTipUpInput, tongueTipUpOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueTipDownInput, tongueTipDownOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueTipLeftInput, tongueTipLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueTipRightInput, tongueTipRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueWideInput, tongueWideOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tongueNarrowInput, tongueNarrowOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(tonguePressInput, tonguePressOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawOpenInput, jawOpenOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawLeftInput, jawLeftOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawRightInput, jawRightOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawFwdInput, jawFwdOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawBackInput, jawBackOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawClenchLInput, jawClenchLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawClenchRInput, jawClenchROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawChinRaiseDLInput, jawChinRaiseDLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawChinRaiseDRInput, jawChinRaiseDROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawChinRaiseULInput, jawChinRaiseULOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawChinRaiseURInput, jawChinRaiseUROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawChinCompressLInput, jawChinCompressLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(jawChinCompressRInput, jawChinCompressROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckStretchLInput, neckStretchLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckStretchRInput, neckStretchROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckSwallowPh1Input, neckSwallowPh1Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckSwallowPh2Input, neckSwallowPh2Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckSwallowPh3Input, neckSwallowPh3Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckSwallowPh4Input, neckSwallowPh4Output);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckMastoidContractLInput, neckMastoidContractLOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckMastoidContractRInput, neckMastoidContractROutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckThroatDownInput, neckThroatDownOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckThroatUpInput, neckThroatUpOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckDigastricDownInput, neckDigastricDownOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckDigastricUpInput, neckDigastricUpOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckThroatExhaleInput, neckThroatExhaleOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(neckThroatInhaleInput, neckThroatInhaleOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethUpUInput, teethUpUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethUpDInput, teethUpDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethDownUInput, teethDownUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethDownDInput, teethDownDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethLeftUInput, teethLeftUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethLeftDInput, teethLeftDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethRightUInput, teethRightUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethRightDInput, teethRightDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethFwdUInput, teethFwdUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethFwdDInput, teethFwdDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethBackUInput, teethBackUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(teethBackDInput, teethBackDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnUpUInput, headTurnUpUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnUpMInput, headTurnUpMOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnUpDInput, headTurnUpDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnDownUInput, headTurnDownUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnDownMInput, headTurnDownMOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnDownDInput, headTurnDownDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnLeftUInput, headTurnLeftUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnLeftMInput, headTurnLeftMOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnLeftDInput, headTurnLeftDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnRightUInput, headTurnRightUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnRightMInput, headTurnRightMOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTurnRightDInput, headTurnRightDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTiltLeftUInput, headTiltLeftUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTiltLeftMInput, headTiltLeftMOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTiltLeftDInput, headTiltLeftDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTiltRightUInput, headTiltRightUOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTiltRightMInput, headTiltRightMOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(headTiltRightDInput, headTiltRightDOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
		stat = attributeAffects(lookAtSwitchInput, lookAtSwitchOutput);
		if (!stat) { stat.perror("attributeAffects"); return stat; }
	}
	/***********************setAffects for extr2Blend*************************/
	SetAttrAffects(jawOpenExtremeInput, jawOpenExtremeOutput, stat);
	SetAttrAffects(jawOpenInput, jawOpenExtremeOutput, stat);

	SetAttrAffects(mouthLipsTogetherULInput, mouthLipsTogetherULOutput, stat);
	SetAttrAffects(jawOpenInput, mouthLipsTogetherULOutput, stat);
	SetAttrAffects(mouthLipsTogetherURInput, mouthLipsTogetherUROutput, stat);
	SetAttrAffects(jawOpenInput, mouthLipsTogetherUROutput, stat);
	SetAttrAffects(mouthLipsTogetherDLInput, mouthLipsTogetherDLOutput, stat);
	SetAttrAffects(jawOpenInput, mouthLipsTogetherDLOutput, stat);
	SetAttrAffects(mouthLipsTogetherDRInput, mouthLipsTogetherDROutput, stat);
	SetAttrAffects(jawOpenInput, mouthLipsTogetherDROutput, stat);

	SetAttrAffects(noseWrinkleUpperLInput, noseWrinkleUpperLOutput, stat);
	SetAttrAffects(noseWrinkleLInput, noseWrinkleUpperLOutput, stat);
	SetAttrAffects(noseWrinkleUpperRInput, noseWrinkleUpperROutput, stat);
	SetAttrAffects(noseWrinkleRInput, noseWrinkleUpperROutput, stat);

	SetAttrAffects(eyeBlinkLInput, eyeLidPressLOutput, stat);
	SetAttrAffects(eyeLidPressLInput, eyeLidPressLOutput, stat);
	SetAttrAffects(eyeBlinkRInput, eyeLidPressROutput, stat);
	SetAttrAffects(eyeLidPressRInput, eyeLidPressROutput, stat);


	SetAttrAffects(browRaiseInLInput, brow_raise_L, stat);
	SetAttrAffects(browRaiseOuterLInput, brow_raise_L, stat);
	SetAttrAffects(browRaiseInRInput, brow_raise_R, stat);
	SetAttrAffects(browRaiseOuterRInput, brow_raise_R, stat);

	SetAttrAffects(browDownLInput, Bdown_Blateral__browLower_L, stat);
	SetAttrAffects(browLateralLInput, Bdown_Blateral__browLower_L, stat);
	SetAttrAffects(browDownRInput, Bdown_Blateral__browLower_R, stat);
	SetAttrAffects(browLateralRInput, Bdown_Blateral__browLower_R, stat);


	SetAttrAffects(browRaiseInLInput, BraiseIn_Bdown__browInnerRaise_L, stat);
	SetAttrAffects(browDownLInput, BraiseIn_Bdown__browInnerRaise_L, stat);
	SetAttrAffects(browRaiseInRInput, BraiseIn_Bdown__browInnerRaise_R, stat);
	SetAttrAffects(browDownRInput, BraiseIn_Bdown__browInnerRaise_R, stat);

	SetAttrAffects(eyeLookUpLInput, ElookUp_ElookLeft_L, stat);
	SetAttrAffects(eyeLookLeftLInput, ElookUp_ElookLeft_L, stat);
	SetAttrAffects(eyeLookUpRInput, ElookUp_ElookLeft_R, stat);
	SetAttrAffects(eyeLookLeftRInput, ElookUp_ElookLeft_R, stat);

	SetAttrAffects(eyeLookDownLInput, ElookDown_ElookLeft_L, stat);
	SetAttrAffects(eyeLookLeftLInput, ElookDown_ElookLeft_L, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_ElookLeft_R, stat);
	SetAttrAffects(eyeLookLeftRInput, ElookDown_ElookLeft_R, stat);

	SetAttrAffects(eyeLookUpLInput, ElookUp_ElookRight_L, stat);
	SetAttrAffects(eyeLookRightLInput, ElookUp_ElookRight_L, stat);
	SetAttrAffects(eyeLookUpRInput, ElookUp_ElookRight_R, stat);
	SetAttrAffects(eyeLookRightRInput, ElookUp_ElookRight_R, stat);

	SetAttrAffects(eyeLookDownLInput, ElookDown_ElookRight_L, stat);
	SetAttrAffects(eyeLookRightLInput, ElookDown_ElookRight_L, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_ElookRight_R, stat);
	SetAttrAffects(eyeLookRightRInput, ElookDown_ElookRight_R, stat);

	SetAttrAffects(eyeBlinkLInput, EsquintInner_Eblink_L, stat);
	SetAttrAffects(eyeSquintInnerLInput, EsquintInner_Eblink_L, stat);
	SetAttrAffects(eyeBlinkRInput, EsquintInner_Eblink_R, stat);
	SetAttrAffects(eyeSquintInnerRInput, EsquintInner_Eblink_R, stat);

	SetAttrAffects(eyeBlinkLInput, EcheekRaise_Eblink_L, stat);
	SetAttrAffects(eyeCheekRaiseLInput, EcheekRaise_Eblink_L, stat);
	SetAttrAffects(eyeBlinkRInput, EcheekRaise_Eblink_R, stat);
	SetAttrAffects(eyeCheekRaiseRInput, EcheekRaise_Eblink_R, stat);

	SetAttrAffects(eyeCheekRaiseLInput, EcheekRaise_EsquintInner_L, stat);
	SetAttrAffects(eyeSquintInnerLInput, EcheekRaise_EsquintInner_L, stat);
	SetAttrAffects(eyeCheekRaiseRInput, EcheekRaise_EsquintInner_R, stat);
	SetAttrAffects(eyeSquintInnerRInput, EcheekRaise_EsquintInner_R, stat);

	SetAttrAffects(eyeBlinkLInput, ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeLookLeftLInput, ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeBlinkRInput, ElookLeft_Eblink_R, stat);
	SetAttrAffects(eyeLookLeftRInput, ElookLeft_Eblink_R, stat);

	SetAttrAffects(eyeBlinkLInput, ElookUp_Eblink_L, stat);
	SetAttrAffects(eyeLookUpLInput, ElookUp_Eblink_L, stat);
	SetAttrAffects(eyeBlinkRInput, ElookUp_Eblink_R, stat);
	SetAttrAffects(eyeLookUpRInput, ElookUp_Eblink_R, stat);

	SetAttrAffects(eyeBlinkLInput, ElookDown_Eblink_L, stat);
	SetAttrAffects(eyeLookDownLInput, ElookDown_Eblink_L, stat);
	SetAttrAffects(eyeBlinkRInput, ElookDown_Eblink_R, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_Eblink_R, stat);

	SetAttrAffects(eyeBlinkLInput, ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeLookRightLInput, ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeBlinkRInput, ElookRight_Eblink_R, stat);
	SetAttrAffects(eyeLookRightRInput, ElookRight_Eblink_R, stat);

	SetAttrAffects(noseWrinkleLInput, nose_wrinkle_cor, stat);
	SetAttrAffects(noseWrinkleRInput, nose_wrinkle_cor, stat);

	SetAttrAffects(noseWrinkleLInput, EcheekRaise_NSwrinkle_L, stat);
	SetAttrAffects(eyeCheekRaiseLInput, EcheekRaise_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleRInput, EcheekRaise_NSwrinkle_R, stat);
	SetAttrAffects(eyeCheekRaiseRInput, EcheekRaise_NSwrinkle_R, stat);

	SetAttrAffects(mouthDimpleLInput, mouth_dimple_cor, stat);
	SetAttrAffects(mouthDimpleRInput, mouth_dimple_cor, stat);

	SetAttrAffects(mouthCornerPullLInput, mouth_cornerPull_cor, stat);
	SetAttrAffects(mouthCornerPullLInput, mouth_cornerPull_cor, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, mouth_upperLipRaise_cor, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, mouth_upperLipRaise_cor, stat);

	SetAttrAffects(mouthStretchLInput, mouth_stretch_cor, stat);
	SetAttrAffects(mouthStretchLInput, mouth_stretch_cor, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, mouth_lowerLipDepress_cor, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, mouth_lowerLipDepress_cor, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mdimple_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, Mdimple_MupperLipRaise_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_MupperLipRaise_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mdimple_MupperLipRaise_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_MupperLipRaise_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mstretch_Mdimple_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mstretch_Mdimple_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, Mdimple_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mdimple_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MsharpCornerPull_L, stat);
	SetAttrAffects(mouthSharpCornerPullLInput, McornerPull_MsharpCornerPull_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MsharpCornerPull_R, stat);
	SetAttrAffects(mouthSharpCornerPullRInput, McornerPull_MsharpCornerPull_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthCornerDepressLInput, MupperLipRaise_McornerDepress_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_McornerDepress_L, stat);
	SetAttrAffects(mouthCornerDepressRInput, MupperLipRaise_McornerDepress_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_McornerDepress_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MupperLipRaise_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mdimple_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Jopen_R, stat);

	SetAttrAffects(mouthCornerDepressLInput, McornerDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerDepress_Jopen_L, stat);
	SetAttrAffects(mouthCornerDepressRInput, McornerDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerDepress_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_Jopen_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MlowerLipDepress_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, MsharpCornerPull_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MsharpCornerPull_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, MsharpCornerPull_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MsharpCornerPull_Jopen_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_Jopen_R, stat);

	SetAttrAffects(jawLeftInput, Jleft_Jopen_cor, stat);
	SetAttrAffects(jawOpenInput, Jleft_Jopen_cor, stat);

	SetAttrAffects(jawRightInput, Jright_Jopen_cor, stat);
	SetAttrAffects(jawOpenInput, Jright_Jopen_cor, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtowards__pucker_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mpurse_Mtowards__pucker_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtowards__pucker_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mpurse_Mtowards__pucker_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtowards__pucker_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mpurse_Mtowards__pucker_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtowards__pucker_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mpurse_Mtowards__pucker_DR, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mpurse_Mfunnel_DR, stat);

	SetAttrAffects(mouthLipsTowardsULInput, Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_Mtowards_DR, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Jopen_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Jopen_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Jopen_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Jopen_DR, stat);

	SetAttrAffects(mouthLipsTowardsULInput, Mtowards_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Mtowards_Jopen_UL, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mtowards_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Mtowards_Jopen_UR, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mtowards_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Mtowards_Jopen_DL, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mtowards_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Mtowards_Jopen_DR, stat);

	SetAttrAffects(mouthFunnelULInput, Mfunnel_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Jopen_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Jopen_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Jopen_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Jopen_DR, stat);

	SetAttrAffects(mouthPressULInput, Mpress_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Mpress_Jopen_UL, stat);
	SetAttrAffects(mouthPressURInput, Mpress_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Mpress_Jopen_UR, stat);
	SetAttrAffects(mouthPressDLInput, Mpress_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Mpress_Jopen_DL, stat);
	SetAttrAffects(mouthPressDRInput, Mpress_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Mpress_Jopen_DR, stat);

	SetAttrAffects(mouthUpperLipBiteLInput, mouth_lipsBite_L, stat);
	SetAttrAffects(mouthLowerLipBiteLInput, mouth_lipsBite_L, stat);
	SetAttrAffects(mouthUpperLipBiteRInput, mouth_lipsBite_R, stat);
	SetAttrAffects(mouthLowerLipBiteRInput, mouth_lipsBite_R, stat);

	SetAttrAffects(mouthUpperLipBiteLInput, MupperLipBite_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MupperLipBite_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipBiteRInput, MupperLipBite_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MupperLipBite_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipBiteLInput, MlowerLipBite_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MlowerLipBite_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipBiteRInput, MlowerLipBite_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MlowerLipBite_Jopen_R, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mpurse_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mpurse_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mpurse_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mpurse_Mtighten_DR, stat);

	SetAttrAffects(mouthLipsTowardsULInput, Mtowards_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mtowards_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mtowards_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mtowards_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mtowards_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mtowards_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mtowards_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mtowards_Mtighten_DR, stat);

	SetAttrAffects(mouthFunnelULInput, Mfunnel_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mfunnel_Mtighten_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mfunnel_Mtighten_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mfunnel_Mtighten_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mfunnel_Mtighten_DR, stat);

	SetAttrAffects(neckStretchLInput, NKstretch_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, NKstretch_Jopen_L, stat);
	SetAttrAffects(neckStretchRInput, NKstretch_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, NKstretch_Jopen_R, stat);

	SetAttrAffects(mouthCheekBlowLInput, cheek_blow_cor, stat);
	SetAttrAffects(mouthCheekBlowRInput, cheek_blow_cor, stat);

	SetAttrAffects(jawChinRaiseDLInput, JlowerChinRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, JlowerChinRaise_Jopen_L, stat);
	SetAttrAffects(jawChinRaiseDRInput, JlowerChinRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, JlowerChinRaise_Jopen_R, stat);

	SetAttrAffects(eyeLookDownLInput, ElookDown_Ewiden_L, stat);
	SetAttrAffects(eyeWidenLInput, ElookDown_Ewiden_L, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_Ewiden_R, stat);
	SetAttrAffects(eyeWidenRInput, ElookDown_Ewiden_R, stat);


	/***********************setAffects for extr3Blend*************************/
	SetAttrAffects(eyeLookUpLInput, ElookUp_ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeLookLeftLInput, ElookUp_ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeBlinkLInput, ElookUp_ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeLookUpRInput, ElookUp_ElookLeft_Eblink_R, stat);
	SetAttrAffects(eyeLookLeftRInput, ElookUp_ElookLeft_Eblink_R, stat);
	SetAttrAffects(eyeBlinkRInput, ElookUp_ElookLeft_Eblink_R, stat);

	SetAttrAffects(eyeLookUpLInput, ElookUp_ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeLookRightLInput, ElookUp_ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeBlinkLInput, ElookUp_ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeLookUpRInput, ElookUp_ElookRight_Eblink_R, stat);
	SetAttrAffects(eyeLookRightRInput, ElookUp_ElookRight_Eblink_R, stat);
	SetAttrAffects(eyeBlinkRInput, ElookUp_ElookRight_Eblink_R, stat);

	SetAttrAffects(eyeLookDownLInput, ElookDown_ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeLookLeftLInput, ElookDown_ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeBlinkLInput, ElookDown_ElookLeft_Eblink_L, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_ElookLeft_Eblink_R, stat);
	SetAttrAffects(eyeLookLeftRInput, ElookDown_ElookLeft_Eblink_R, stat);
	SetAttrAffects(eyeBlinkRInput, ElookDown_ElookLeft_Eblink_R, stat);

	SetAttrAffects(eyeLookDownLInput, ElookDown_ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeLookRightLInput, ElookDown_ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeBlinkLInput, ElookDown_ElookRight_Eblink_L, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_ElookRight_Eblink_R, stat);
	SetAttrAffects(eyeLookRightRInput, ElookDown_ElookRight_Eblink_R, stat);
	SetAttrAffects(eyeBlinkRInput, ElookDown_ElookRight_Eblink_R, stat);

	SetAttrAffects(eyeCheekRaiseLInput, EcheekRaise_EsquintInner_Eblink_L, stat);
	SetAttrAffects(eyeSquintInnerLInput, EcheekRaise_EsquintInner_Eblink_L, stat);
	SetAttrAffects(eyeBlinkLInput, EcheekRaise_EsquintInner_Eblink_L, stat);
	SetAttrAffects(eyeCheekRaiseRInput, EcheekRaise_EsquintInner_Eblink_R, stat);
	SetAttrAffects(eyeSquintInnerRInput, EcheekRaise_EsquintInner_Eblink_R, stat);
	SetAttrAffects(eyeBlinkRInput, EcheekRaise_EsquintInner_Eblink_R, stat);

	SetAttrAffects(mouthFunnelULInput, Mpurse_Mtowards_Mfunnel__oh_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mpurse_Mtowards_Mfunnel__oh_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtowards_Mfunnel__oh_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mpurse_Mtowards_Mfunnel__oh_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mpurse_Mtowards_Mfunnel__oh_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtowards_Mfunnel__oh_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mpurse_Mtowards_Mfunnel__oh_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mpurse_Mtowards_Mfunnel__oh_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtowards_Mfunnel__oh_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mpurse_Mtowards_Mfunnel__oh_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mpurse_Mtowards_Mfunnel__oh_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtowards_Mfunnel__oh_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_MupperLipRaise_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_Mdimple_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mstretch_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_Mdimple_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mstretch_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_MlowerLipDepress_Mdimple_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mstretch_MupperLipRaise_Mdimple_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_MupperLipRaise_MlowerLipDepress__ee_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mstretch_MlowerLipDepress_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_MupperLipRaise_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_MupperLipRaise_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MlowerLipDepress_MupperLipRaise_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_MupperLipRaise_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_MupperLipRaise_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MlowerLipDepress_MupperLipRaise_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MupperLipRaise_Jopen_R, stat);

	SetAttrAffects(mouthDimpleLInput, McornerPull_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mdimple_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mdimple_Jopen_R, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mdimple_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mdimple_Jopen_R, stat);

	SetAttrAffects(mouthDimpleLInput, Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthDimpleRInput, Mstretch_Mdimple_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mdimple_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_Mdimple_Jopen_R, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Jopen__puckerJawOpen_DR, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mfunnel_Jopen_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mpurse_Mfunnel_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mfunnel_Jopen_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mfunnel_Jopen_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mpurse_Mfunnel_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mfunnel_Jopen_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mfunnel_Jopen_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mpurse_Mfunnel_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mfunnel_Jopen_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mfunnel_Jopen_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mpurse_Mfunnel_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mfunnel_Jopen_DR, stat);

	SetAttrAffects(mouthLipsTowardsULInput, Mfunnel_Mtowards_Jopen_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mfunnel_Mtowards_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Mtowards_Jopen_UL, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mfunnel_Mtowards_Jopen_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_Mtowards_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Mtowards_Jopen_UR, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mfunnel_Mtowards_Jopen_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_Mtowards_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Mtowards_Jopen_DL, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mfunnel_Mtowards_Jopen_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_Mtowards_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Mfunnel_Mtowards_Jopen_DR, stat);

	SetAttrAffects(mouthLipsTogetherULInput, MlipsTogether_Mpress_Jopen__mouthSuck_UL, stat);
	SetAttrAffects(mouthPressULInput, MlipsTogether_Mpress_Jopen__mouthSuck_UL, stat);
	SetAttrAffects(jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_UL, stat);
	SetAttrAffects(mouthLipsTogetherURInput, MlipsTogether_Mpress_Jopen__mouthSuck_UR, stat);
	SetAttrAffects(mouthPressURInput, MlipsTogether_Mpress_Jopen__mouthSuck_UR, stat);
	SetAttrAffects(jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_UR, stat);
	SetAttrAffects(mouthLipsTogetherDLInput, MlipsTogether_Mpress_Jopen__mouthSuck_DL, stat);
	SetAttrAffects(mouthPressDLInput, MlipsTogether_Mpress_Jopen__mouthSuck_DL, stat);
	SetAttrAffects(jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_DL, stat);
	SetAttrAffects(mouthLipsTogetherDRInput, MlipsTogether_Mpress_Jopen__mouthSuck_DR, stat);
	SetAttrAffects(mouthPressDRInput, MlipsTogether_Mpress_Jopen__mouthSuck_DR, stat);
	SetAttrAffects(jawOpenInput, MlipsTogether_Mpress_Jopen__mouthSuck_DR, stat);

	SetAttrAffects(mouthUpperLipBiteLInput, MlowerLipBite_MupperLipBite_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipBiteLInput, MlowerLipBite_MupperLipBite_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MlowerLipBite_MupperLipBite_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipBiteRInput, MlowerLipBite_MupperLipBite_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipBiteRInput, MlowerLipBite_MupperLipBite_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MlowerLipBite_MupperLipBite_Jopen_R, stat);

	SetAttrAffects(mouthLipsTowardsULInput, Mpurse_Mtowards_Mtighten__puckerTighten_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtowards_Mtighten__puckerTighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mpurse_Mtowards_Mtighten__puckerTighten_UL, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mpurse_Mtowards_Mtighten__puckerTighten_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtowards_Mtighten__puckerTighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mpurse_Mtowards_Mtighten__puckerTighten_UR, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mpurse_Mtowards_Mtighten__puckerTighten_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtowards_Mtighten__puckerTighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mpurse_Mtowards_Mtighten__puckerTighten_DL, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mpurse_Mtowards_Mtighten__puckerTighten_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtowards_Mtighten__puckerTighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mpurse_Mtowards_Mtighten__puckerTighten_DR, stat);

	SetAttrAffects(mouthFunnelULInput, Mpurse_Mfunnel_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mfunnel_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mpurse_Mfunnel_Mtighten_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mpurse_Mfunnel_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mfunnel_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mpurse_Mfunnel_Mtighten_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mpurse_Mfunnel_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mfunnel_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mpurse_Mfunnel_Mtighten_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mpurse_Mfunnel_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mfunnel_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mpurse_Mfunnel_Mtighten_DR, stat);

	SetAttrAffects(mouthFunnelULInput, Mfunnel_Mtowards_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mfunnel_Mtowards_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mfunnel_Mtowards_Mtighten_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_Mtowards_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mfunnel_Mtowards_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mfunnel_Mtowards_Mtighten_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_Mtowards_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mfunnel_Mtowards_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mfunnel_Mtowards_Mtighten_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_Mtowards_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mfunnel_Mtowards_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mfunnel_Mtowards_Mtighten_DR, stat);

	/***********************setAffects for extr4Blend*************************/
	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mstretch_MupperLipRaise_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MupperLipRaise_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MlowerLipDepress_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MlowerLipDepress_MupperLipRaise_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_Mdimple_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_Mdimple_Jopen_R, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_Mdimple_Jopen_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mstretch_Mdimple_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_Mdimple_Jopen_R, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR, stat);
	SetAttrAffects(jawOpenInput, Mpurse_Mtowards_Mfunnel_Jopen__ohJawOpen_DR, stat);

	SetAttrAffects(mouthLipsPurseULInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UL, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_UR, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DL, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Mpurse_Mtowards_Mfunnel_Mtighten__ohTighten_DR, stat);

	/***********************setAffects for extr5Blend*************************/
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_Jopen_R, stat);


	/////////////////////////////////////////////////for new objects/////////////////////////////////////////////////
	SetAttrAffects(browRaiseInLInput, BraiseIn_Bdown_Blateral_L, stat);
	SetAttrAffects(browDownLInput, BraiseIn_Bdown_Blateral_L, stat);
	SetAttrAffects(browLateralLInput, BraiseIn_Bdown_Blateral_L, stat);
	SetAttrAffects(browRaiseInRInput, BraiseIn_Bdown_Blateral_R, stat);
	SetAttrAffects(browDownRInput, BraiseIn_Bdown_Blateral_R, stat);
	SetAttrAffects(browLateralRInput, BraiseIn_Bdown_Blateral_R, stat);

	SetAttrAffects(browRaiseInLInput, Braise_Ewiden_INL, stat);
	SetAttrAffects(eyeWidenLInput, Braise_Ewiden_INL, stat);
	SetAttrAffects(browRaiseInRInput, Braise_Ewiden_INR, stat);
	SetAttrAffects(eyeWidenRInput, Braise_Ewiden_INR, stat);

	SetAttrAffects(browRaiseOuterLInput, Braise_Ewiden_OUTL, stat);
	SetAttrAffects(eyeWidenLInput, Braise_Ewiden_OUTL, stat);
	SetAttrAffects(browRaiseOuterRInput, Braise_Ewiden_OUTR, stat);
	SetAttrAffects(eyeWidenRInput, Braise_Ewiden_OUTR, stat);

	SetAttrAffects(browRaiseInLInput, Braise_Eblink_INL, stat);
	SetAttrAffects(eyeBlinkLInput, Braise_Eblink_INL, stat);
	SetAttrAffects(browRaiseInRInput, Braise_Eblink_INR, stat);
	SetAttrAffects(eyeBlinkRInput, Braise_Eblink_INR, stat);

	SetAttrAffects(browRaiseOuterLInput, Braise_Eblink_OUTL, stat);
	SetAttrAffects(eyeBlinkLInput, Braise_Eblink_OUTL, stat);
	SetAttrAffects(browRaiseOuterRInput, Braise_Eblink_OUTR, stat);
	SetAttrAffects(eyeBlinkRInput, Braise_Eblink_OUTR, stat);

	SetAttrAffects(browRaiseInLInput, Braise_ElookDown_INL, stat);
	SetAttrAffects(eyeLookDownLInput, Braise_ElookDown_INL, stat);
	SetAttrAffects(browRaiseInRInput, Braise_ElookDown_INR, stat);
	SetAttrAffects(eyeLookDownRInput, Braise_ElookDown_INR, stat);

	SetAttrAffects(browRaiseOuterLInput, Braise_ElookDown_OUTL, stat);
	SetAttrAffects(eyeLookDownLInput, Braise_ElookDown_OUTL, stat);
	SetAttrAffects(browRaiseOuterRInput, Braise_ElookDown_OUTR, stat);
	SetAttrAffects(eyeLookDownRInput, Braise_ElookDown_OUTR, stat);

	SetAttrAffects(eyeFaceScrunchLInput, EfaceScrunch_Eblink_L, stat);
	SetAttrAffects(eyeBlinkLInput, EfaceScrunch_Eblink_L, stat);
	SetAttrAffects(eyeFaceScrunchRInput, EfaceScrunch_Eblink_R, stat);
	SetAttrAffects(eyeBlinkRInput, EfaceScrunch_Eblink_R, stat);

	SetAttrAffects(eyeLookDownLInput, ElookDown_Ewiden_L, stat);
	SetAttrAffects(eyeWidenLInput, ElookDown_Ewiden_L, stat);
	SetAttrAffects(eyeLookDownRInput, ElookDown_Ewiden_R, stat);
	SetAttrAffects(eyeWidenRInput, ElookDown_Ewiden_R, stat);

	SetAttrAffects(noseWrinkleLInput, NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleRInput, NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthCheekBlowLInput, Cblow_MlipsBlow_L, stat);
	SetAttrAffects(mouthLipsBlowLInput, Cblow_MlipsBlow_L, stat);
	SetAttrAffects(mouthCheekBlowRInput, Cblow_MlipsBlow_R, stat);
	SetAttrAffects(mouthLipsBlowRInput, Cblow_MlipsBlow_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MupperLipRaise_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_MlowerLipDepress_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MstretchLipsClose_L, stat);
	SetAttrAffects(mouthStretchLipsCloseLInput, Mstretch_MstretchLipsClose_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MstretchLipsClose_R, stat);
	SetAttrAffects(mouthStretchLipsCloseRInput, Mstretch_MstretchLipsClose_R, stat);

	SetAttrAffects(mouthCornerPullLOutput, McornerPull_Mstretch_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullROutput, McornerPull_Mstretch_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MlowerLipDepress_Jopen_R, stat);

	SetAttrAffects(mouthFunnelULInput, Mfunnel_MupperLipRaise_UL, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mfunnel_MupperLipRaise_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_MupperLipRaise_UR, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mfunnel_MupperLipRaise_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_MupperLipRaise_DL, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mfunnel_MupperLipRaise_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_MupperLipRaise_DR, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mfunnel_MupperLipRaise_DR, stat);

	SetAttrAffects(mouthFunnelULInput, Mfunnel_MlowerLipDepress_UL, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mfunnel_MlowerLipDepress_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_MlowerLipDepress_UR, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mfunnel_MlowerLipDepress_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_MlowerLipDepress_DL, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mfunnel_MlowerLipDepress_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_MlowerLipDepress_DR, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mfunnel_MlowerLipDepress_DR, stat);

	SetAttrAffects(mouthFunnelULInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UL, stat);
	SetAttrAffects(mouthFunnelURInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_UR, stat);
	SetAttrAffects(mouthFunnelDLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DL, stat);
	SetAttrAffects(mouthFunnelDRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mfunnel_MupperLipRaise_MlowerLipDepress__funnelWide_DR, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, MupperLipRaise_NSwrinkle_R, stat);

	SetAttrAffects(mouthCornerDepressLInput, McornerDepress_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerDepress_NSwrinkle_L, stat);
	SetAttrAffects(mouthCornerDepressRInput, McornerDepress_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerDepress_NSwrinkle_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_NSwrinkle_McornerDepress_L, stat);
	SetAttrAffects(noseWrinkleLInput, MupperLipRaise_NSwrinkle_McornerDepress_L, stat);
	SetAttrAffects(mouthCornerDepressLInput, MupperLipRaise_NSwrinkle_McornerDepress_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_NSwrinkle_McornerDepress_R, stat);
	SetAttrAffects(noseWrinkleRInput, MupperLipRaise_NSwrinkle_McornerDepress_R, stat);
	SetAttrAffects(mouthCornerDepressRInput, MupperLipRaise_NSwrinkle_McornerDepress_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_McornerDepress_Jopen_L, stat);
	SetAttrAffects(mouthCornerDepressLInput, MupperLipRaise_McornerDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_McornerDepress_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_McornerDepress_Jopen_R, stat);
	SetAttrAffects(mouthCornerDepressRInput, MupperLipRaise_McornerDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_McornerDepress_Jopen_R, stat);

	SetAttrAffects(mouthCornerDepressLInput, McornerDepress_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerDepress_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerDepress_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthCornerDepressRInput, McornerDepress_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerDepress_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerDepress_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L, stat);
	SetAttrAffects(mouthCornerDepressLInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R, stat);
	SetAttrAffects(mouthCornerDepressRInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, MupperLipRaise_NSwrinkle_McornerDepress_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MupperLipRaise_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MupperLipRaise_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, McornerPull_Mpurse_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, McornerPull_Mpurse_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, McornerPull_Mpurse_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, McornerPull_Mpurse_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, McornerPull_Mtowards_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, McornerPull_Mtowards_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, McornerPull_Mtowards_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mtowards_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, McornerPull_Mtowards_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, McornerPull_Mfunnel_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, McornerPull_Mfunnel_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, McornerPull_Mfunnel_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, McornerPull_Mfunnel_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, McornerPull_Mpurse_Mtowards__cornerPullPucker_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, McornerPull_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, McornerPull_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, McornerPull_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, McornerPull_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, McornerPull_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, McornerPull_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, McornerPull_Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, McornerPull_Mpurse_Mfunnel_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthFunnelULInput, McornerPull_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, McornerPull_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthFunnelURInput, McornerPull_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, McornerPull_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, McornerPull_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, McornerPull_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, McornerPull_Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, McornerPull_Mfunnel_Mtowards_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL, stat);
	SetAttrAffects(mouthFunnelULInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR, stat);
	SetAttrAffects(mouthFunnelURInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_UR, stat);
	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DL, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, McornerPull_Mpurse_Mtowards_Mfunnel__cornerPullOh_DR, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, MupperLipRaise_Mtighten_UL, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, MupperLipRaise_Mtighten_UR, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, MupperLipRaise_Mtighten_DL, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, MupperLipRaise_Mtighten_DR, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, MlowerLipDepress_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, MlowerLipDepress_Mtighten_UL, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MlowerLipDepress_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, MlowerLipDepress_Mtighten_UR, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, MlowerLipDepress_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, MlowerLipDepress_Mtighten_DL, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MlowerLipDepress_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, MlowerLipDepress_Mtighten_DR, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_MlowerLipDepress_Mtighten_UL, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, MupperLipRaise_MlowerLipDepress_Mtighten_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, MupperLipRaise_MlowerLipDepress_Mtighten_UL, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_MlowerLipDepress_Mtighten_UR, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MupperLipRaise_MlowerLipDepress_Mtighten_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, MupperLipRaise_MlowerLipDepress_Mtighten_UR, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_MlowerLipDepress_Mtighten_DL, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, MupperLipRaise_MlowerLipDepress_Mtighten_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, MupperLipRaise_MlowerLipDepress_Mtighten_DL, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_MlowerLipDepress_Mtighten_DR, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MupperLipRaise_MlowerLipDepress_Mtighten_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, MupperLipRaise_MlowerLipDepress_Mtighten_DR, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_EcheekRaise_L, stat);
	SetAttrAffects(eyeCheekRaiseLInput, McornerPull_EcheekRaise_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_EcheekRaise_R, stat);
	SetAttrAffects(eyeCheekRaiseRInput, McornerPull_EcheekRaise_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_JlowerChinRaise_L, stat);
	SetAttrAffects(jawChinRaiseDLInput, Mstretch_JlowerChinRaise_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_JlowerChinRaise_R, stat);
	SetAttrAffects(jawChinRaiseDRInput, Mstretch_JlowerChinRaise_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_NSwrinkle_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_NSwrinkle_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_MupperLipRaise_NSwrinkle_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_MupperLipRaise_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_NSdepress_L, stat);
	SetAttrAffects(noseWrinkleLInput, Mstretch_NSdepress_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_NSdepress_R, stat);
	SetAttrAffects(noseWrinkleRInput, Mstretch_NSdepress_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mstretch_Mpurse_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mstretch_Mpurse_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mstretch_Mpurse_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mstretch_Mpurse_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mstretch_Mtowards_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mstretch_Mtowards_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mstretch_Mtowards_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mtowards_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mstretch_Mtowards_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mstretch_Mfunnel_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mstretch_Mfunnel_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mstretch_Mfunnel_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mstretch_Mfunnel_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mstretch_Mpurse_Mtowards__mouthStretchPucker_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mstretch_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mstretch_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mstretch_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mstretch_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mstretch_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mstretch_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mstretch_Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mstretch_Mpurse_Mfunnel_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mstretch_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mstretch_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mstretch_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mstretch_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mstretch_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mstretch_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mstretch_Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mstretch_Mfunnel_Mtowards_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_UR, stat);
	SetAttrAffects(mouthStretchLInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DL, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mstretch_Mpurse_Mtowards_Mfunnel__mouthStretchOh_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mdimple_Mpurse_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mdimple_Mpurse_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mdimple_Mpurse_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mdimple_Mpurse_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mdimple_Mtowards_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mdimple_Mtowards_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mdimple_Mtowards_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mtowards_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mdimple_Mtowards_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mdimple_Mfunnel_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mdimple_Mfunnel_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mdimple_Mfunnel_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mdimple_Mfunnel_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_Mtowards__dimplePucker_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mdimple_Mpurse_Mtowards__dimplePucker_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mdimple_Mpurse_Mtowards__dimplePucker_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_Mtowards__dimplePucker_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mdimple_Mpurse_Mtowards__dimplePucker_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mdimple_Mpurse_Mtowards__dimplePucker_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_Mtowards__dimplePucker_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mdimple_Mpurse_Mtowards__dimplePucker_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mdimple_Mpurse_Mtowards__dimplePucker_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_Mtowards__dimplePucker_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mdimple_Mpurse_Mtowards__dimplePucker_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mdimple_Mpurse_Mtowards__dimplePucker_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mdimple_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mdimple_Mpurse_Mfunnel_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mdimple_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mdimple_Mpurse_Mfunnel_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mdimple_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mdimple_Mpurse_Mfunnel_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mdimple_Mpurse_Mfunnel_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mdimple_Mpurse_Mfunnel_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mdimple_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mdimple_Mfunnel_Mtowards_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mdimple_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mdimple_Mfunnel_Mtowards_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mdimple_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mdimple_Mfunnel_Mtowards_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mdimple_Mfunnel_Mtowards_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mdimple_Mfunnel_Mtowards_DR, stat);

	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL, stat);
	SetAttrAffects(mouthLipsPurseULInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL, stat);
	SetAttrAffects(mouthLipsTowardsULInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL, stat);
	SetAttrAffects(mouthFunnelULInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR, stat);
	SetAttrAffects(mouthLipsPurseURInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR, stat);
	SetAttrAffects(mouthLipsTowardsURInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR, stat);
	SetAttrAffects(mouthFunnelURInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_UR, stat);
	SetAttrAffects(mouthDimpleLInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL, stat);
	SetAttrAffects(mouthLipsPurseDLInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL, stat);
	SetAttrAffects(mouthLipsTowardsDLInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL, stat);
	SetAttrAffects(mouthFunnelDLInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DL, stat);
	SetAttrAffects(mouthDimpleRInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR, stat);
	SetAttrAffects(mouthLipsPurseDRInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR, stat);
	SetAttrAffects(mouthLipsTowardsDRInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR, stat);
	SetAttrAffects(mouthFunnelDRInput, Mdimple_Mpurse_Mtowards_Mfunnel__dimpleOh_DR, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MlowerLipDepress_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MlowerLipDepress_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MlowerLipDepress_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, Mstretch_NSwrinkle_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, Mstretch_NSwrinkle_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, Mstretch_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_NSwrinkle_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthDimpleLInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_R, stat);
	SetAttrAffects(mouthDimpleRInput, McornerPull_Mstretch_MlowerLipDepress_Mdimple_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_NSwrinkle_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_Mstretch_NSwrinkle_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_NSwrinkle_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_Mstretch_NSwrinkle_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, Mstretch_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, Mstretch_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_Mstretch_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_Mstretch_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(noseWrinkleLInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(noseWrinkleRInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, McornerPull_Mstretch_MupperLipRaise_NSwrinkle_Jopen_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_JopenExtreme_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_JopenExtreme_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, MupperLipRaise_JopenExtreme_R, stat);

	SetAttrAffects(mouthLowerLipDepressLInput, MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, MlowerLipDepress_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_MupperLipRaise_JopenExtreme_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_MupperLipRaise_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_MlowerLipDepress_JopenExtreme_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_MlowerLipDepress_JopenExtreme_R, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_MlowerLipDepress_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);

	SetAttrAffects(mouthStretchLInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchRInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, Mstretch_MlowerLipDepress_MupperLipRaise_JopenExtreme_R, stat);

	SetAttrAffects(mouthCornerPullLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthStretchLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthUpperLipRaiseLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthLowerLipDepressLInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_L, stat);
	SetAttrAffects(mouthCornerPullRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthStretchRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(mouthLowerLipDepressRInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);
	SetAttrAffects(jawOpenExtremeInput, McornerPull_Mstretch_MupperLipRaise_MlowerLipDepress_JopenExtreme_R, stat);

	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Jleft_MlipsTogether_UL, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Jleft_MlipsTogether_UR, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Jleft_MlipsTogether_DL, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Jleft_MlipsTogether_DR, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Jright_MlipsTogether_UL, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Jright_MlipsTogether_UR, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Jright_MlipsTogether_DL, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Jright_MlipsTogether_DR, stat);

	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Jleft_MlipsTogether_UL, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Jleft_MlipsTogether_UR, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Jleft_MlipsTogether_DL, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Jleft_MlipsTogether_DR, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_UL, stat);
	SetAttrAffects(mouthLipsTightenULInput, Jright_MlipsTogether_UL, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_UR, stat);
	SetAttrAffects(mouthLipsTightenURInput, Jright_MlipsTogether_UR, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_DL, stat);
	SetAttrAffects(mouthLipsTightenDLInput, Jright_MlipsTogether_DL, stat);
	SetAttrAffects(jawRightInput, Jright_MlipsTogether_DR, stat);
	SetAttrAffects(mouthLipsTightenDRInput, Jright_MlipsTogether_DR, stat);

	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_Jopen_UL, stat);
	SetAttrAffects(mouthLipsTogetherULInput, Jleft_MlipsTogether_Jopen_UL, stat);
	SetAttrAffects(jawOpenInput, Jleft_MlipsTogether_Jopen_UL, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_Jopen_UR, stat);
	SetAttrAffects(mouthLipsTogetherURInput, Jleft_MlipsTogether_Jopen_UR, stat);
	SetAttrAffects(jawOpenInput, Jleft_MlipsTogether_Jopen_UR, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_Jopen_DL, stat);
	SetAttrAffects(mouthLipsTogetherDLInput, Jleft_MlipsTogether_Jopen_DL, stat);
	SetAttrAffects(jawOpenInput, Jleft_MlipsTogether_Jopen_DL, stat);
	SetAttrAffects(jawLeftInput, Jleft_MlipsTogether_Jopen_DR, stat);
	SetAttrAffects(mouthLipsTogetherDRInput, Jleft_MlipsTogether_Jopen_DR, stat);
	SetAttrAffects(jawOpenInput, Jleft_MlipsTogether_Jopen_DR, stat);

	SetAttrAffects(mouthUpperLipRaiseLInput, JlowerChinRaise_MupperLipRaise_L, stat);
	SetAttrAffects(jawChinRaiseDLInput, JlowerChinRaise_MupperLipRaise_L, stat);
	SetAttrAffects(mouthUpperLipRaiseRInput, JlowerChinRaise_MupperLipRaise_R, stat);
	SetAttrAffects(jawChinRaiseDRInput, JlowerChinRaise_MupperLipRaise_R, stat);

	SetAttrAffects(neckStretchLInput, NKstretch_Mstretch_L, stat);
	SetAttrAffects(mouthStretchLInput, NKstretch_Mstretch_L, stat);
	SetAttrAffects(neckStretchRInput, NKstretch_Mstretch_R, stat);
	SetAttrAffects(mouthStretchRInput, NKstretch_Mstretch_R, stat);

	SetAttrAffects(neckStretchLInput, NKstretch_Mstretch_Jopen_L, stat);
	SetAttrAffects(mouthStretchLInput, NKstretch_Mstretch_Jopen_L, stat);
	SetAttrAffects(jawOpenInput, NKstretch_Mstretch_Jopen_L, stat);
	SetAttrAffects(neckStretchRInput, NKstretch_Mstretch_Jopen_R, stat);
	SetAttrAffects(mouthStretchRInput, NKstretch_Mstretch_Jopen_R, stat);
	SetAttrAffects(jawOpenInput, NKstretch_Mstretch_Jopen_R, stat);

	return MS::kSuccess;
}

MStatus zjhFaceBSBlender::InitialAndAddAttrForExtrOut(MObject& obj, MString longname, MString shortname, MFnNumericAttribute& nAttr, MStatus stat)
{
	obj = nAttr.create(longname, shortname, MFnNumericData::kDouble, 0.0);
	nAttr.setKeyable(false); nAttr.setReadable(true);
	stat = addAttribute(obj);
	if (!stat) { stat.perror("addAttribute"); return stat; }
	else { return MStatus::kSuccess; }
}

MStatus zjhFaceBSBlender::SetAttrAffects(MObject& inobj, MObject& outobj, MStatus stat)
{
	stat = attributeAffects(inobj, outobj);
	if (!stat) { stat.perror("attributeAffects"); return stat; }
	else { return MStatus::kSuccess; }
}

void zjhFaceBSBlender::Execute1(const MPlug& plug, MDataBlock& data, MObject& inobj, MObject& outobj, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData = data.inputValue(inobj, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result = inputData.asDouble();
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

void zjhFaceBSBlender::Execute2(const MPlug& plug, MDataBlock& data, MObject& inobj1, MObject& inobj2, MObject& outobj, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData1 = data.inputValue(inobj1, &returnStatus);
		MDataHandle inputData2 = data.inputValue(inobj2, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result1 = inputData1.asDouble();
			double result2 = inputData2.asDouble();
			double result = result1*result2;
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

void zjhFaceBSBlender::Execute3(const MPlug& plug, MDataBlock& data, MObject& inobj1, MObject& inobj2, MObject& inobj3, MObject& outobj, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData1 = data.inputValue(inobj1, &returnStatus);
		MDataHandle inputData2 = data.inputValue(inobj2, &returnStatus);
		MDataHandle inputData3 = data.inputValue(inobj3, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result1 = inputData1.asDouble();
			double result2 = inputData2.asDouble();
			double result3 = inputData3.asDouble();
			double result = result1*result2*result3;
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

void zjhFaceBSBlender::Execute4(const MPlug& plug, MDataBlock& data, MObject& inobj1, MObject& inobj2, MObject& inobj3, MObject& inobj4, MObject& outobj, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData1 = data.inputValue(inobj1, &returnStatus);
		MDataHandle inputData2 = data.inputValue(inobj2, &returnStatus);
		MDataHandle inputData3 = data.inputValue(inobj3, &returnStatus);
		MDataHandle inputData4 = data.inputValue(inobj4, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result1 = inputData1.asDouble();
			double result2 = inputData2.asDouble();
			double result3 = inputData3.asDouble();
			double result4 = inputData4.asDouble();
			double result = result1*result2*result3*result4;
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

void zjhFaceBSBlender::Execute5(const MPlug& plug, MDataBlock& data, MObject& inobj1, MObject& inobj2, MObject& inobj3, MObject& inobj4, MObject& inobj5, MObject& outobj, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData1 = data.inputValue(inobj1, &returnStatus);
		MDataHandle inputData2 = data.inputValue(inobj2, &returnStatus);
		MDataHandle inputData3 = data.inputValue(inobj3, &returnStatus);
		MDataHandle inputData4 = data.inputValue(inobj4, &returnStatus);
		MDataHandle inputData5 = data.inputValue(inobj5, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result1 = inputData1.asDouble();
			double result2 = inputData2.asDouble();
			double result3 = inputData3.asDouble();
			double result4 = inputData4.asDouble();
			double result5 = inputData5.asDouble();
			double result = result1*result2*result3*result4*result5;
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

void zjhFaceBSBlender::Execute2(const MPlug& plug, MDataBlock& data, MObject& inobj1, MObject& inobj2, MObject& outobj, float mult, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData1 = data.inputValue(inobj1, &returnStatus);
		MDataHandle inputData2 = data.inputValue(inobj2, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result1 = inputData1.asDouble();
			double result2 = inputData2.asDouble();
			result2 = Clamp(result2 * mult, 0, 1);
			double result = result1*result2;
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

void zjhFaceBSBlender::Execute3(const MPlug& plug, MDataBlock& data, MObject& inobj1, MObject& inobj2, MObject& inobj3, MObject& outobj, float mult, MStatus returnStatus)
{
	if (plug == outobj)
	{
		MDataHandle inputData1 = data.inputValue(inobj1, &returnStatus);
		MDataHandle inputData2 = data.inputValue(inobj2, &returnStatus);
		MDataHandle inputData3 = data.inputValue(inobj3, &returnStatus);
		if (returnStatus != MS::kSuccess)MGlobal::displayError("Node zjhFaceBSBlender cannot get value");
		else
		{
			double result1 = inputData1.asDouble();
			double result2 = inputData2.asDouble();
			double result3 = inputData3.asDouble();
			result3 = Clamp(result3*mult, 0, 1);
			double result = result1*result2*result3;
			MDataHandle outputHandle = data.outputValue(outobj);
			outputHandle.set(result);
			data.setClean(plug);
		}
	}
}

