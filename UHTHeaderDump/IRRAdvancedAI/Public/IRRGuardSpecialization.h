#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRBotSpecializationBase.h"
#include "IRRGuardSpecialization.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRGuardSpecialization : public FIRRBotSpecializationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeashRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PostTag;
    
    FIRRGuardSpecialization();
};

