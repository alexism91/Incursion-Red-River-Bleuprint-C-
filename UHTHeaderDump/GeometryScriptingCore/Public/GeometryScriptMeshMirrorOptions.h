#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshMirrorOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshMirrorOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPlaneCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipCutSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeldAlongPlane;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshMirrorOptions();
};

