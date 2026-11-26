#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeTypes.h"
#include "GeometryScriptBakeTypeOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBakeTypeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeTypes BakeType;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBakeTypeOptions();
};

