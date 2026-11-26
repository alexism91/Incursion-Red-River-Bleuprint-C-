#pragma once
#include "CoreMinimal.h"
#include "EInputPreProcessorType.h"
#include "InputPreprocessorRegistrationKey.generated.h"

USTRUCT(BlueprintType)
struct FInputPreprocessorRegistrationKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputPreProcessorType Type;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    SLATE_API FInputPreprocessorRegistrationKey();
};

