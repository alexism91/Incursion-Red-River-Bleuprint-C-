#pragma once
#include "CoreMinimal.h"
#include "TransformMeshesTarget.generated.h"

class UCombinedTransformGizmo;
class UTransformProxy;

USTRUCT(BlueprintType)
struct FTransformMeshesTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* TransformGizmo;
    
    MESHMODELINGTOOLSEXP_API FTransformMeshesTarget();
};

