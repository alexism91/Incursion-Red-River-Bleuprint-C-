#include "AdvancedVoiceLibrary.h"

UAdvancedVoiceLibrary::UAdvancedVoiceLibrary() {
}

bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId) {
    return false;
}

void UAdvancedVoiceLibrary::UnRegisterLocalTalker(UObject* WorldContextObject, uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers(UObject* WorldContextObject) {
}

bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(UObject* WorldContextObject, uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide) {
    return false;
}

void UAdvancedVoiceLibrary::StopNetworkedVoice(UObject* WorldContextObject, uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::StartNetworkedVoice(UObject* WorldContextObject, uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::RemoveAllRemoteTalkers(UObject* WorldContextObject) {
}

bool UAdvancedVoiceLibrary::RegisterRemoteTalker(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId) {
    return false;
}

bool UAdvancedVoiceLibrary::RegisterLocalTalker(UObject* WorldContextObject, uint8 LocalPlayerNum) {
    return false;
}

void UAdvancedVoiceLibrary::RegisterAllLocalTalkers(UObject* WorldContextObject) {
}

bool UAdvancedVoiceLibrary::MuteRemoteTalker(UObject* WorldContextObject, uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide) {
    return false;
}

bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId) {
    return false;
}

bool UAdvancedVoiceLibrary::IsPlayerMuted(UObject* WorldContextObject, uint8 LocalUserNumChecking, const FBPUniqueNetId& UniqueNetId) {
    return false;
}

bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(UObject* WorldContextObject, uint8 LocalPlayerNum) {
    return false;
}

void UAdvancedVoiceLibrary::IsHeadsetPresent(UObject* WorldContextObject, bool& bHasHeadset, uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::GetNumLocalTalkers(UObject* WorldContextObject, int32& NumLocalTalkers) {
}


