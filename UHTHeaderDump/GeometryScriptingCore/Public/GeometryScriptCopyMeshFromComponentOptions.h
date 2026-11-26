#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshReadLOD.h"
#include "GeometryScriptCopyMeshFromComponentOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptCopyMeshFromComponentOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantInstanceColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptMeshReadLOD RequestedLOD;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptCopyMeshFromComponentOptions();
};

