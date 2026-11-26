#include "IRRVoiceChatFunctionLibrary.h"

UIRRVoiceChatFunctionLibrary::UIRRVoiceChatFunctionLibrary() {
}

void UIRRVoiceChatFunctionLibrary::SetPushToTalkHeld(const UObject* WorldContextObject, bool bHeld) {
}

void UIRRVoiceChatFunctionLibrary::SetPushToTalkEnabled(const UObject* WorldContextObject, bool bEnabled) {
}

bool UIRRVoiceChatFunctionLibrary::IsVoiceChatConnected(const UObject* WorldContextObject) {
    return false;
}

bool UIRRVoiceChatFunctionLibrary::IsPushToTalkEnabled(const UObject* WorldContextObject) {
    return false;
}

bool UIRRVoiceChatFunctionLibrary::IsPlayerTalking(const UObject* WorldContextObject, const APlayerState* Player) {
    return false;
}

bool UIRRVoiceChatFunctionLibrary::IsLocalPlayerTalking(const UObject* WorldContextObject) {
    return false;
}

FIRRVoiceUserSettings UIRRVoiceChatFunctionLibrary::GetVoiceUserSettings(const UObject* WorldContextObject) {
    return FIRRVoiceUserSettings{};
}

FString UIRRVoiceChatFunctionLibrary::GetVoiceChatStatusText(const UObject* WorldContextObject) {
    return TEXT("");
}

EIRRVoiceChatState UIRRVoiceChatFunctionLibrary::GetVoiceChatState(const UObject* WorldContextObject) {
    return EIRRVoiceChatState::Disconnected;
}

FString UIRRVoiceChatFunctionLibrary::GetVoiceChatRoomId(const UObject* WorldContextObject) {
    return TEXT("");
}

UIRRVoiceChatSubsystem* UIRRVoiceChatFunctionLibrary::GetVoiceChat(const UObject* WorldContextObject) {
    return NULL;
}

TArray<APlayerState*> UIRRVoiceChatFunctionLibrary::GetTalkingPlayers(const UObject* WorldContextObject) {
    return TArray<APlayerState*>();
}

float UIRRVoiceChatFunctionLibrary::GetLocalMicLevelDb(const UObject* WorldContextObject) {
    return 0.0f;
}


