#include "MetasoundGeneratorHandle.h"

UMetasoundGeneratorHandle::UMetasoundGeneratorHandle() {
}

bool UMetasoundGeneratorHandle::WatchOutput(FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName) {
    return false;
}

void UMetasoundGeneratorHandle::UpdateWatchers() const {
}

double UMetasoundGeneratorHandle::GetCPUCoreUtilization() const {
    return 0.0;
}

void UMetasoundGeneratorHandle::EnableRuntimeRenderTiming(bool Enable) const {
}

UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(UAudioComponent* OnComponent) {
    return NULL;
}

bool UMetasoundGeneratorHandle::ApplyParameterPack(UMetasoundParameterPack* Pack) {
    return false;
}


