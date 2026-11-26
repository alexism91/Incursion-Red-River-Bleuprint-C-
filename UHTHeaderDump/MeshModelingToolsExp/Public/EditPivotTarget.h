#pragma once
#include "CoreMinimal.h"
#include "EditPivotTarget.generated.h"

class UCombinedTransformGizmo;
class UTransformProxy;

USTRUCT(BlueprintType)
struct FEditPivotTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* TransformGizmo;
    
    MESHMODELINGTOOLSEXP_API FEditPivotTarget();
};

