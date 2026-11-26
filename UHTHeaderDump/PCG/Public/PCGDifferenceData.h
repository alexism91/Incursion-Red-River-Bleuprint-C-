#pragma once
#include "CoreMinimal.h"
#include "EPCGDifferenceDensityFunction.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGDifferenceData.generated.h"

class UPCGSpatialData;
class UPCGUnionData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiffMetadata;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSpatialData* Difference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGUnionData* DifferencesUnion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDifferenceDensityFunction DensityFunction;
    
public:
    UPCGDifferenceData();

    UFUNCTION(BlueprintCallable)
    void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddDifference(const UPCGSpatialData* InDifference);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const UPCGSpatialData* InData);
    
};

