#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendInterfaceVertexBinding.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendInterfaceVertexBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    METASOUNDFRONTEND_API FMetasoundFrontendInterfaceVertexBinding();
};

