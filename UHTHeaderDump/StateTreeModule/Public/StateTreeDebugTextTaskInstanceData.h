#pragma once
#include "CoreMinimal.h"
#include "StateTreeDebugTextTaskInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStateTreeDebugTextTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReferenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BindableText;
    
    STATETREEMODULE_API FStateTreeDebugTextTaskInstanceData();
};

