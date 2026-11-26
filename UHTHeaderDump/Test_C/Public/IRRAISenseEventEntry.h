#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRAISenseEvent.h"
#include "IRRAISenseEventEntry.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAISenseEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SenseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISenseEvent Event;
    
    FIRRAISenseEventEntry();
};

