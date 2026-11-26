#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshBevelSelectionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshBevelSelectionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BevelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInferMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Subdivisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundWeight;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshBevelSelectionOptions();
};

