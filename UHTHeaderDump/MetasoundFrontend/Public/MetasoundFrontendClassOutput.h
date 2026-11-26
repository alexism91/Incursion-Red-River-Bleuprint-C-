#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendClassOutput.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
    METASOUNDFRONTEND_API FMetasoundFrontendClassOutput();
};

