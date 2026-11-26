#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetPinBoneOpSettings.h"
#include "IKRetargetPinBoneController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetPinBoneController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetPinBoneController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetPinBoneOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetBonePair(const FName InBoneToCopyFrom, const FName InBoneToCopyTo);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetPinBoneOpSettings GetSettings();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FName> GetAllBonePairs();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllBonePairs();
    
};

