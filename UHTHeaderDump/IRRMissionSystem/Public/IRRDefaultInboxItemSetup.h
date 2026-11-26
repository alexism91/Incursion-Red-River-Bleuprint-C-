#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItem -FallbackName=DefaultItem
#include "IRRMissionBriefing.h"
#include "IRRDefaultInboxItemSetup.generated.h"

class UIRRAgentSetup;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRDefaultInboxItemSetup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRAgentSetup> Agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing Briefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultItem> RewardItems;
    
    UIRRDefaultInboxItemSetup();

};

