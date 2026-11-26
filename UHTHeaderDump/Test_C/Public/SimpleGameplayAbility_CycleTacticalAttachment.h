#pragma once
#include "CoreMinimal.h"
#include "CharacterMontageSet.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_CycleTacticalAttachment.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_CycleTacticalAttachment : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontageSet> CycleMontages;
    
    USimpleGameplayAbility_CycleTacticalAttachment();

};

