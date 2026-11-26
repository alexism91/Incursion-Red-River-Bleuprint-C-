#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=NinjaInput -ObjectName=NinjaInputHandler -FallbackName=NinjaInputHandler
#include "InputHandler_TriggerSimpleAbility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInputHandler_TriggerSimpleAbility : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTab;
    
public:
    UInputHandler_TriggerSimpleAbility();

};

