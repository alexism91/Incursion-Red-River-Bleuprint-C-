#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVersionNumber.h"
#include "MetasoundFrontendVersion.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersionNumber Number;
    
    METASOUNDFRONTEND_API FMetasoundFrontendVersion();
};

