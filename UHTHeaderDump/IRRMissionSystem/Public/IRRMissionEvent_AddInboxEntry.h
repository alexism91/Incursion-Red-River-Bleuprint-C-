#pragma once
#include "CoreMinimal.h"
#include "IRRMissionEvent.h"
#include "IRRMissionEvent_AddInboxEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_AddInboxEntry : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> CompletionMessages;
    
    UIRRMissionEvent_AddInboxEntry();

};

