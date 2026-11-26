#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EGenerateConvexMethod -FallbackName=EGenerateConvexMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTransformSelection -FallbackName=DataflowTransformSelection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEngine -ObjectName=DataflowNodeDebugDrawSettings -FallbackName=DataflowNodeDebugDrawSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEngine -ObjectName=DataflowNodeSphereCoveringDebugDrawSettings -FallbackName=DataflowNodeSphereCoveringDebugDrawSettings
#include "DataflowConvexDecompositionSettings.h"
#include "DataflowSphereCovering.h"
#include "CreateLeafConvexHullsDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FCreateLeafConvexHullsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSphereCovering SphereCovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformSelection OptionalSelectionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenerateConvexMethod GenerateMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntersectIfComputedIsSmallerByFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinExternalVolumeToIntersect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeIntersectionsBeforeHull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplificationDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowConvexDecompositionSettings ConvexDecompositionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNodeDebugDrawSettings DebugDrawRenderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNodeSphereCoveringDebugDrawSettings SphereCoveringDebugDrawRenderSettings;
    
public:
    GEOMETRYCOLLECTIONNODES_API FCreateLeafConvexHullsDataflowNode();
};

