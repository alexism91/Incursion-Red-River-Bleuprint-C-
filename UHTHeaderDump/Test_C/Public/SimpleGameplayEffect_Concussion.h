#pragma once
#include "CoreMinimal.h"
#include "SimpleGameplayEffect.h"
#include "SimpleGameplayEffect_Concussion.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USimpleGameplayEffect_Concussion : public USimpleGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConcussionIntensity;
    
    USimpleGameplayEffect_Concussion();

};

