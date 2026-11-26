#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "ConstructionPlaneMechanic.generated.h"

class UCombinedTransformGizmo;
class ULocalSingleClickInputBehavior;
class USingleClickInputBehavior;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UConstructionPlaneMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* PlaneTransformProxy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleClickInputBehavior* ClickToSetPlaneBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalSingleClickInputBehavior* MiddleClickToSetGizmoBehavior;
    
public:
    UConstructionPlaneMechanic();

};

