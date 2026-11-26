#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DelayedGroupMovement.h"
#include "MovementGroupMemberInfo.h"
#include "Templates/SubclassOf.h"
#include "UPSBasePatrolObject.h"
#include "UPSMovementGroup.generated.h"

class AActor;
class ACharacter;
class AUPSGroupMovementAIController;
class AUPSGroupMovementFormation;
class UBillboardComponent;

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSMovementGroup : public AUPSBasePatrolObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* GroupLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACharacter*, FMovementGroupMemberInfo> MovementGroupMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateMovementPointsAroundLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUPSGroupMovementFormation> Formation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MembersMovementReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MembersMovementReactionTimeRandomDiviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSGroupMovementAIController* GroupMovementLeaderAIC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSGroupMovementFormation* SpawnedFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACharacter*, FDelayedGroupMovement> DelayedMovement;
    
public:
    AUPSMovementGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateLocationInFormationForCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupLeader(ACharacter* NewLeader);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGroupMember(ACharacter* MemberToRemove);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeaderStartMovementToLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderStartMovementToActor(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderCompleteMovement(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLeaderStartMovementToLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLeaderStartMovementToActor(AActor* NewActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeMovementGroup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeGroupMembers();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddGroupMember(ACharacter* NewMember);
    
};

