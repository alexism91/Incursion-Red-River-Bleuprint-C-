#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "InputHandler_AbilityActivation.h"
#include "InputHandler_AbilityTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_AbilityTag : public UInputHandler_AbilityActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CancelFilterTags;
    
public:
    UInputHandler_AbilityTag();

};

