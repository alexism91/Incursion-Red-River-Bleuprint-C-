#pragma once
#include "CoreMinimal.h"
#include "EIRRBodyPart.h"
#include "EIRRWoundSeverity.h"
#include "SimpleGameplayEffect.h"
#include "SimpleGameplayEffect_Wounded.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USimpleGameplayEffect_Wounded : public USimpleGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedingChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightBleedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyBleedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIRRBodyPart> HeavyWoundBodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyWoundDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeavyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeavyName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRWoundSeverity ForcedSeverity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeavy;
    
public:
    USimpleGameplayEffect_Wounded();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RollOpensWound() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEscalatedToHeavy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeavyHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeavy() const;
    
};

