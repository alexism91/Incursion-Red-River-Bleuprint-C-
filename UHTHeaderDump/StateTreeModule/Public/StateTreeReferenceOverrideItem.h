#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "StateTreeReference.h"
#include "StateTreeReferenceOverrideItem.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeReferenceOverrideItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeReference StateTreeReference;
    
public:
    STATETREEMODULE_API FStateTreeReferenceOverrideItem();
};

