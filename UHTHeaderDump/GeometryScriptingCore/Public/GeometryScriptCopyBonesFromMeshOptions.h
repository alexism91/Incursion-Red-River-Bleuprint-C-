#pragma once
#include "CoreMinimal.h"
#include "EBonesToCopyFromSource.h"
#include "GeometryScriptCopyBonesFromMeshOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptCopyBonesFromMeshOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReindexWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBonesToCopyFromSource BonesToCopyFromSource;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptCopyBonesFromMeshOptions();
};

