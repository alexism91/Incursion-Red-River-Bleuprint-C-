#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRGrenadePredictionConfig.h"
#include "IRRGrenadePredictionResult.h"
#include "IRRGrenadePredictionUpdatedDelegateDelegate.h"
#include "IRRGrenadePredictionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRGrenadePredictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGrenadePredictionUpdatedDelegate OnPredictionUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGrenadePredictionConfig PredictionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BroadcastDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenUpdates;
    
    UIRRGrenadePredictionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtRest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrediction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilExplosion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRGrenadePredictionResult GetPredictionResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPredictedDangerLocation() const;
    
};

