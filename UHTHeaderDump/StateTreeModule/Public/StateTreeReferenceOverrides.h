#pragma once
#include "CoreMinimal.h"
#include "StateTreeReferenceOverrideItem.h"
#include "StateTreeReferenceOverrides.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeReferenceOverrides {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeReferenceOverrideItem> OverrideItems;
    
public:
    STATETREEMODULE_API FStateTreeReferenceOverrides();
};

