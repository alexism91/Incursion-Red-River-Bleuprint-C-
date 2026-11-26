#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_StoreStatsAndAchievementsFailureDelegate.h"
#include "SAL_StoreStatsAndAchievementsSuccessDelegate.h"
#include "SAL_StoreStatsAndAchievements.generated.h"

class UObject;
class USAL_StoreStatsAndAchievements;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_StoreStatsAndAchievements : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_StoreStatsAndAchievementsSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_StoreStatsAndAchievementsFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_StoreStatsAndAchievements();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_StoreStatsAndAchievements* StoreUserStatsAndAchievements(UObject* NewWorldContextObject);
    
};

