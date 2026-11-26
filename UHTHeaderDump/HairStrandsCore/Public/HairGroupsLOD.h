#pragma once
#include "CoreMinimal.h"
#include "HairLODSettings.h"
#include "HairGroupsLOD.generated.h"

USTRUCT(BlueprintType)
struct FHairGroupsLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoLODBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairLODSettings> Lods;
    
    HAIRSTRANDSCORE_API FHairGroupsLOD();
};

