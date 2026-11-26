#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EQueryActionType.h"
#include "OnFindAllInBoxPinDelegate.h"
#include "QueryAsyncActionsBase.h"
#include "QueryFilter.h"
#include "FindAllInBoxAsync.generated.h"

class UFindAllInBoxAsync;
class UQueryManager;

UCLASS(Blueprintable)
class SPATIALQUERYSYSTEM_API UFindAllInBoxAsync : public UQueryAsyncActionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindAllInBoxPin OnSuccess;
    
    UFindAllInBoxAsync();

    UFUNCTION(BlueprintCallable)
    static UFindAllInBoxAsync* FindInBoxAsync(UQueryManager* QueryManager, TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, FVector Extents, FRotator Rotation, FQueryFilter QueryFilters, int32 NumToFind);
    
};

