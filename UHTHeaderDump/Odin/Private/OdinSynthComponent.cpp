#include "OdinSynthComponent.h"

UOdinSynthComponent::UOdinSynthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->decoder = NULL;
}

void UOdinSynthComponent::SetDecoder(UOdinDecoder* InDecoder) {
}

UOdinDecoder* UOdinSynthComponent::GetDecoder() const {
    return NULL;
}

UAudioComponent* UOdinSynthComponent::GetConnectedAudioComponent() {
    return NULL;
}

void UOdinSynthComponent::AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings) {
}


