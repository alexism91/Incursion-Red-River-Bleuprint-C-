#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptBoneWeight.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBoneWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBoneWeight();
};

