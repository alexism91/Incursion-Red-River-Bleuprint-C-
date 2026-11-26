#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdFollowingComponent -FallbackName=CrowdFollowingComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=EIRRAvoidanceMode -FallbackName=EIRRAvoidanceMode
#include "CrowdSteeringSettings.h"
#include "IRRAICurrentPathData.h"
#include "IRRPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPathDecelerationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverExitMoveGrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdSteeringSettings SteeringSettings;
    
public:
    UIRRPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAvoidanceMode(EIRRAvoidanceMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAvoidanceMode GetRequestedAvoidanceMode() const;
    
    UFUNCTION(BlueprintPure)
    double GetMoveStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMoveStartedFromCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDecelerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAICurrentPathData GetCurrentPathData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAvoidanceMode GetAvoidanceMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainingPathLength() const;
    
};

