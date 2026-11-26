#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISettings -FallbackName=IRRAISettings
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISimulationSettings -FallbackName=IRRAISimulationSettings
#include "AIPawnsUpdatedDelegate.h"
#include "IRRAITimeAndWeatherEffects.h"
#include "PlayerPawnsUpdatedDelegate.h"
#include "AIManager.generated.h"

class AIRREnhancedUltraDynamicSky;
class UAIOptimizationComponent;
class UCurveFloat;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AAIManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigationRadiusFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OptimizationTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeatherAndTimeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVisibilityOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HorizontalSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VerticalSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndoorVisibilityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndoorVisibilityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeVisibilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeVisiblitySunAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadlampOnTimeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadlampOffTimeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAITimeAndWeatherEffects MinTimeAndWeatherEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAITimeAndWeatherEffects CurrentTimeAndWeatherEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadlampsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWeatherVisionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRREnhancedUltraDynamicSky* CachedUltraDynamicSkyActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPawnsUpdated OnPlayerPawnsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPawnsUpdated OnAIPawnsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISettings AISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISimulationSettings AISimulationSettings;
    
public:
    AAIManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateOptimizationWave(UAIOptimizationComponent* OptimizationComponent, double ClosestDistance, const TMap<uint8, float>& OptimizationRanges) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateAISettings(const FIRRAISettings& InAISettings, const FIRRAISimulationSettings& InAISimulationSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterPlayerPawn(AActor* PlayerPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterAIPawn(AActor* AIPawn);
    
    UFUNCTION(BlueprintCallable)
    void Tick_AIVisibility();
    
    UFUNCTION(BlueprintCallable)
    void Tick_AIOptimization();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterPlayerPawn(AActor* PlayerPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAIPawn(AActor* AIPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAITimeAndWeatherEffects GetTimeAndWeatherEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllPlayerPawns() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllAIPawnsByTeamID(FGenericTeamId TeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllAIPawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAISimulationSettings GetAISimulationSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAISettings GetAISettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreHeadlampsOn() const;
    
};

