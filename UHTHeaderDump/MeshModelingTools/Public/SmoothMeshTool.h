#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseMeshProcessingTool -FallbackName=BaseMeshProcessingTool
#include "SmoothMeshTool.generated.h"

class UDiffusionSmoothProperties;
class UImplicitSmoothProperties;
class UIterativeSmoothProperties;
class USmoothMeshToolProperties;
class USmoothWeightMapSetProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USmoothMeshTool : public UBaseMeshProcessingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USmoothMeshToolProperties* SmoothProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIterativeSmoothProperties* IterativeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiffusionSmoothProperties* DiffusionProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImplicitSmoothProperties* ImplicitProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USmoothWeightMapSetProperties* WeightMapProperties;
    
public:
    USmoothMeshTool();


    // Fix for true pure virtual functions not being implemented
};

