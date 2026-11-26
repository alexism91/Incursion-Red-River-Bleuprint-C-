#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "EQueryActionType.h"
#include "EQueryEngineType.h"
#include "QueryFilter.h"
#include "QuerySystemData.h"
#include "QueryManager.generated.h"

UCLASS(Blueprintable)
class SPATIALQUERYSYSTEM_API UQueryManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UQueryManager();

    UFUNCTION(BlueprintCallable)
    void OptimizeQueryEngine(TEnumAsByte<EQueryEngineType::Type> QueryEngine, bool bUseAsyncUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool FindInSphere(TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, float QueryRadius, FQueryFilter QueryFilters, TArray<FQuerySystemData>& OutActorsInfo, int32 NumToFind);
    
    UFUNCTION(BlueprintCallable)
    bool FindInSector(TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, FVector SectorDirection, float SectorAngleDegrees, float SectorLength, FQueryFilter QueryFilters, TArray<FQuerySystemData>& OutActorsInfo, int32 NumToFind);
    
    UFUNCTION(BlueprintCallable)
    bool FindInBox(TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, FVector Extends, FRotator Rotation, FQueryFilter QueryFilters, TArray<FQuerySystemData>& OutActorsInfo, int32 NumToFind);
    
};

