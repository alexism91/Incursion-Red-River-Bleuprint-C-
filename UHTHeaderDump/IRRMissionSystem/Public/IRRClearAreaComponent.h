#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnAreaClearedDelegate.h"
#include "IRRClearAreaComponent.generated.h"

class AIRRBaseCharacter;
class AIRRLevelTrigger;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRClearAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCountAIInsideArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAreaCleared OnAreaCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> TrackedAIPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreaCleared;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRRLevelTrigger* Trigger;
    
public:
    UIRRClearAreaComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPawnLeftZone(AIRRLevelTrigger* LevelZone, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEnteredZone(AIRRLevelTrigger* LevelZone, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterUnRegistered(AIRRBaseCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AIRRBaseCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaCleared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetTrackedAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAICount() const;
    
};

