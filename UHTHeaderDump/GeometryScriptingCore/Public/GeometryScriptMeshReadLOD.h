#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptLODType.h"
#include "GeometryScriptMeshReadLOD.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshReadLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptLODType LODType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshReadLOD();
};

