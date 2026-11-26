#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KAggregateGeom -FallbackName=KAggregateGeom
#include "GeometryScriptSimpleCollision.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSimpleCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKAggregateGeom AggGeom;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSimpleCollision();
};

