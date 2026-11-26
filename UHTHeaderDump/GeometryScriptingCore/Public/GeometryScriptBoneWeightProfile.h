#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptBoneWeightProfile.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBoneWeightProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBoneWeightProfile();
};

