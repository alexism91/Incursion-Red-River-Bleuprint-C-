#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavMovementInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UNavMovementInterface : public UInterface {
    GENERATED_BODY()
};

class INavMovementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopMovementKeepPathing() PURE_VIRTUAL(StopMovementKeepPathing,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StopActiveMovement() PURE_VIRTUAL(StopActiveMovement,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestPathMove(const FVector& MoveInput) PURE_VIRTUAL(RequestPathMove,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) PURE_VIRTUAL(RequestDirectMove,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsSwimming() const PURE_VIRTUAL(IsSwimming, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsMovingOnGround() const PURE_VIRTUAL(IsMovingOnGround, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFlying() const PURE_VIRTUAL(IsFlying, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFalling() const PURE_VIRTUAL(IsFalling, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsCrouching() const PURE_VIRTUAL(IsCrouching, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetVelocityForNavMovement() const PURE_VIRTUAL(GetVelocityForNavMovement, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetMaxSpeedForNavMovement() const PURE_VIRTUAL(GetMaxSpeedForNavMovement, return 0.0f;);
    
};

