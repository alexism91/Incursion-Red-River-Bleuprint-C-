#include "QueryManager.h"

UQueryManager::UQueryManager() {
}

void UQueryManager::OptimizeQueryEngine(TEnumAsByte<EQueryEngineType::Type> QueryEngine, bool bUseAsyncUpdate) {
}

bool UQueryManager::FindInSphere(TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, float QueryRadius, FQueryFilter QueryFilters, TArray<FQuerySystemData>& OutActorsInfo, int32 NumToFind) {
    return false;
}

bool UQueryManager::FindInSector(TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, FVector SectorDirection, float SectorAngleDegrees, float SectorLength, FQueryFilter QueryFilters, TArray<FQuerySystemData>& OutActorsInfo, int32 NumToFind) {
    return false;
}

bool UQueryManager::FindInBox(TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, FVector Extends, FRotator Rotation, FQueryFilter QueryFilters, TArray<FQuerySystemData>& OutActorsInfo, int32 NumToFind) {
    return false;
}


