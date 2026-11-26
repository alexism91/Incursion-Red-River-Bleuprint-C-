#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRMissionEvent.h"
#include "IRRMissionEventPayload.h"
#include "IRRMissionEvent_SendMissionEvent.generated.h"

class UIRRTargetData;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_SendMissionEvent : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag MessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UIRRTargetData* TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRMissionEventPayload Payload;
    
    UIRRMissionEvent_SendMissionEvent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

