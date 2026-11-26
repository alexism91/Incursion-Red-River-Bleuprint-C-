#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightingChannels -FallbackName=LightingChannels
#include "ContainerItem.h"
#include "IRRTacticalAttachmentOption.h"
#include "PickUpInterface.generated.h"

class UItemAction;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UPickUpInterface : public UInterface {
    GENERATED_BODY()
};

class IPickUpInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerShowMagCapacity(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerIsEquipped(bool bIsEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSupportedLightingChannels(FLightingChannels NewLightingChannels);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareSnap(bool bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FIRRTacticalAttachmentOption> GetTacticalAttachmentOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetRootOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetRootComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteItemAction(FContainerItem Item, UItemAction* Action);
    
};

