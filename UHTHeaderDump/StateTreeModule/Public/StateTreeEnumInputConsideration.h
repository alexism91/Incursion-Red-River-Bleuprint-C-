#pragma once
#include "CoreMinimal.h"
#include "StateTreeConsiderationCommonBase.h"
#include "StateTreeEnumValueScorePairs.h"
#include "StateTreeEnumInputConsideration.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEnumInputConsideration : public FStateTreeConsiderationCommonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeEnumValueScorePairs EnumValueScorePairs;
    
public:
    STATETREEMODULE_API FStateTreeEnumInputConsideration();
};

