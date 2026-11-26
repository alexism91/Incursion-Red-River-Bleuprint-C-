#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RetargetProfile.h"
#include "RetargetProfileLibrary.generated.h"

class UIKRetargetOpControllerBase;
class UIKRetargeter;

UCLASS(Blueprintable)
class URetargetProfileLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URetargetProfileLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIKRetargetOpControllerBase* GetOpControllerFromRetargetProfile(UPARAM(Ref) FRetargetProfile& InRetargetProfile, const FName InRetargetOpName);
    
    UFUNCTION(BlueprintCallable)
    static FRetargetProfile CopyRetargetProfileFromRetargetAsset(const UIKRetargeter* InRetargetAsset);
    
};

