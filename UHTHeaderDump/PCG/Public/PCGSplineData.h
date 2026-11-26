#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplinePoint -FallbackName=SplinePoint
#include "PCGPolyLineData.h"
#include "PCGSplineStruct.h"
#include "PCGSplineData.generated.h"

class USplineComponent;

UCLASS(Blueprintable, MinimalAPI)
class UPCGSplineData : public UPCGPolyLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSplineStruct SplineStruct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedBounds;
    
public:
    UPCGSplineData();

    UFUNCTION(BlueprintCallable)
    void K2_Initialize(const TArray<FSplinePoint>& InSplinePoints, bool bInClosedLoop, const FTransform& InTransform, TArray<int64> InOptionalEntryKeys);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const USplineComponent* InSpline);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSplinePoint> GetSplinePoints() const;
    
    UFUNCTION(BlueprintPure)
    TArray<int64> GetMetadataEntryKeysForSplinePoints() const;
    
};

