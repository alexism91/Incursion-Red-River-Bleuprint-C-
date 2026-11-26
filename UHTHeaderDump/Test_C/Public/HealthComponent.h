#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "BodyPartSetup.h"
#include "EIRRBodyPart.h"
#include "IRRDamageData.h"
#include "OnReceivedDamagedDelegate.h"
#include "Templates/SubclassOf.h"
#include "HealthComponent.generated.h"

class AActor;
class ACharacter;
class AController;
class UCurveFloat;
class UDamageType;
class UIRRItemDefinition;
class UPrimitiveComponent;
class USimpleGameplayAttribute_Health;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedAnimGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EIRRBodyPart> BodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIRRBodyPart, FBodyPartSetup> BodyPartsSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FallDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> DamageMultiplierByInstigatorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleGameplayAttribute_Health* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallHeightStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTechnicalInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bKeepInventoryOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemDefinition* DamageItemDefinition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedDamaged OnReceiveDamage;
    
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetTechnicalInvulnerable_Server(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetKeepInventoryOnDeath_Server(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetIsInvincible_Server(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DebugHeal(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DebugApplyDamage(float Amount, FName BoneName, TSubclassOf<UDamageType> DebugDamageType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Revive(AActor* ReviveBy);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceivedDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak);
    
    UFUNCTION(BlueprintCallable)
    void OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeBulletDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser, UIRRItemDefinition* NewDamageItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnMovemendModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ReceivedDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDead() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealthValue();
    
};

