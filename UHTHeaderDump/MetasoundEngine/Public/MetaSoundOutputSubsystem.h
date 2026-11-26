#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OnMetasoundOutputValueChangedDelegate.h"
#include "MetaSoundOutputSubsystem.generated.h"

class UAudioComponent;

UCLASS(Blueprintable, MinimalAPI)
class UMetaSoundOutputSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UMetaSoundOutputSubsystem();

    UFUNCTION(BlueprintCallable)
    bool WatchOutput(UAudioComponent* AudioComponent, FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
    
    UFUNCTION(BlueprintCallable)
    bool UnwatchOutput(UAudioComponent* AudioComponent, FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
    
};

