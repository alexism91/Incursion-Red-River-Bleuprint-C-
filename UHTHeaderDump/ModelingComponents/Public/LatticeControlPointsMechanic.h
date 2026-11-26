#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "LatticeControlPointsMechanic.generated.h"

class APreviewGeometryActor;
class UCombinedTransformGizmo;
class ULineSetComponent;
class UPointSetComponent;
class URectangleMarqueeMechanic;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULatticeControlPointsMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APreviewGeometryActor* PreviewGeometryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointSetComponent* DrawnControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSetComponent* DrawnLatticeEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* PointTransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* PointTransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URectangleMarqueeMechanic* MarqueeMechanic;
    
public:
    ULatticeControlPointsMechanic();

};

