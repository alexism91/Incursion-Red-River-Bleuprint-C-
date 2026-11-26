#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptEmptySelectionBehavior.h"
#include "GeometryScriptIterativeMeshSmoothingOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptIterativeMeshSmoothingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptIterativeMeshSmoothingOptions();
};

