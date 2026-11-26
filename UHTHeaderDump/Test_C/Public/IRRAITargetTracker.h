#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SensedStimulus -FallbackName=SensedStimulus
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIDevConfigAITarget.h"
#include "IRRAIDevConfigFocusPoint.h"
#include "IRRAISenseCache.h"
#include "IRRAISenseDataSource.h"
#include "IRRAISuppressionEventData.h"
#include "IRRDamageData.h"
#include "IRRAITargetTracker.generated.h"

class AActor;
class APawn;
class UIRRAITarget;
class USensorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAITargetTracker : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRAITarget*> TargetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APawn*, UIRRAITarget*> TargetDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISenseCache SenseCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIDevConfigFocusPoint FocusPointConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIDevConfigAITarget TargetConfig;
    
public:
    UIRRAITargetTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TargetSensed(FIRRAISenseDataSource SenseData, float AdditionalDelay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSuppressionEvent(AActor* Owner, const FIRRAISuppressionEventData& SuppressionEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& SensedStimuli);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisibleTarget(bool bIncludeGainingSight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTargetWithinDistance(float StraightLineDistance, float PathLength, float RecentSightTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShootableTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRAITarget*> GetVisibleTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRAITarget*> GetTargetsWithTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAITarget* GetTarget(const APawn* TargetActor) const;
    
    UFUNCTION(BlueprintCallable)
    UIRRAITarget* GetOrCreateTarget(APawn* TargetActor, bool bForceAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRAITarget*> GetKnownTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRAITarget*> GetConfirmedHostileTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRAITarget*> GetAllTargets() const;
    
};

