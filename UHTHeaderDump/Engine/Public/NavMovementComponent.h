#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MovementComponent.h"
#include "MovementProperties.h"
#include "NavAgentProperties.h"
#include "NavMovementInterface.h"
#include "NavMovementProperties.h"
#include "NavMovementComponent.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UNavMovementComponent : public UMovementComponent, public INavMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedPathBrakingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateNavAgentWithOwnersCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint8 bUseAccelerationForPaths: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFixedBrakingDistanceForPaths: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavMovementProperties NavMovementProperties;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentProperties NavAgentProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementProperties MovementState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PathFollowingComp;
    
public:
    UNavMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocityForNavMovement() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopMovementKeepPathing() override PURE_VIRTUAL(StopMovementKeepPathing,);
    
    UFUNCTION(BlueprintCallable)
    void StopActiveMovement() override PURE_VIRTUAL(StopActiveMovement,);
    
    UFUNCTION(BlueprintCallable)
    void RequestPathMove(const FVector& MoveInput) override PURE_VIRTUAL(RequestPathMove,);
    
    UFUNCTION(BlueprintCallable)
    void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override PURE_VIRTUAL(RequestDirectMove,);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxSpeedForNavMovement() const override PURE_VIRTUAL(GetMaxSpeedForNavMovement, return 0.0f;);
    
};

