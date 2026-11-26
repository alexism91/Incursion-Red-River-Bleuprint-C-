#pragma once
#include "CoreMinimal.h"
#include "IRRConfigTestInner.generated.h"

USTRUCT(BlueprintType)
struct FIRRConfigTestInner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    IRRCONFIG_API FIRRConfigTestInner();
};

