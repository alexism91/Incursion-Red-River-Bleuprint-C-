#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "DrawAndRevolveTool.generated.h"

class UConstructionPlaneMechanic;
class UCreateMeshObjectTypeProperties;
class UCurveControlPointsMechanic;
class UMeshOpPreviewWithBackgroundCompute;
class UNewMeshMaterialProperties;
class URevolveToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDrawAndRevolveTool : public UInteractiveTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveControlPointsMechanic* ControlPointsMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URevolveToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
public:
    UDrawAndRevolveTool();

};

