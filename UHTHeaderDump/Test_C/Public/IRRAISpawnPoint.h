#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRSpawnPointBase -FallbackName=IRRSpawnPointBase
#include "IRRSpawnValidationConfig.h"
#include "Templates/SubclassOf.h"
#include "IRRAISpawnPoint.generated.h"

class AAIController;
class AActor;
class AIRRAIBaseCharacter;
class AUPSMovementGroup;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAISpawnPoint : public AIRRSpawnPointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSpawnValidationConfig SpawnValidationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadoutOverrideId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoleOverrideId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSMovementGroup* MovementGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAIBaseCharacter*> SpawnedBots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingSpawnCount;
    
public:
    AIRRAISpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSpawningBots(const TArray<TSubclassOf<AActor>>& CharacterClasses, UClass* ControllerClass, const TArray<FVector>& SpawnLocations, float SpawnHeightOffset, FName BotTypeId);
    
    UFUNCTION(BlueprintCallable)
    AIRRAIBaseCharacter* SpawnAI(TSubclassOf<AIRRAIBaseCharacter> CharacterClass, TSubclassOf<AAIController> ControllerClass, FVector Location, FRotator Rotation, float SpawnHeightOffset, FName BotTypeId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawningComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBotSpawned(AIRRAIBaseCharacter* Bot, bool bIsLeader);
    
    UFUNCTION(BlueprintCallable)
    void JoinMovementGroup(AUPSMovementGroup* Group);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawning() const;
    
    UFUNCTION(BlueprintCallable)
    AUPSMovementGroup* InitMovementGroup(TSubclassOf<AUPSMovementGroup> GroupClass);
    
};

