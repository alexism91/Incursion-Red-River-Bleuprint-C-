#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnGroundHoldReleasedDelegate.h"
#include "IRRGroundHoldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRGroundHoldComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroundHoldReleased OnHoldReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorSearchDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckInterval;
    
    UIRRGroundHoldComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReportGroundLoaded(int32 InHoldId);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RedeployPawn(const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHolding() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HoldPawnUntilGroundLoaded();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReleaseHold(int32 InHoldId, FVector StandLocation, bool bOnGround);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BeginHold(int32 InHoldId, FVector Location, FRotator Rotation, bool bSetRotation);
    
};

