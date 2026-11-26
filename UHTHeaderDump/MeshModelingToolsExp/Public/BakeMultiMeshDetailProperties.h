#pragma once
#include "CoreMinimal.h"
#include "BakeMultiMeshDetailProperties.generated.h"

class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FBakeMultiMeshDetailProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SourceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SourceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceTextureUVLayer;
    
    MESHMODELINGTOOLSEXP_API FBakeMultiMeshDetailProperties();
};

