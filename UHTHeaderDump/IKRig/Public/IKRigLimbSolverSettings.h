#pragma once
#include "CoreMinimal.h"
#include "LimbSolverSettings.h"
#include "IKRigLimbSolverSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRigLimbSolverSettings : public FLimbSolverSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GoalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndBone;
    
    IKRIG_API FIKRigLimbSolverSettings();
};

