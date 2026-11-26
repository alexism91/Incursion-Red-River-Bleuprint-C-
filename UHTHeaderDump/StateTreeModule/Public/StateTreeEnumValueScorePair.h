#pragma once
#include "CoreMinimal.h"
#include "StateTreeEnumValueScorePair.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEnumValueScorePair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 EnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    STATETREEMODULE_API FStateTreeEnumValueScorePair();
};

