#pragma once
#include "CoreMinimal.h"
#include "PCGDataLabels.generated.h"

USTRUCT(BlueprintType)
struct FPCGDataLabels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Labels;
    
    PCG_API FPCGDataLabels();
};

