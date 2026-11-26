#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEnginePlugin -ObjectName=CollectionAttributeKey -FallbackName=CollectionAttributeKey
#include "DataflowPrimitiveNode.h"
#include "DataflowSkinWeightData.h"
#include "ScalarVertexPropertyGroup.h"
#include "DataflowCollectionEditSkinWeightsNode.generated.h"

class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct DATAFLOWNODES_API FDataflowCollectionEditSkinWeightsNode : public FDataflowPrimitiveNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneIndicesName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneWeightsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalarVertexPropertyGroup VertexGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionAttributeKey BoneIndicesKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionAttributeKey BoneWeightsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* ObjectSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressSkinWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSkinWeightData> SkinWeights;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SkeletalMeshes;
    
public:
    FDataflowCollectionEditSkinWeightsNode();
};

