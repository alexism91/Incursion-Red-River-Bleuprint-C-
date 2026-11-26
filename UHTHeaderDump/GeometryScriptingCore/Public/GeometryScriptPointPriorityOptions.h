#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptPointPriorityOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPointPriorityOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OptionalPriorityWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniformSpacing;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPointPriorityOptions();
};

