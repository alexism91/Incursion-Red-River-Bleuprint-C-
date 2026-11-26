#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "OnActionFinishedDelegate.h"
#include "UPSEnemyAction.generated.h"

class ACharacter;
class UUPSActionCondition;
class UUPSEnemyActionScript;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PATROLACTIONSYSTEM_API UUPSEnemyAction : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionFinished OnActionFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUPSEnemyActionScript*> EnemyActionScripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUPSActionCondition*> ActionConditions;
    
public:
    UUPSEnemyAction();

    UFUNCTION(BlueprintCallable)
    void StartAction(ACharacter* NewCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InternalStartAction(ACharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InternalFinishAction(ACharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InternalAbortAction(ACharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void FinishAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void AbortAction();
    
};

