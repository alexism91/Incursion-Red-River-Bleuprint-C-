#pragma once
#include "CoreMinimal.h"
#include "MetaSoundAssetKey.h"
#include "MetasoundFrontendVersionNumber.h"
#include "MetaSoundDocumentInfo.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundDocumentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersionNumber DocumentVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaSoundAssetKey> ReferencedAssetKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPreset: 1;
    
    METASOUNDFRONTEND_API FMetaSoundDocumentInfo();
};

