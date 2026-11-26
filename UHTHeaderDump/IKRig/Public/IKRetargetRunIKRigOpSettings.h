#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "IKRetargetRunIKRigOpSettings.generated.h"

class UIKRigDefinition;

USTRUCT(BlueprintType)
struct FIKRetargetRunIKRigOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRigDefinition* IKRigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawGoalBoneLocations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GoalDrawSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GoalDrawThickness;
    
    IKRIG_API FIKRetargetRunIKRigOpSettings();
};

