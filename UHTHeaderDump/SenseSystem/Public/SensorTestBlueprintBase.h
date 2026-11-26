#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESenseTestResult.h"
#include "EUpdateReady.h"
#include "SensedStimulus.h"
#include "SensorLocationTestBase.h"
#include "SensorTestBlueprintBase.generated.h"

class AActor;
class USenseReceiverComponent;
class USensorBase;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API USensorTestBlueprintBase : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    USensorTestBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESenseTestResult RunTestBP(UPARAM(Ref) FSensedStimulus& SensedStimulus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ESenseTestResult RunLocationTestBP(const FSensedStimulus& SensedStimulus, const FVector& TestLocation, float& ScoreResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreTest_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSensorTransformBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetSensorTestRadiusBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FBox GetSensorTestBoundBoxBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USensorBase* GetSensorOwnerBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USenseReceiverComponent* GetSenseReceiverComponentBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetReceiverTransformBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetReceiverActorBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EUpdateReady GetReadyToTestBP();
    
};

