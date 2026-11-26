#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SimpleAttributeData.h"
#include "SimpleAttributeBuff.generated.h"

USTRUCT(BlueprintType)
struct FSimpleAttributeBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleAttributeData Data;
    
    TEST_C_API FSimpleAttributeBuff();
};

