#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptEmptySelectionBehavior.h"
#include "GeometryScriptSelectiveTessellateOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSelectiveTessellateOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMultithreading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSelectiveTessellateOptions();
};

