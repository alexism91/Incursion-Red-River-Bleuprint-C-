#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EDataflowTransferVertexAttributeNodeBoundingVolume.h"
#include "EDataflowTransferVertexAttributeNodeFalloff.h"
#include "EDataflowTransferVertexAttributeNodeSourceScale.h"
#include "EDataflowTransferVertexAttributeNodeTransferMethod.h"
#include "GeometryCollectionTransferVertexSkinWeightsNode.generated.h"

USTRUCT(BlueprintType)
struct FGeometryCollectionTransferVertexSkinWeightsNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection FromCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowTransferVertexAttributeNodeTransferMethod TransferMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowTransferVertexAttributeNodeBoundingVolume BoundingVolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowTransferVertexAttributeNodeSourceScale SourceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowTransferVertexAttributeNodeFalloff Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransformNameSuffix;
    
    GEOMETRYCOLLECTIONNODES_API FGeometryCollectionTransferVertexSkinWeightsNode();
};

