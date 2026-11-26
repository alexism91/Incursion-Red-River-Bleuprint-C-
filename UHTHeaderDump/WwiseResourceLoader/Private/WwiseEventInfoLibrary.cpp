#include "WwiseEventInfoLibrary.h"

UWwiseEventInfoLibrary::UWwiseEventInfoLibrary() {
}

FWwiseEventInfo UWwiseEventInfoLibrary::SetWwiseShortId(const FWwiseEventInfo& Ref, int32 WwiseShortId) {
    return FWwiseEventInfo{};
}

FWwiseEventInfo UWwiseEventInfoLibrary::SetWwiseName(const FWwiseEventInfo& Ref, const FString& WwiseName) {
    return FWwiseEventInfo{};
}

FWwiseEventInfo UWwiseEventInfoLibrary::SetWwiseGuid(const FWwiseEventInfo& Ref, const FGuid& WwiseGuid) {
    return FWwiseEventInfo{};
}

FWwiseEventInfo UWwiseEventInfoLibrary::SetSwitchContainerLoading(const FWwiseEventInfo& Ref, const EWwiseEventSwitchContainerLoading& SwitchContainerLoading) {
    return FWwiseEventInfo{};
}

FWwiseEventInfo UWwiseEventInfoLibrary::SetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref, int32 HardCodedSoundBankShortId) {
    return FWwiseEventInfo{};
}

FWwiseEventInfo UWwiseEventInfoLibrary::SetDestroyOptions(const FWwiseEventInfo& Ref, const EWwiseAssetDestroyOptions& DestroyOptions) {
    return FWwiseEventInfo{};
}

FWwiseEventInfo UWwiseEventInfoLibrary::MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseAssetDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId) {
    return FWwiseEventInfo{};
}

int32 UWwiseEventInfoLibrary::GetWwiseShortId(const FWwiseEventInfo& Ref) {
    return 0;
}

FString UWwiseEventInfoLibrary::GetWwiseName(const FWwiseEventInfo& Ref) {
    return TEXT("");
}

FGuid UWwiseEventInfoLibrary::GetWwiseGuid(const FWwiseEventInfo& Ref) {
    return FGuid{};
}

EWwiseEventSwitchContainerLoading UWwiseEventInfoLibrary::GetSwitchContainerLoading(const FWwiseEventInfo& Ref) {
    return EWwiseEventSwitchContainerLoading::AlwaysLoad;
}

int32 UWwiseEventInfoLibrary::GetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref) {
    return 0;
}

EWwiseAssetDestroyOptions UWwiseEventInfoLibrary::GetDestroyOptions(const FWwiseEventInfo& Ref) {
    return EWwiseAssetDestroyOptions::StopEventOnDestroy;
}

void UWwiseEventInfoLibrary::BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseAssetDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId) {
}


