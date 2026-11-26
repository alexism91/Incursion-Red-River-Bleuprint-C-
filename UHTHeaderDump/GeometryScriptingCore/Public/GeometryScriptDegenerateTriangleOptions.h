#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRepairMeshMode.h"
#include "GeometryScriptDegenerateTriangleOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptDegenerateTriangleOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptRepairMeshMode Mode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinTriangleArea;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinEdgeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompactOnCompletion;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptDegenerateTriangleOptions();
};

