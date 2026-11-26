#pragma once
#include "CoreMinimal.h"
#include "ETextureGatherMode.generated.h"

UENUM(BlueprintType)
enum ETextureGatherMode {
    TGM_None,
    TGM_Red,
    TGM_Green,
    TGM_Blue,
    TGM_Alpha,
};

