#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRDamageData.h"
#include "IRRTeamComponent.generated.h"

class AActor;
class AController;
class AIRRBaseCharacter;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRTeamComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Friendlies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Neutrals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Hostiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APawn*, TEnumAsByte<ETeamAttitude::Type>> PawnAttitudeMap;
    
public:
    UIRRTeamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReEvaluatePawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void RebuildCache();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPossess(AIRRBaseCharacter* Character, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevive(AActor* RevivedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(FIRRDamageData DamageData);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterRemoved(AIRRBaseCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterAdded(AIRRBaseCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetNeutrals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetHostiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetFriendlies() const;
    
};

