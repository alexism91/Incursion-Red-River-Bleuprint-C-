#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EQueryActionType.h"
#include "OnFindAllInSectorPinDelegate.h"
#include "QueryAsyncActionsBase.h"
#include "QueryFilter.h"
#include "FindAllInSectorAsync.generated.h"

class UFindAllInSectorAsync;
class UQueryManager;

UCLASS(Blueprintable)
class SPATIALQUERYSYSTEM_API UFindAllInSectorAsync : public UQueryAsyncActionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindAllInSectorPin OnSuccess;
    
    UFindAllInSectorAsync();

    UFUNCTION(BlueprintCallable)
    static UFindAllInSectorAsync* FindInSectorAsync(UQueryManager* QueryManager, TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, FVector SectorDirection, float SectorAngleDegrees, float SectorLength, FQueryFilter QueryFilters, int32 NumToFind);
    
};

