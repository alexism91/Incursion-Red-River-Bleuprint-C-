#include "AkAudioNode.h"

UAkAudioNode::UAkAudioNode() {
}

UAkDynamicSequence* UAkAudioNode::PostAudioNode(UAkGameObject* GameObject, bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition) {
    return NULL;
}

UAkDynamicSequence* UAkAudioNode::PostAmbientAudioNode(bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition) {
    return NULL;
}


