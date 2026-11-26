#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MultiTransformer.generated.h"

class UCombinedTransformGizmo;
class UDragAlignmentMechanic;
class UInteractiveGizmoManager;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI)
class UMultiTransformer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveGizmoManager* GizmoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UMultiTransformer();

};

