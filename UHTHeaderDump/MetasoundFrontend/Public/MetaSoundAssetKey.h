#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassName.h"
#include "MetasoundFrontendVersionNumber.h"
#include "MetaSoundAssetKey.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundAssetKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendClassName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersionNumber Version;
    
    METASOUNDFRONTEND_API FMetaSoundAssetKey();
};

