#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "EMarqueeSelectionUpdateType.h"
#include "MeshTopologySelectionMechanic.generated.h"

class APreviewGeometryActor;
class UMaterialInterface;
class UMeshTopologySelectionMechanicProperties;
class UMouseHoverBehavior;
class URectangleMarqueeMechanic;
class USingleClickOrDragInputBehavior;
class UTriangleSetComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class UMeshTopologySelectionMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshTopologySelectionMechanicProperties* Properties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMouseHoverBehavior* HoverBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleClickOrDragInputBehavior* ClickOrDragBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URectangleMarqueeMechanic* MarqueeMechanic;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarqueeSelectionUpdateType MarqueeSelectionUpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APreviewGeometryActor* PreviewGeometryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriangleSetComponent* DrawnTriangleSetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HighlightedFaceMaterial;
    
public:
    UMeshTopologySelectionMechanic();

};

