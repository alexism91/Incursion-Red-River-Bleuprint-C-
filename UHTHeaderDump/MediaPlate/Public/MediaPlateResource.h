#pragma once
#include "CoreMinimal.h"
#include "EMediaPlateResourceType.h"
#include "MediaPlateResource.generated.h"

class UMediaPlaylist;
class UMediaSource;

USTRUCT(BlueprintType)
struct FMediaPlateResource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaPlateResourceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternalMediaPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaSource> MediaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaPlaylist> SourcePlaylist;
    
public:
    MEDIAPLATE_API FMediaPlateResource();
};

