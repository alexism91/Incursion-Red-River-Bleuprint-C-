#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVertex.h"
#include "MetasoundFrontendNodeInterface.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendNodeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendVertex> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendVertex> Outputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendVertex> Environment;
    
    METASOUNDFRONTEND_API FMetasoundFrontendNodeInterface();
};

