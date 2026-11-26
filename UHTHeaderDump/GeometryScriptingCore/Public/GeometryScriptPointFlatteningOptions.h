#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EGeometryScriptAxis.h"
#include "GeometryScriptPointFlatteningOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPointFlatteningOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptAxis DropAxis;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPointFlatteningOptions();
};

