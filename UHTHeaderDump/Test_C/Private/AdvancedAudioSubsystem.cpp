#include "AdvancedAudioSubsystem.h"

UAdvancedAudioSubsystem::UAdvancedAudioSubsystem() {
}

void UAdvancedAudioSubsystem::UnregisterOdinAudioCapture(UOdinAudioCapture* Capture) {
}

bool UAdvancedAudioSubsystem::StopPersistentEvent(int32 PlayingID, int32 FadeOutTimeMs) {
    return false;
}

void UAdvancedAudioSubsystem::StopAllPersistent(int32 FadeOutTimeMs) {
}

void UAdvancedAudioSubsystem::SetPersistentState(const UAkStateValue* StateValue) {
}

void UAdvancedAudioSubsystem::SetPersistentRtpcValue(const UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs) {
}

void UAdvancedAudioSubsystem::RegisterOdinAudioCapture(UOdinAudioCapture* Capture) {
}

int32 UAdvancedAudioSubsystem::PostPersistentEvent(UAkAudioEvent* Event) {
    return 0;
}

UOdinAudioCapture* UAdvancedAudioSubsystem::GetOdinAudioCapture() const {
    return NULL;
}

int32 UAdvancedAudioSubsystem::GetActivePersistentEventCount() const {
    return 0;
}


