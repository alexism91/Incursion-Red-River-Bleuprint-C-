#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassInputDefault.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendClassInput.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendClassInputDefault> Defaults;
    
public:
    METASOUNDFRONTEND_API FMetasoundFrontendClassInput();
};

