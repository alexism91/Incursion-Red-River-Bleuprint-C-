#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshProjectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshProjectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessAllIfEmptySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetUVsForUnmatched;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshProjectionSettings();
};

