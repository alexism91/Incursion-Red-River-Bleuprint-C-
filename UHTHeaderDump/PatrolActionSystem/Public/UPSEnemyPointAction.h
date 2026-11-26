#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnEnemyPointActionFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "UPSEnemyPointAction.generated.h"

class ACharacter;
class AUPSPointActionMovementHandler;
class USceneComponent;
class UUPSEnemyPointActionComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSEnemyPointAction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUPSEnemyPointActionComponent* DefaultEnemyPointActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUPSEnemyPointActionComponent*> EnemyActionPointComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ACharacter*> CharactersReachedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACharacter*, AUPSPointActionMovementHandler*> CharacterMovementHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ACharacter*> CharactersStartedPointAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUPSPointActionMovementHandler> MovementHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishActionAfterCharacterAbort;
    
public:
    AUPSEnemyPointAction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartEnemyPointAction(FOnEnemyPointActionFinished OnPointActionFinishedCallback, ACharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterReachPoint(ACharacter* Character, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_StartEnemyPointAction(ACharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnCharacterReachPoint(ACharacter* Character, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FinishPointAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClearPointActionForCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanStartPointAction(ACharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_AllCharactersReachPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFreePointComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUPSEnemyPointActionComponent* GetFreeEnemyActionPointComponent(ACharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUPSEnemyPointActionComponent*> GetEnemyActionPointComponents() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACharacter*> GetCharactersStartedPointAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACharacter*> GetCharactersReachedPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACharacter*> GetCharactersGoingToPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUPSEnemyPointActionComponent* GetCharacterPoint(ACharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishPointAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableVisualization(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearPointActionForCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartPointAction(ACharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void AllCharactersReachPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    void AbortEnemyPointAction(ACharacter* Character);
    
};

