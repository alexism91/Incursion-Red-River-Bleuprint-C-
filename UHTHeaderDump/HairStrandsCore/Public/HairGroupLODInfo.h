#pragma once
#include "CoreMinimal.h"
#include "HairGroupLODInfo.generated.h"

USTRUCT(BlueprintType)
struct FHairGroupLODInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCurves;
    
    HAIRSTRANDSCORE_API FHairGroupLODInfo();
};

