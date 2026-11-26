#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendInterfaceUClassOptions.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendInterfaceMetadata.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendInterfaceMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendInterfaceUClassOptions> UClassOptions;
    
    METASOUNDFRONTEND_API FMetasoundFrontendInterfaceMetadata();
};

