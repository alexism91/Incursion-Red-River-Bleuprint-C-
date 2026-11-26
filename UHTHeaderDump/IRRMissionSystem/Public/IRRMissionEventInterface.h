#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRMissionEventPayload.h"
#include "IRRMissionEventInterface.generated.h"

class AActor;
class UIRRMissionData;
class UIRRTargetData;

UINTERFACE(Blueprintable)
class UIRRMissionEventInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRMissionEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveMessageFromWorldEvent(FGameplayTag MessageTag, UIRRMissionData* MissionData, FIRRMissionEventPayload Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveMessageFromMissionEvent(FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Receiver);
    
};

