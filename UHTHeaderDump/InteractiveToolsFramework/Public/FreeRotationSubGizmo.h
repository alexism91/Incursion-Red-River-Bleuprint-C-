#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "FreeRotationSubGizmo.generated.h"

class IGizmoAxisSource;
class UGizmoAxisSource;
class IGizmoClickTarget;
class UGizmoClickTarget;
class IGizmoStateTarget;
class UGizmoStateTarget;
class IGizmoTransformSource;
class UGizmoTransformSource;
class UClickDragInputBehavior;
class UGizmoViewContext;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFreeRotationSubGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoViewContext* GizmoViewContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClickDragInputBehavior* MouseBehavior;
    
    UFreeRotationSubGizmo();

};

