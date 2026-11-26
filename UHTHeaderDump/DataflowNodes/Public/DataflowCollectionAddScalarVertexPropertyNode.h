#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEnginePlugin -ObjectName=CollectionAttributeKey -FallbackName=CollectionAttributeKey
#include "EDataflowWeightMapOverrideType.h"
#include "ScalarVertexPropertyGroup.h"
#include "DataflowCollectionAddScalarVertexPropertyNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowCollectionAddScalarVertexPropertyNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionAttributeKey AttributeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> VertexWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalarVertexPropertyGroup TargetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowWeightMapOverrideType OverrideType;
    
    DATAFLOWNODES_API FDataflowCollectionAddScalarVertexPropertyNode();
};

