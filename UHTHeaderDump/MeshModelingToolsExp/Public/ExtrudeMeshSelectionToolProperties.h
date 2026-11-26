#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EExtrudeMeshSelectionInteractionMode.h"
#include "EExtrudeMeshSelectionRegionModifierMode.h"
#include "ExtrudeMeshSelectionToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExtrudeMeshSelectionInteractionMode InputMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtrudeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExtrudeMeshSelectionRegionModifierMode RegionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubdivisions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CreaseAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RaycastMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShellsToSolids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInferGroupsFromNbrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGroupPerSubdivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceSelectionGroups;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double UVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUVIslandPerGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInferMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInputMaterials;
    
    UExtrudeMeshSelectionToolProperties();

};

