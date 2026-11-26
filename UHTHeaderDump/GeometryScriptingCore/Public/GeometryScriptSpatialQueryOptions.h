#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSpatialQueryOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSpatialQueryOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUnsafeModifiedQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindingIsoThreshold;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSpatialQueryOptions();
};

