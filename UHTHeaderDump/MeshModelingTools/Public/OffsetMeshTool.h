#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseMeshProcessingTool -FallbackName=BaseMeshProcessingTool
#include "OffsetMeshTool.generated.h"

class UImplicitOffsetProperties;
class UIterativeOffsetProperties;
class UOffsetMeshToolProperties;
class UOffsetWeightMapSetProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UOffsetMeshTool : public UBaseMeshProcessingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOffsetMeshToolProperties* OffsetProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIterativeOffsetProperties* IterativeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImplicitOffsetProperties* ImplicitProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOffsetWeightMapSetProperties* WeightMapProperties;
    
public:
    UOffsetMeshTool();

};

