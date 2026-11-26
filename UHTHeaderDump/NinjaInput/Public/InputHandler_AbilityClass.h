#pragma once
#include "CoreMinimal.h"
#include "InputHandler_AbilityActivation.h"
#include "Templates/SubclassOf.h"
#include "InputHandler_AbilityClass.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_AbilityClass : public UInputHandler_AbilityActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityClass;
    
public:
    UInputHandler_AbilityClass();

};

