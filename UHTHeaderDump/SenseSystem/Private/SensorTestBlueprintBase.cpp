#include "SensorTestBlueprintBase.h"

USensorTestBlueprintBase::USensorTestBlueprintBase() {
}

ESenseTestResult USensorTestBlueprintBase::RunTestBP_Implementation(FSensedStimulus& SensedStimulus) const {
    return ESenseTestResult::None;
}



FTransform USensorTestBlueprintBase::GetSensorTransformBP() const {
    return FTransform{};
}



USensorBase* USensorTestBlueprintBase::GetSensorOwnerBP() const {
    return NULL;
}

USenseReceiverComponent* USensorTestBlueprintBase::GetSenseReceiverComponentBP() const {
    return NULL;
}

FTransform USensorTestBlueprintBase::GetReceiverTransformBP() const {
    return FTransform{};
}

AActor* USensorTestBlueprintBase::GetReceiverActorBP() const {
    return NULL;
}



