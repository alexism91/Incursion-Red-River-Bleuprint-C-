#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
#include "OnAbilityEndedDelegate.h"
#include "OnAbilityStartedDelegate.h"
#include "OnGameplayEffectEndedDelegate.h"
#include "OnGameplayEffectStartedDelegate.h"
#include "OnGameplayEffectUpdatedDelegate.h"
#include "SimpleAttributeBuff.h"
#include "SimpleAttributeModifier.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityComponent.generated.h"

class UGameplayTagsComponent;
class USimpleGameplayAbility;
class USimpleGameplayAttribute;
class USimpleGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UGameplayAbilityComponent : public UIRRObjectReplicationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TryRestartTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayAttribute*> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USimpleGameplayAbility>> DefaultGrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayEffect*> DefaultEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayAbility*> GrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagsComponent* GameplayTagsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayAbility*> ActiveAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayAbility*> BufferedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USimpleGameplayEffect*> ActiveEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityStarted OnAbilityStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityEnded OnAbilityEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectStarted OnGameplayEffectStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectEnded OnGameplayEffectEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectUpdated OnGameplayEffectUpdatedDelegate;
    
    UGameplayAbilityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryStopGameplayEffectByTag(FGameplayTag GameplayEffectTag);
    
    UFUNCTION(BlueprintCallable)
    bool TryStopGameplayEffectByRef(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    bool TryStopGameplayEffectByClass(TSubclassOf<USimpleGameplayEffect> GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    bool TryStopAbilityByTag(const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartGameplayEffectByRef(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    USimpleGameplayEffect* TryStartGameplayEffectByClassAndReturn(TSubclassOf<USimpleGameplayEffect> GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartGameplayEffectByClass(TSubclassOf<USimpleGameplayEffect> GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartAbilityByRef(USimpleGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartAbilityByClass(TSubclassOf<USimpleGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartAbility(USimpleGameplayAbility* GameplayAbility, bool bForcedGranted);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartAbilitiesByTag(const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    void TryRestartAbilities();
    
    UFUNCTION(BlueprintCallable)
    void StopGameplayEffect(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    void StopAbilityByClass(TSubclassOf<USimpleGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    void StopAbilitiesByTag(const FGameplayTag& AbilityTag, bool bHoldReleased);
    
    UFUNCTION(BlueprintCallable)
    void StartGameplayEffect(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBufferedAbilitiesByTag(const FGameplayTagContainer& AbilityTags);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveAttributeBuff_Server(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttributeBuff(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectUpdated(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectFinished(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectCommited(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayAbilityFinished(USimpleGameplayAbility* GameplayAbility, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayAbilityCommitted(USimpleGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityGrantedByTag(const FGameplayTag& AbilityTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActiveByTag(const FGameplayTag& AbilityTag) const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptAbilitiesByTag(const FGameplayTagContainer& AbilityTags);
    
    UFUNCTION(BlueprintCallable)
    bool GiveAbility(USimpleGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USimpleGameplayAttribute* GetAttributeSet(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<USimpleGameplayAttribute*> GetAttributes();
    
    UFUNCTION(BlueprintCallable)
    TArray<USimpleGameplayEffect*> GetActiveGameplayEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USimpleGameplayAbility*> GetActiveAbilities() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExecuteAttributeModifier_Server(const FGameplayTag& Tag, const FSimpleAttributeModifier& Modifier);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAttributeModifier(const FGameplayTag& Tag, const FSimpleAttributeModifier& Modifier);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllAbilities();
    
    UFUNCTION(BlueprintCallable)
    bool ClearAbility(USimpleGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintCallable)
    bool CanStartGameplayEffectByRef(USimpleGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartAbilityByTag(const FGameplayTag& AbilityTag, bool bForcedGranted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartAbility(USimpleGameplayAbility* GameplayAbility, bool bForcedGranted) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddAttributeBuff_Server(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributeBuff(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff);
    
};

