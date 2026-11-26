#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "SimpleSingleClickGizmo.generated.h"

class IGizmoClickTarget;
class UGizmoClickTarget;
class USingleClickInputBehavior;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USimpleSingleClickGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleClickInputBehavior* ClickBehavior;
    
    USimpleSingleClickGizmo();

};

