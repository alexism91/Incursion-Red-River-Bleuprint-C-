#pragma once
#include "CoreMinimal.h"
#include "NaniteDisplacedMeshDisplacementMap.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNaniteDisplacedMeshDisplacementMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Center;
    
    NANITEDISPLACEDMESH_API FNaniteDisplacedMeshDisplacementMap();
};

