#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EQueryActionType.h"
#include "OnFindAllInSpherePinDelegate.h"
#include "QueryAsyncActionsBase.h"
#include "QueryFilter.h"
#include "FindAllInSphereAsync.generated.h"

class UFindAllInSphereAsync;
class UQueryManager;

UCLASS(Blueprintable)
class SPATIALQUERYSYSTEM_API UFindAllInSphereAsync : public UQueryAsyncActionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindAllInSpherePin OnSuccess;
    
    UFindAllInSphereAsync();

    UFUNCTION(BlueprintCallable)
    static UFindAllInSphereAsync* FindInSphereAsync(UQueryManager* QueryManager, TEnumAsByte<EQueryActionType::Type> QueryType, FVector QueryPoint, float QueryRadius, FQueryFilter QueryFilters, int32 NumToFind);
    
};

