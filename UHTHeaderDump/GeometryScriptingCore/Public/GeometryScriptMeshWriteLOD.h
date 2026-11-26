#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshWriteLOD.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshWriteLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWriteHiResSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshWriteLOD();
};

