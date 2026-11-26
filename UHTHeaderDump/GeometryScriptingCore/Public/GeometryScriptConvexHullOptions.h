#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptConvexHullOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptConvexHullOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrefilterVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrefilterGridResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimplifyToFaceCount;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptConvexHullOptions();
};

