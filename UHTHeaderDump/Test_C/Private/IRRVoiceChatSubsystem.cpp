#include "IRRVoiceChatSubsystem.h"

UIRRVoiceChatSubsystem::UIRRVoiceChatSubsystem() {
    this->room = NULL;
    this->AudioCapture = NULL;
    this->encoder = NULL;
    this->pipeline = NULL;
    this->MicLevelMeter = NULL;
    this->MuteEffect = NULL;
}

bool UIRRVoiceChatSubsystem::ShouldConnectToVoiceChat() const {
    return false;
}

void UIRRVoiceChatSubsystem::SetVoiceIsolation(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SetVoiceActivityDetection(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SetPushToTalkHeld(bool bHeld) {
}

void UIRRVoiceChatSubsystem::SetPushToTalkEnabled(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SetNoiseSuppression(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SetInputSensitivityDb(float Db) {
}

void UIRRVoiceChatSubsystem::SetHighPassFilter(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SetEchoCancellation(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SetAutoGainControl(bool bEnabled) {
}

void UIRRVoiceChatSubsystem::SelectOutputDevice(int64 WwiseDeviceId, const FString& DisplayName) {
}

void UIRRVoiceChatSubsystem::SelectInputDevice(const FString& DeviceID) {
}

void UIRRVoiceChatSubsystem::RequestDisconnect() {
}

void UIRRVoiceChatSubsystem::RequestConnect() {
}

void UIRRVoiceChatSubsystem::RefreshOutputDevices() {
}

bool UIRRVoiceChatSubsystem::IsVoiceIsolationSupported() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsUsingSharedCapture() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsTransmitting() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsPushToTalkHeld() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsPushToTalkEnabled() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsPlayerTalkingByUserId(const FString& UserId) const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsPlayerTalking(const APlayerState* Player) const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsLocalPlayerTalking() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsConnected() const {
    return false;
}

bool UIRRVoiceChatSubsystem::IsCaptureRunning() const {
    return false;
}

void UIRRVoiceChatSubsystem::HandleRoomStatusChanged(UOdinRoom* InRoom, FOdinRoomStatusChanged Data) {
}

void UIRRVoiceChatSubsystem::HandleRoomJoined(UOdinRoom* InRoom, FOdinJoined Data) {
}

void UIRRVoiceChatSubsystem::HandleRoomError(UOdinRoom* InRoom, FOdinError Data) {
}

void UIRRVoiceChatSubsystem::HandlePeerLeft(UOdinRoom* InRoom, FOdinPeerLeft Data) {
}

void UIRRVoiceChatSubsystem::HandlePeerJoined(UOdinRoom* InRoom, FOdinPeerJoined Data) {
}

void UIRRVoiceChatSubsystem::HandleEncoderAudioEvent(UOdinEncoder* InEncoder, EOdinAudioEvents Filter) {
}

void UIRRVoiceChatSubsystem::HandleDecoderAudioEvent(UOdinDecoder* InDecoder, EOdinAudioEvents Filter) {
}

bool UIRRVoiceChatSubsystem::GetVoiceIsolation() const {
    return false;
}

int32 UIRRVoiceChatSubsystem::GetVoiceClientSerial() const {
    return 0;
}

bool UIRRVoiceChatSubsystem::GetVoiceActivityDetection() const {
    return false;
}

FIRRVoiceUserSettings UIRRVoiceChatSubsystem::GetUserSettings() const {
    return FIRRVoiceUserSettings{};
}

TArray<APlayerState*> UIRRVoiceChatSubsystem::GetTalkingPlayers() const {
    return TArray<APlayerState*>();
}

FString UIRRVoiceChatSubsystem::GetStatusText() const {
    return TEXT("");
}

FName UIRRVoiceChatSubsystem::GetPushToTalkFallbackKey() const {
    return NAME_None;
}

int32 UIRRVoiceChatSubsystem::GetPeerCount() const {
    return 0;
}

int64 UIRRVoiceChatSubsystem::GetOwnPeerId() const {
    return 0;
}

TArray<FIRRVoiceOutputDeviceInfo> UIRRVoiceChatSubsystem::GetOutputDevices() const {
    return TArray<FIRRVoiceOutputDeviceInfo>();
}

bool UIRRVoiceChatSubsystem::GetNoiseSuppression() const {
    return false;
}

FString UIRRVoiceChatSubsystem::GetLocalVoiceUserId() const {
    return TEXT("");
}

float UIRRVoiceChatSubsystem::GetLocalMicLevelDb() const {
    return 0.0f;
}

float UIRRVoiceChatSubsystem::GetInputSensitivityDb() const {
    return 0.0f;
}

int32 UIRRVoiceChatSubsystem::GetInProcessVoiceClientCount() const {
    return 0;
}

bool UIRRVoiceChatSubsystem::GetHighPassFilter() const {
    return false;
}

bool UIRRVoiceChatSubsystem::GetEchoCancellation() const {
    return false;
}

FString UIRRVoiceChatSubsystem::GetCurrentRoomId() const {
    return TEXT("");
}

EIRRVoiceChatState UIRRVoiceChatSubsystem::GetConnectionState() const {
    return EIRRVoiceChatState::Disconnected;
}

FString UIRRVoiceChatSubsystem::GetConnectDebugLine() const {
    return TEXT("");
}

int32 UIRRVoiceChatSubsystem::GetBoundPeerCount() const {
    return 0;
}

bool UIRRVoiceChatSubsystem::GetAutoGainControl() const {
    return false;
}


