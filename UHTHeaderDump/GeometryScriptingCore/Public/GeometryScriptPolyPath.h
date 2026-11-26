#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptPolyPath.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPolyPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosedLoop;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPolyPath();
};

