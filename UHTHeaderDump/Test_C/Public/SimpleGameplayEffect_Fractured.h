#pragma once
#include "CoreMinimal.h"
#include "EIRRBodyPart.h"
#include "SimpleGameplayEffect.h"
#include "SimpleGameplayEffect_Fractured.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USimpleGameplayEffect_Fractured : public USimpleGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FractureChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIRRBodyPart> FractureBodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FractureDamageThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRBodyPart FracturedBodyPart;
    
public:
    USimpleGameplayEffect_Fractured();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreakingHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRBodyPart GetFracturedBodyPart() const;
    
};

