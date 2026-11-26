#pragma once
#include "CoreMinimal.h"
#include "BaseMeshFromSplinesTool.h"
#include "RevolveSplineTool.generated.h"

class UConstructionPlaneMechanic;
class URevolveSplineToolActionPropertySet;
class URevolveSplineToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveSplineTool : public UBaseMeshFromSplinesTool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URevolveSplineToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URevolveSplineToolActionPropertySet* ToolActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
public:
    URevolveSplineTool();

};

