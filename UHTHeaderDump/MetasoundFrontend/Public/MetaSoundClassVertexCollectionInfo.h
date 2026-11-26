#pragma once
#include "CoreMinimal.h"
#include "MetaSoundClassVertexInfo.h"
#include "MetaSoundClassVertexCollectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundClassVertexCollectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaSoundClassVertexInfo> ClassVertexInfo;
    
    METASOUNDFRONTEND_API FMetaSoundClassVertexCollectionInfo();
};

