#pragma once
#include "CoreMinimal.h"
#include "IRRMissionEvent.h"
#include "IRRMissionEvent_FailMission.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_FailMission : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UIRRMissionEvent_FailMission();

};

