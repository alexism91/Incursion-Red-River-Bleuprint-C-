#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSetSimpleCollisionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSetSimpleCollisionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmitTransaction;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSetSimpleCollisionOptions();
};

