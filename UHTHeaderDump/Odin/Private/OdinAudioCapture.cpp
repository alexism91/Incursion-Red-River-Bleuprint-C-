#include "OdinAudioCapture.h"

UOdinAudioCapture::UOdinAudioCapture() {
    this->CurrentSelectedDeviceIndex = -1;
    this->AllowedTimeWithoutStreamUpdate = 1.00f;
    this->AllowedTimeForStreamSetup = 3.00f;
    this->bTryRecognizingDeviceDisconnect = true;
}

void UOdinAudioCapture::StartCapturing(bool& bSuccess) {
}

void UOdinAudioCapture::SetTryRecognizingDeviceDisconnected(bool bTryRecognizing) {
}

bool UOdinAudioCapture::RestartCapturing(bool bAutomaticallyStartCapture) {
    return false;
}

bool UOdinAudioCapture::IsStreamOpen() const {
    return false;
}

bool UOdinAudioCapture::GetTryRecognizingDeviceDisconnected() const {
    return false;
}

float UOdinAudioCapture::GetStreamTime() const {
    return 0.0f;
}

void UOdinAudioCapture::GetCurrentAudioCaptureDevice(FOdinCaptureDeviceInfo& CurrentDevice) const {
}

void UOdinAudioCapture::GetCaptureDevicesAvailable(TArray<FOdinCaptureDeviceInfo>& OutDevices) {
}

void UOdinAudioCapture::ChangeToDefaultCaptureDevice() {
}

void UOdinAudioCapture::ChangeCaptureDeviceByName(FName DeviceName, bool& bSuccess) {
}

void UOdinAudioCapture::ChangeCaptureDeviceById(const FString& NewDeviceId, bool& bSuccess) {
}


