#include "AdvancedAudioFunctionLibrary.h"

UAdvancedAudioFunctionLibrary::UAdvancedAudioFunctionLibrary() {
}

void UAdvancedAudioFunctionLibrary::UnregisterOdinAudioCapture(const UObject* WorldContextObject, UOdinAudioCapture* Capture) {
}

bool UAdvancedAudioFunctionLibrary::StopPersistentEvent(const UObject* WorldContextObject, int32 PlayingID, int32 FadeOutTimeMs) {
    return false;
}

void UAdvancedAudioFunctionLibrary::StopAllPersistentEvents(const UObject* WorldContextObject, int32 FadeOutTimeMs) {
}

bool UAdvancedAudioFunctionLibrary::SetDefaultAudioInputDevice(const UObject* WorldContextObject, UOdinAudioCapture* Capture) {
    return false;
}

bool UAdvancedAudioFunctionLibrary::SetAudioInputDeviceByName(const UObject* WorldContextObject, FName DeviceName, UOdinAudioCapture* Capture) {
    return false;
}

bool UAdvancedAudioFunctionLibrary::SetAudioInputDeviceById(const UObject* WorldContextObject, const FString& DeviceID, UOdinAudioCapture* Capture) {
    return false;
}

void UAdvancedAudioFunctionLibrary::RegisterOdinAudioCapture(const UObject* WorldContextObject, UOdinAudioCapture* Capture) {
}

int32 UAdvancedAudioFunctionLibrary::PostPersistentEvent(const UObject* WorldContextObject, UAkAudioEvent* Event) {
    return 0;
}

UOdinAudioCapture* UAdvancedAudioFunctionLibrary::GetOdinAudioCapture(const UObject* WorldContextObject) {
    return NULL;
}

FString UAdvancedAudioFunctionLibrary::GetCurrentAudioInputDeviceName(const UObject* WorldContextObject, UOdinAudioCapture* Capture) {
    return TEXT("");
}

bool UAdvancedAudioFunctionLibrary::GetCurrentAudioInputDevice(const UObject* WorldContextObject, FOdinCaptureDeviceInfo& CurrentDevice, UOdinAudioCapture* Capture) {
    return false;
}

TArray<FOdinCaptureDeviceInfo> UAdvancedAudioFunctionLibrary::GetAudioInputDevices() {
    return TArray<FOdinCaptureDeviceInfo>();
}

TArray<FString> UAdvancedAudioFunctionLibrary::GetAudioInputDeviceNames() {
    return TArray<FString>();
}

FString UAdvancedAudioFunctionLibrary::GetAudioInputDeviceDisplayName(const FOdinCaptureDeviceInfo& Device) {
    return TEXT("");
}

UAdvancedAudioSubsystem* UAdvancedAudioFunctionLibrary::GetAdvancedAudioSubsystem(const UObject* WorldContextObject) {
    return NULL;
}


