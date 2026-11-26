#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "StateTreeIndex16.h"
#include "StateTreeTransitionIdToIndex.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeTransitionIdToIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 Index;
    
    STATETREEMODULE_API FStateTreeTransitionIdToIndex();
};

