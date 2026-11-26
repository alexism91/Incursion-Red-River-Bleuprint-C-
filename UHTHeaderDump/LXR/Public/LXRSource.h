#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ELightState.h"
#include "LXRSource.generated.h"

class AActor;
class ULightComponent;

UINTERFACE(Blueprintable)
class ULXRSource : public UInterface {
    GENERATED_BODY()
};

class ILXRSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLightComponentEnabled(const ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<ULightComponent*> GetMyLightComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELightState GetLightComponentState(const ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELightState GetLightActorState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELightState GetIsLightLodEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetIgnoreVisibilityActors();
    
};

