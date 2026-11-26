#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "RectangleMarqueeMechanic.generated.h"

class UClickDragInputBehavior;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URectangleMarqueeMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExternalClickDragBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExternalUpdateCameraState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OnDragRectangleChangedDeferredThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClickDragInputBehavior* ClickDragBehavior;
    
public:
    URectangleMarqueeMechanic();

};

