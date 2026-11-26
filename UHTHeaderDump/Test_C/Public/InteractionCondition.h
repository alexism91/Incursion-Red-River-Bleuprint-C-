#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "InteractionCondition.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UInteractionCondition : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UInteractionCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Check(AActor* Owner, AActor* InteractingActor);
    
};

