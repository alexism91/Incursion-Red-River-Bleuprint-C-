#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "IRRRadioCondition.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRRADIOSYSTEM_API UIRRRadioCondition : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UIRRRadioCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_IsConditionMet(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool IsConditionMet(AActor* Instigator);
    
};

