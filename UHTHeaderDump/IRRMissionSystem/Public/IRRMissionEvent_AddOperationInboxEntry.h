#pragma once
#include "CoreMinimal.h"
#include "IRRMissionEvent.h"
#include "IRRMissionEvent_AddOperationInboxEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_AddOperationInboxEntry : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> CompletionMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyXPAndFactionDirectly;
    
    UIRRMissionEvent_AddOperationInboxEntry();

};

