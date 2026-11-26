#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendDocumentMetadata.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendDocumentMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion Version;
    
    METASOUNDFRONTEND_API FMetasoundFrontendDocumentMetadata();
};

