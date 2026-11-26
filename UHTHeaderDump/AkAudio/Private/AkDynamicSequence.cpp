#include "AkDynamicSequence.h"

UAkDynamicSequence::UAkDynamicSequence() {
    this->PlayingID = 0;
    this->Playlist = NULL;
    this->State = EAkDynamicSequenceState::Stopped;
}

EAkResult UAkDynamicSequence::Stop(const FAkDynamicSequenceTransition OverrideTransition) {
    return EAkResult::NotImplemented;
}

EAkResult UAkDynamicSequence::SeekPercent(float Percent, bool bSeekToNearestMarker) {
    return EAkResult::NotImplemented;
}

EAkResult UAkDynamicSequence::Seek(int32 PositionMS, bool bSeekToNearestMarker) {
    return EAkResult::NotImplemented;
}

EAkResult UAkDynamicSequence::Resume(const FAkDynamicSequenceTransition OverrideTransition) {
    return EAkResult::NotImplemented;
}

bool UAkDynamicSequence::PostPlaylistItem(UAkDynamicSequencePlaylistItem* PlaylistItem, bool bPlayImmediately) {
    return false;
}

bool UAkDynamicSequence::PostDialogueEventInPlaylist(UAkDialogueEvent* DialogueEvent, const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, bool bPlayImmediately) {
    return false;
}

bool UAkDynamicSequence::PostAudioNode(UAkAudioNode* AudioNode, bool bPlayImmediately) {
    return false;
}

EAkResult UAkDynamicSequence::Play(const FAkDynamicSequenceTransition OverrideTransition) {
    return EAkResult::NotImplemented;
}

EAkResult UAkDynamicSequence::Pause(const FAkDynamicSequenceTransition OverrideTransition) {
    return EAkResult::NotImplemented;
}

void UAkDynamicSequence::OnGameObjectCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

UAkDynamicSequencePlaylist* UAkDynamicSequence::ModifyPlaylist() {
    return NULL;
}

EAkResult UAkDynamicSequence::GetPlayingItem(UAkAudioNode*& AudioNode) const {
    return EAkResult::NotImplemented;
}

EAkResult UAkDynamicSequence::GetPauseTimes(int32& PauseTime, int32& Duration) const {
    return EAkResult::NotImplemented;
}

EAkResult UAkDynamicSequence::Break() {
    return EAkResult::NotImplemented;
}


