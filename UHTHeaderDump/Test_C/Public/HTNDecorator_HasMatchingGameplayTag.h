#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "EIRRTagCheckTarget.h"
#include "HTNDecorator_HasMatchingGameplayTag.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_HasMatchingGameplayTag : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRTagCheckTarget TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UHTNDecorator_HasMatchingGameplayTag();

};

