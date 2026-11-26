#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PatrolPointLink.generated.h"

class AUPSPatrolPoint;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FPatrolPointLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSPatrolPoint* PatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LinkTag;
    
    FPatrolPointLink();
};

