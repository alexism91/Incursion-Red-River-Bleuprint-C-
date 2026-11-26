#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EMovementGait.h"
#include "EMovementStance.h"
#include "MovementGaitItem.h"
#include "MovementManager.generated.h"

class ACharacter;
class UCharacterMovementComponent;
class UMovementSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UMovementManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSettings* MovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMovementStance MovementStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMovementGait MovementGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UMovementManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdate(float NewMovementSpeed, EMovementStance NewMovementStance, EMovementGait NewMovementGait);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnedGameplayTagsUpdated(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    void LocalUpdate();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMovementGaitItem> GetStanceSettings(EMovementStance Stance);
    
    UFUNCTION(BlueprintCallable)
    float GetMovementSpeed(EMovementStance Stance, EMovementGait Gait);
    
};

