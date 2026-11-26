#pragma once
#include "CoreMinimal.h"
#include "SplineMeshComponentDescriptorBase.h"
#include "SoftSplineMeshComponentDescriptor.generated.h"

class UMaterialInterface;
class URuntimeVirtualTexture;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSoftSplineMeshComponentDescriptor : public FSplineMeshComponentDescriptorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<URuntimeVirtualTexture>> RuntimeVirtualTextures;
    
    ENGINE_API FSoftSplineMeshComponentDescriptor();
};

