#pragma once
#include "CoreMinimal.h"
#include "NodeTemplateGenerateInterfaceParams.generated.h"

USTRUCT(BlueprintType)
struct FNodeTemplateGenerateInterfaceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InputsToConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputsToConnect;
    
    METASOUNDFRONTEND_API FNodeTemplateGenerateInterfaceParams();
};

