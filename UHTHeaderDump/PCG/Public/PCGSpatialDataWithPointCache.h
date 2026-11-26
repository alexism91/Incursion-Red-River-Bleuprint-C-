#pragma once
#include "CoreMinimal.h"
#include "PCGPointDataCache.h"
#include "PCGSpatialData.h"
#include "PCGSpatialDataWithPointCache.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGSpatialDataWithPointCache : public UPCGSpatialData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPCGPointDataCache PointDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPCGPointDataCache PointArrayDataCache;
    
public:
    UPCGSpatialDataWithPointCache();

};

