#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PCGPointDataCache.generated.h"

class UPCGBasePointData;

USTRUCT(BlueprintType)
struct FPCGPointDataCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPCGBasePointData* CachedPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBox> CachedBoundedPointDataBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPCGBasePointData*> CachedBoundedPointData;
    
    PCG_API FPCGPointDataCache();
};

