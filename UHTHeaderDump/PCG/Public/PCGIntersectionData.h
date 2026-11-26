#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "EPCGIntersectionDensityFunction.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGIntersectionData.generated.h"

class UPCGSpatialData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGIntersectionDensityFunction DensityFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* B;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedStrictBounds;
    
public:
    UPCGIntersectionData();

    UFUNCTION(BlueprintCallable)
    void Initialize(const UPCGSpatialData* InA, const UPCGSpatialData* InB);
    
};

