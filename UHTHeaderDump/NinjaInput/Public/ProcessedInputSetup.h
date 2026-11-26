#pragma once
#include "CoreMinimal.h"
#include "ProcessedBinding.h"
#include "ProcessedInputSetup.generated.h"

class UNinjaInputSetupDataAsset;

USTRUCT(BlueprintType)
struct FProcessedInputSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNinjaInputSetupDataAsset* SourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProcessedBinding> ProcessedBindings;
    
    NINJAINPUT_API FProcessedInputSetup();
};

