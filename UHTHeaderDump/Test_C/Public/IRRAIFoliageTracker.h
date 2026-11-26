#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRAIFoliageData.h"
#include "Templates/SubclassOf.h"
#include "IRRAIFoliageTracker.generated.h"

class APawn;
class UIRRNavTrackerComponent;
class UNavigationQueryFilter;
class UNavigationSystemV1;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIFoliageTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIFoliageData> NearbyFoliageLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIFoliageData> AllFoliageLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InFrontDotThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsideBushDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavigationSystemV1* NavSys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRNavTrackerComponent* NavTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CachedPawn;
    
public:
    UIRRAIFoliageTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideFoliageArea(const FVector& InProjectionExtent, const TSubclassOf<UNavigationQueryFilter>& Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideBush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocationsWithinRadiusAroundOwner(const float InRadius, TArray<FVector>& OutLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRAIFoliageData> GetAllFoliageData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ClosestBushDistanceSqr() const;
    
};

