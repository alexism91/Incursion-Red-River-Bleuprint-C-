#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIBehaviorDevConfig -FallbackName=IRRAIBehaviorDevConfig
#include "IRRAIActiveTargetChangeDelegateDelegate.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIBehaviorDelegateDelegate.h"
#include "IRRAIConditionSource.h"
#include "IRRAIDangerZoneDelegateDelegate.h"
#include "IRRAIPeaceDelegateDelegate.h"
#include "IRRAISuppressionEventData.h"
#include "IRRBehavior.h"
#include "IRRAIBehaviorComponent.generated.h"

class AActor;
class UHTN;
class UHTNExtension_SubNetworkDynamic;
class UIRRAITarget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIBehaviorComponent : public UIRRAIBaseControllerComponent, public IIRRAIConditionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIBehaviorDevConfig BehaviorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxShotAtDistanceToHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBehavior ActiveBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInDangerZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIDangerZoneDelegate OnDangerZoneStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIBehaviorDelegate OnBehaviorResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIPeaceDelegate OnPeaceStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIBehaviorDelegate OnBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIBehaviorDelegate OnInCombatBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIActiveTargetChangeDelegate OnActiveTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAtPeace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBehavior BehaviorToSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispatched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DispatchLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StandingOrderBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StandingOrderLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingOrderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAITarget* ActiveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHTNExtension_SubNetworkDynamic* SubNetworkDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* FormationPatrolPlan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* InstalledBehaviorPlan;
    
public:
    UIRRAIBehaviorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReleaseStandingOrder();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseDispatch();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSuppressionReceived(AActor* Owner, const FIRRAISuppressionEventData& SuppressionEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispatched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStandingOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStandingOrderBehavior() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignStandingOrder(FGameplayTag OrderBehavior, FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void AssignPost(FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void AssignDispatch(FVector Location, float ArrivalRadius, float MaxDuration);
    

    // Fix for true pure virtual functions not being implemented
};

