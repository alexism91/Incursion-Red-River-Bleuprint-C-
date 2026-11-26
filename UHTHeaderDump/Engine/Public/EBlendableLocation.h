#pragma once
#include "CoreMinimal.h"
#include "EBlendableLocation.generated.h"

UENUM(BlueprintType)
enum EBlendableLocation {
    BL_SceneColorBeforeDOF = 2,
    BL_SceneColorAfterDOF = 1,
    BL_TranslucencyAfterDOF = 5,
    BL_SSRInput = 4,
    BL_SceneColorBeforeBloom = 6,
    BL_ReplacingTonemapper = 3,
    BL_SceneColorAfterTonemapping = 0,
    BL_BeforeTranslucency = BL_SceneColorBeforeDOF,
    BL_BeforeTonemapping = BL_SceneColorAfterDOF,
    BL_AfterTonemapping = BL_SceneColorAfterTonemapping,
};

