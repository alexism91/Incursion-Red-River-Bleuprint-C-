#include "AkDialogueEvent.h"

UAkDialogueEvent::UAkDialogueEvent() {
}

UAkAudioNode* UAkDialogueEvent::ResolveOrderedArguments(TArray<UAkGroupValue*> Arguments) {
    return NULL;
}

UAkAudioNode* UAkDialogueEvent::ResolveArguments(TArray<UAkGroupValue*> Arguments) {
    return NULL;
}

UAkDynamicSequence* UAkDialogueEvent::PostDialogueEvent(UAkGameObject* GameObject, const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition) {
    return NULL;
}

UAkDynamicSequence* UAkDialogueEvent::PostAmbientDialogueEvent(const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition) {
    return NULL;
}

UAkAudioNode* UAkDialogueEvent::FetchAudioNodeObject(int32 AudioNodeId) {
    return NULL;
}


