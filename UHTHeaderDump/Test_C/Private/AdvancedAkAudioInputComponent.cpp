#include "AdvancedAkAudioInputComponent.h"

UAdvancedAkAudioInputComponent::UAdvancedAkAudioInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlaybackDecoder = NULL;
    this->VoiceActivityRtpc = NULL;
    this->SampleRate = 48000;
    this->bIsStereo = false;
    this->LoopbackGenerator = NULL;
}

void UAdvancedAkAudioInputComponent::UnassignOdinDecoder() {
}

void UAdvancedAkAudioInputComponent::SetIsMuted(bool bNewIsMuted) {
}

bool UAdvancedAkAudioInputComponent::GetIsMuted() const {
    return false;
}

void UAdvancedAkAudioInputComponent::AssignOdinDecoder(UOdinDecoder* decoder) {
}

void UAdvancedAkAudioInputComponent::AssignLoopbackGenerator(UAudioGenerator* generator) {
}


