#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptIndexType.h"
#include "GeometryScriptIndexList.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptIndexList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptIndexType IndexType;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptIndexList();
};

