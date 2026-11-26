#pragma once
#include "CoreMinimal.h"
#include "EquippableViewmodelValues.h"
#include "FirstPersonCoreSubObject.h"
#include "FirstPersonSway.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonSway : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippableViewmodelValues EquippableViewmodelValues;
    
    UFirstPersonSway();

    UFUNCTION(BlueprintCallable)
    FEquippableViewmodelValues GetEquippableViewmodelValues();
    
};

