#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UPSPointActionMovementHandler.generated.h"

class ACharacter;
class UUPSEnemyPointActionComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSPointActionMovementHandler : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* MovementCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUPSEnemyPointActionComponent* PointActionComponent;
    
public:
    AUPSPointActionMovementHandler(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FinishMovement(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point);
    
    UFUNCTION(BlueprintCallable)
    void FinishMovement(bool bSuccess);
    
};

