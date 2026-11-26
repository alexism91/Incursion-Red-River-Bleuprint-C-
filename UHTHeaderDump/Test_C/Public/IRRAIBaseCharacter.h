#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAICharacterInfo -FallbackName=IRRAICharacterInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=LXR -ObjectName=LXRSense -FallbackName=LXRSense
#include "AIInterface.h"
#include "AbilitiesInterface.h"
#include "IRRBaseCharacter.h"
#include "IRRDamageData.h"
#include "InventoryInterface.h"
#include "IRRAIBaseCharacter.generated.h"

class AActor;
class UAIOptimizationComponent;
class UIRRAIBehaviorComponent;
class UIRRAIMovementComponent;
class UIRRHeadlampComponent;
class UIRRRadioComponent;
class ULXRLightSenseComponent;
class ULXRMemoryComponent;
class UWidgetComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAIBaseCharacter : public AIRRBaseCharacter, public IInventoryInterface, public IAbilitiesInterface, public IAIInterface, public ILXRSense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SpawnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MuzzleFlashScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRAICharacterInfo AICharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipLegacyInit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* MarkerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> DamageMovementEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageEffectsDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamIdOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIOptimizationComponent* AIOptimizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRLightSenseComponent* LightSenseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRMemoryComponent* LightMemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRHeadlampComponent* HeadlampComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRRadioComponent* RadioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CosmeticAimTarget, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize CosmeticAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CosmeticAimTarget, meta=(AllowPrivateAccess=true))
    bool bCosmeticAimTargetActive;
    
public:
    AIRRAIBaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillResolveLoadout() const;
    
    UFUNCTION(BlueprintCallable)
    void TriggerRadioMessage(FGameplayTag BarkTag, float ChanceToSay, bool bForce, bool bIgnoreGate, float Delay, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGenericTeamId ResolveTeamId() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CosmeticAimTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageEffectsReceived(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyRevived(AActor* RevivedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyDeath(FIRRDamageData DamageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGenericTeamId GetTeamIdOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULXRLightSenseComponent* GetLightSenseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULXRMemoryComponent* GetLightMemoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRHeadlampComponent* GetHeadlampComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIBehaviorComponent* GetBehaviorComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIOptimizationComponent* GetAIOptimizationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIMovementComponent* GetAIMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAICharacterInfo GetAICharacterInfo() const;
    

    // Fix for true pure virtual functions not being implemented
};

