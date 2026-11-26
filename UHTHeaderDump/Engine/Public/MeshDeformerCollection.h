#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "MeshDeformerCollection.generated.h"

class UMeshDeformer;
class UMeshDeformerCollection;

UCLASS(Blueprintable, MinimalAPI)
class UMeshDeformerCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMeshDeformer>> MeshDeformers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshDeformerCollection*> MeshDeformerCollections;
    
    UMeshDeformerCollection();

};

