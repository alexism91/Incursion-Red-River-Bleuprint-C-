#pragma once
#include "CoreMinimal.h"
#include "RenderableTriangleVertex.h"
#include "RenderableTriangle.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FRenderableTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderableTriangleVertex Vertex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderableTriangleVertex Vertex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderableTriangleVertex Vertex2;
    
    MODELINGCOMPONENTS_API FRenderableTriangle();
};

