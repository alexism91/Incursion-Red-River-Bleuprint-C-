#pragma once
#include "CoreMinimal.h"
#include "StateTreeEnumValueScorePair.h"
#include "StateTreeEnumValueScorePairs.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEnumValueScorePairs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeEnumValueScorePair> Data;
    
    STATETREEMODULE_API FStateTreeEnumValueScorePairs();
};

