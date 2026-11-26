#pragma once
#include "CoreMinimal.h"
#include "MetaSoundClassSearchInfo.h"
#include "MetaSoundClassVertexInfo.h"
#include "MetasoundFrontendInterfaceMetadata.h"
#include "MetasoundFrontendVersion.h"
#include "MetaSoundClassInterfaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundClassInterfaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendInterfaceMetadata> DefinedInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaSoundClassSearchInfo SearchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaSoundClassVertexInfo> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaSoundClassVertexInfo> Outputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendVersion> InheritedInterfaces;
    
    METASOUNDFRONTEND_API FMetaSoundClassInterfaceInfo();
};

