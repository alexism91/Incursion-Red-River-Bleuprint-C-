#include "AkDynamicSequenceBlueprintFunctionLibrary.h"

UAkDynamicSequenceBlueprintFunctionLibrary::UAkDynamicSequenceBlueprintFunctionLibrary() {
}

UAkDynamicSequencePlaylistItem* UAkDynamicSequenceBlueprintFunctionLibrary::CreateDynamicSequencePlaylistItemFromDialogueEvent(UAkDialogueEvent* DialogueEvent, const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, int32 DelayMs, UObject* CustomData) {
    return NULL;
}

UAkDynamicSequencePlaylistItem* UAkDynamicSequenceBlueprintFunctionLibrary::CreateDynamicSequencePlaylistItemFromAudioNode(UAkAudioNode* AudioNode, int32 DelayMs, UObject* CustomData) {
    return NULL;
}


