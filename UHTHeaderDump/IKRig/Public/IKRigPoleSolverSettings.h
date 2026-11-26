#pragma once
#include "CoreMinimal.h"
#include "IKRigSolverSettingsBase.h"
#include "IKRigPoleSolverSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRigPoleSolverSettings : public FIKRigSolverSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimAtGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    IKRIG_API FIKRigPoleSolverSettings();
};

