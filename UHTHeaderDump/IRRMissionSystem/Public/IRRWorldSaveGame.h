#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRDayTime.h"
#include "IRRMapState.h"
#include "IRRWorldSaveGame.generated.h"

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRWorldSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDayTime DayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRMapState> MapStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSecondTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLendLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TravelToMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDayTime ArrivalTime;
    
    UIRRWorldSaveGame();

    UFUNCTION(BlueprintCallable)
    void SetUseSecondTimeZone(bool NewBool);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLendLoadout(bool NewBool);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelToMap(FGameplayTag NewTravelToMap);
    
    UFUNCTION(BlueprintCallable)
    void SetMapDataArray(TArray<FIRRMapState> NewArray);
    
    UFUNCTION(BlueprintCallable)
    void SetDayTime(FIRRDayTime NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetArrivalTime(FIRRDayTime NewArrivalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseSecondTimeZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseLendLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTravelToMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRMapState> GetMapStateArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRDayTime GetDayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRDayTime GetArrivalTime() const;
    
};

