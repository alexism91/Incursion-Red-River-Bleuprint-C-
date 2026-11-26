#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EWarpTargetLocationOffsetDirection.h"
#include "MotionWarpingPreUpdateDelegate.h"
#include "MotionWarpingTarget.h"
#include "SwitchOffConditionData.h"
#include "MotionWarpingComponent.generated.h"

class UMotionWarpingBaseAdapter;
class UMotionWarpingSwitchOffCondition;
class URootMotionModifier;
class USceneComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMotionWarpingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchForWindowsInAnimsWithinMontages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionWarpingPreUpdate OnPreUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMotionWarpingBaseAdapter* OwnerAdapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URootMotionModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMotionWarpingTarget> WarpTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSwitchOffConditionData> SwitchOffConditions;
    
public:
    UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    int32 RemoveWarpTargets(const TArray<FName>& WarpTargetNames);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveWarpTarget(FName WarpTargetName);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveAllWarpTargets();
    
    UFUNCTION(BlueprintCallable)
    void DisableAllRootMotionModifiers();
    
    UFUNCTION(BlueprintCallable)
    void AddSwitchOffCondition(FName WarpTargetName, UMotionWarpingSwitchOffCondition* Condition);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const USceneComponent* Component, FName BoneName, bool bFollowComponent, EWarpTargetLocationOffsetDirection LocationOffsetDirection, FVector LocationOffset, FRotator RotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget);
    
};

