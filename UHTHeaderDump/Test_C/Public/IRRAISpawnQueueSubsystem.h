#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRTickableWorldSubSystem -FallbackName=IRRTickableWorldSubSystem
#include "IRRPendingEquip.h"
#include "IRRPendingPossession.h"
#include "IRRPendingValidation.h"
#include "IRRQueuedSpawn.h"
#include "IRRAISpawnQueueSubsystem.generated.h"

class AIRRAIBaseController;

UCLASS(Blueprintable)
class TEST_C_API UIRRAISpawnQueueSubsystem : public UIRRTickableWorldSubSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRPendingValidation> ValidationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRQueuedSpawn> CharacterSpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRPendingPossession> PossessionQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRPendingEquip> EquipQueue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIRRAIBaseController>> ActivationQueue;
    
public:
    UIRRAISpawnQueueSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQueuedSpawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQueuedPossessions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQueuedEquips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQueuedActivations() const;
    
};

