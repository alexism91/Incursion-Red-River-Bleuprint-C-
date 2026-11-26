#pragma once
#include "CoreMinimal.h"
#include "InteractionActions.generated.h"

class UInteractionAction;

USTRUCT(BlueprintType)
struct FInteractionActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionAction*> Actions;
    
    TEST_C_API FInteractionActions();
};

