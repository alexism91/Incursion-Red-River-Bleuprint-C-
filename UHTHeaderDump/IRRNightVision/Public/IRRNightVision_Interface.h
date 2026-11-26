#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IRRNightVision_Interface.generated.h"

UINTERFACE(Blueprintable)
class UIRRNightVision_Interface : public UInterface {
    GENERATED_BODY()
};

class IIRRNightVision_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInfraredEnabledForPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInfraredDisabledForPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInfraredModeOnForDevice();
    
};

