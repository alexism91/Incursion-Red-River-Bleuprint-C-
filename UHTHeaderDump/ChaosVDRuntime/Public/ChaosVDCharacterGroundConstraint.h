#pragma once
#include "CoreMinimal.h"
#include "ChaosVDCharacterGroundConstraintDataDataWrapper.h"
#include "ChaosVDCharacterGroundConstraintSettingsDataWrapper.h"
#include "ChaosVDCharacterGroundConstraintStateDataWrapper.h"
#include "ChaosVDConstraintDataWrapperBase.h"
#include "ChaosVDCharacterGroundConstraint.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCharacterGroundConstraint : public FChaosVDConstraintDataWrapperBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstraintIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDCharacterGroundConstraintStateDataWrapper State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDCharacterGroundConstraintSettingsDataWrapper Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDCharacterGroundConstraintDataDataWrapper Data;
    
    CHAOSVDRUNTIME_API FChaosVDCharacterGroundConstraint();
};

