#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshSelfUnionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshSelfUnionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrimFlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimplifyOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplifyPlanarTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindingThreshold;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshSelfUnionOptions();
};

