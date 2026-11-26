#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassInterface.h"
#include "MetasoundFrontendInterfaceMetadata.h"
#include "MetasoundFrontendInterface.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendInterfaceMetadata MetaData;
    
    METASOUNDFRONTEND_API FMetasoundFrontendInterface();
};

