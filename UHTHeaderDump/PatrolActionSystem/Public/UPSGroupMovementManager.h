#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UPSGroupMovementManager.generated.h"

class ACharacter;
class AUPSMovementGroup;
class UUPSGroupMovementManager;

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSGroupMovementManager : public UObject {
    GENERATED_BODY()
public:
    UUPSGroupMovementManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AUPSMovementGroup*> GetMovementGroups();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetMovementGroupLeaderFromMember(const ACharacter* GroupMember) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUPSMovementGroup* GetMovementGroup(const ACharacter* MovementGroupLeaderCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUPSGroupMovementManager* GetGroupMovementManager();
    
};

