#pragma once
#include "CoreMinimal.h"
#include "IRRMissionGraphNode.h"
#include "IRRMissionGraphNode_Stage.generated.h"

class UIRRMissionSetup;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionGraphNode_Stage : public UIRRMissionGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRMissionSetup* MissionSetup;
    
    UIRRMissionGraphNode_Stage();

};

