#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectCalculation.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UGameplayEffectCalculation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;
    
public:
    UGameplayEffectCalculation();

};

