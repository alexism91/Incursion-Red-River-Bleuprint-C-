#include "SenseStimulusComponent.h"

USenseStimulusComponent::USenseStimulusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterfaceOwnerBitFlags = 0;
}

void USenseStimulusComponent::SetInvisible_Server_Implementation(bool bActivate) {
}

void USenseStimulusComponent::SetInterfaceFlag(ESSInterfaceFlag Flag, bool bValue) {
}


