#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.generated.h"

USTRUCT(BlueprintType)
struct FPredictionKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Current;
    
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int16 base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServerInitiated;
    
    GAMEPLAYABILITIES_API FPredictionKey();
};

