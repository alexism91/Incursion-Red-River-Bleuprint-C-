#pragma once
#include "CoreMinimal.h"
#include "EFractureBrickBondEnum.generated.h"

UENUM(BlueprintType)
enum class EFractureBrickBondEnum : uint8 {
    Dataflow_FractureBrickBond_Stretcher,
    Dataflow_FractureBrickBond_Stack,
    Dataflow_FractureBrickBond_English,
    Dataflow_FractureBrickBond_Header,
    Dataflow_FractureBrickBond_Flemish,
};

