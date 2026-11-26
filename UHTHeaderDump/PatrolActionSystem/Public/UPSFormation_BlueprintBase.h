#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "UPSGroupMovementFormation.h"
#include "UPSFormation_BlueprintBase.generated.h"

class AActor;
class ACharacter;

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSFormation_BlueprintBase : public AUPSGroupMovementFormation {
    GENERATED_BODY()
public:
    AUPSFormation_BlueprintBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnRemoveCharacterFromGroup(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLeaderStartMovementToNewLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLeaderStartMovementToNewActor(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLeaderCompleteMovement(TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAddCharacterInGroup(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitFormation(ACharacter* InLeaderCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector K2_GetLocationInFormationForCharacter(ACharacter* Character);
    
};

