#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EInteractionMarkerAnimationType.h"
#include "InteractionMarkerDisplaySetting.h"
#include "InteractionWidgetInterface.generated.h"

class UInteractionTarget;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractionWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractionWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTargetText(UInteractionTarget* NewInteractionTarget, const FText& NewInteractionText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTargetMarkerProgress(float NewProgressValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTargetMarkerOpacity(float NewOpacityAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTargetMarker(FInteractionMarkerDisplaySetting NewInteractionMarkerDisplaySetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerInteractionMarkerAnimation(EInteractionMarkerAnimationType InteractionMarkerAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTargetMarkerProgress();
    
};

