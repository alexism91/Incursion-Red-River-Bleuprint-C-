#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EnemyActionSelector.h"
#include "UPSEnemyActionsPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PATROLACTIONSYSTEM_API UUPSEnemyActionsPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyActionSelector> EnemyActions;
    
    UUPSEnemyActionsPreset();

};

