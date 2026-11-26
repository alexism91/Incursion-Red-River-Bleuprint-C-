#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SensePointData.h"
#include "SenseStimulusInterface.generated.h"

class USenseStimulusBase;

UINTERFACE(Blueprintable)
class SENSESYSTEM_API USenseStimulusInterface : public UInterface {
    GENERATED_BODY()
};

class SENSESYSTEM_API ISenseStimulusInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IPrepareSenseData(FName SensorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSensePointData IGetSingleSensePoint(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FSensePointData> IGetSensePoints(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USenseStimulusBase* IGetActorStimulus() const;
    
};

