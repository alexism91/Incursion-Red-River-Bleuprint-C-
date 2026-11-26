#pragma once
#include "CoreMinimal.h"
#include "MetaHumanGeneratedAssetMetadata.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanGeneratedAssetMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreferredSubfolderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubfolderIsAbsolute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreferredName;
    
    FMetaHumanGeneratedAssetMetadata();
};

