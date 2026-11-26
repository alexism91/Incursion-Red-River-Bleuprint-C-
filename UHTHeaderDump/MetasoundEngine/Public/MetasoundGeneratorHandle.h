#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnMetasoundOutputValueChangedDelegate.h"
#include "MetasoundGeneratorHandle.generated.h"

class UAudioComponent;
class UMetasoundGeneratorHandle;
class UMetasoundParameterPack;

UCLASS(Blueprintable, MinimalAPI)
class UMetasoundGeneratorHandle : public UObject {
    GENERATED_BODY()
public:
    UMetasoundGeneratorHandle();

    UFUNCTION(BlueprintCallable)
    bool WatchOutput(FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateWatchers() const;
    
    UFUNCTION(BlueprintPure)
    double GetCPUCoreUtilization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableRuntimeRenderTiming(bool Enable) const;
    
    UFUNCTION(BlueprintCallable)
    static UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(UAudioComponent* OnComponent);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyParameterPack(UMetasoundParameterPack* Pack);
    
};

