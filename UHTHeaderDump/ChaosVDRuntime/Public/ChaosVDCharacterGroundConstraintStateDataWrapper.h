#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDCharacterGroundConstraintStateDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCharacterGroundConstraintStateDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SolverAppliedForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SolverAppliedTorque;
    
    CHAOSVDRUNTIME_API FChaosVDCharacterGroundConstraintStateDataWrapper();
};

