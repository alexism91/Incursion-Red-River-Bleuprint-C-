#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRMissionEvent.h"
#include "IRRMissionEventPayload.h"
#include "IRRMissionEvent_SendWorldEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_SendWorldEvent : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag MessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRMissionEventPayload Payload;
    
    UIRRMissionEvent_SendWorldEvent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

