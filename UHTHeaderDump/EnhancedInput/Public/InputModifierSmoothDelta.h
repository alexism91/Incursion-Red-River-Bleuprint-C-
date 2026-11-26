#pragma once
#include "CoreMinimal.h"
#include "ENormalizeInputSmoothingType.h"
#include "InputModifier.h"
#include "InputModifierSmoothDelta.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputModifierSmoothDelta : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENormalizeInputSmoothingType SmoothingMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EasingExponent;
    
    UInputModifierSmoothDelta();

};

