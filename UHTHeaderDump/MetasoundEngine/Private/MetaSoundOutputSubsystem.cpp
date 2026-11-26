#include "MetaSoundOutputSubsystem.h"

UMetaSoundOutputSubsystem::UMetaSoundOutputSubsystem() {
}

bool UMetaSoundOutputSubsystem::WatchOutput(UAudioComponent* AudioComponent, FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName) {
    return false;
}

bool UMetaSoundOutputSubsystem::UnwatchOutput(UAudioComponent* AudioComponent, FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName) {
    return false;
}


