#include "WwiseDynamicEventInfoLibrary.h"

UWwiseDynamicEventInfoLibrary::UWwiseDynamicEventInfoLibrary() {
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::SetWwiseShortId(const FWwiseDialogueEventInfo& Ref, int32 WwiseShortId) {
    return FWwiseDialogueEventInfo{};
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::SetWwiseName(const FWwiseDialogueEventInfo& Ref, const FString& WwiseName) {
    return FWwiseDialogueEventInfo{};
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::SetWwiseGuid(const FWwiseDialogueEventInfo& Ref, const FGuid& WwiseGuid) {
    return FWwiseDialogueEventInfo{};
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::SetSwitchContainerLoading(const FWwiseDialogueEventInfo& Ref, const EWwiseAudioNodeLoading& AudioNodeLoading) {
    return FWwiseDialogueEventInfo{};
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::SetHardCodedSoundBankShortId(const FWwiseDialogueEventInfo& Ref, int32 HardCodedSoundBankShortId) {
    return FWwiseDialogueEventInfo{};
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::SetDestroyOptions(const FWwiseDialogueEventInfo& Ref, const EWwiseAssetDestroyOptions& DestroyOptions) {
    return FWwiseDialogueEventInfo{};
}

FWwiseDialogueEventInfo UWwiseDynamicEventInfoLibrary::MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, EWwiseAudioNodeLoading AudioNodeLoading, EWwiseAssetDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId) {
    return FWwiseDialogueEventInfo{};
}

int32 UWwiseDynamicEventInfoLibrary::GetWwiseShortId(const FWwiseDialogueEventInfo& Ref) {
    return 0;
}

FString UWwiseDynamicEventInfoLibrary::GetWwiseName(const FWwiseDialogueEventInfo& Ref) {
    return TEXT("");
}

FGuid UWwiseDynamicEventInfoLibrary::GetWwiseGuid(const FWwiseDialogueEventInfo& Ref) {
    return FGuid{};
}

int32 UWwiseDynamicEventInfoLibrary::GetHardCodedSoundBankShortId(const FWwiseDialogueEventInfo& Ref) {
    return 0;
}

EWwiseAssetDestroyOptions UWwiseDynamicEventInfoLibrary::GetDestroyOptions(const FWwiseDialogueEventInfo& Ref) {
    return EWwiseAssetDestroyOptions::StopEventOnDestroy;
}

EWwiseAudioNodeLoading UWwiseDynamicEventInfoLibrary::GetAudioNodeLoading(const FWwiseDialogueEventInfo& Ref) {
    return EWwiseAudioNodeLoading::AlwaysLoad;
}

void UWwiseDynamicEventInfoLibrary::BreakStruct(FWwiseDialogueEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseAudioNodeLoading& AudioNodeLoading, EWwiseAssetDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId) {
}


