#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GlobalDayTimeUpdatedDelegate.h"
#include "IRRDayTime.h"
#include "IRRMapState.h"
#include "LocalDayTimeUpdatedDelegate.h"
#include "OnWeatherTypeChangedDelegate.h"
#include "IRRWorldManager.generated.h"

class UIRRMapSetup;
class UIRRWeatherSettings;
class UIRRWorldSaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRWorldManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDayTime DefaultDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMapSetup*> MapSetupArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRMapSetup* FallbackMapSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRWorldSaveGame* WorldSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartDayTime, meta=(AllowPrivateAccess=true))
    FIRRDayTime StartDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRMapState> MapStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSecondTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag TravelToMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRDayTime ArrivalDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDayTime RuntimeDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_DayTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalDayTimeUpdated OnGlobalDayTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalDayTimeUpdated OnLocalDayTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeatherTypeChanged OnWeatherTypeChanged;
    
    UIRRWorldManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateMapState(FIRRMapState& MapState, FIRRDayTime DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDayTime();
    
    UFUNCTION(BlueprintCallable)
    void ToggleUseSecondTimeZone(bool bUseSecondTimeZone);
    
    UFUNCTION(BlueprintCallable)
    void ToggleUseLendLoadout(bool bUseLendLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelToMap(FGameplayTag MapTag);
    
    UFUNCTION(BlueprintCallable)
    void SetArrivalTime(FGameplayTag MapTag);
    
    UFUNCTION(BlueprintCallable)
    void SaveWorld();
    
    UFUNCTION(BlueprintCallable)
    void ResetWorldManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StartDayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDayTimeUpdated(FIRRDayTime& NewDayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNight(FIRRDayTime DayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDay(FIRRDayTime DayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyNight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyDay() const;
    
    UFUNCTION(BlueprintCallable)
    void InitWorldManager();
    
    UFUNCTION(BlueprintCallable)
    void InitMapData(UIRRMapSetup* MapData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMapSetup* GetMapSetupByTag(FGameplayTag MapTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMapSetup* GetMapSetupByCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRDayTime GetDayTimeByTag(FGameplayTag MapTag, bool bUseSecondTimeZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRDayTime GetDayTimeByCurrentLevel(bool bUseSecondTimeZone) const;
    
    UFUNCTION(BlueprintCallable)
    FIRRDayTime GetArrivalDayTime();
    
    UFUNCTION(BlueprintCallable)
    UIRRWeatherSettings* GetActiveWeatherSettingsByTag(FGameplayTag MapTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRWeatherSettings* GetActiveWeatherSettingsByCurrentLevel() const;
    
};

