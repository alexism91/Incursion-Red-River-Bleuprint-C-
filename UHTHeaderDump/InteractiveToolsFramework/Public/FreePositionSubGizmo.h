#pragma once
#include "CoreMinimal.h"
#include "PlanePositionGizmo.h"
#include "FreePositionSubGizmo.generated.h"

class IGizmoTransformSource;
class UGizmoTransformSource;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFreePositionSubGizmo : public UPlanePositionGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UFreePositionSubGizmo();

};

