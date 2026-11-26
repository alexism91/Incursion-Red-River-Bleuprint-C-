#include "IRRObjectReplicationComponent.h"

UIRRObjectReplicationComponent::UIRRObjectReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIRRObjectReplicationComponent::UnregisterReplicatedObject(UIRRReplicatedObject* ObjectToUnregister, bool bDestroyObject) {
    return false;
}

bool UIRRObjectReplicationComponent::RegisterReplicatedObject(UIRRReplicatedObject* ObjectToRegister) {
    return false;
}

bool UIRRObjectReplicationComponent::RegisterOneShotObject(UIRRReplicatedObject* Object) {
    return false;
}

TArray<UIRRReplicatedObject*> UIRRObjectReplicationComponent::GetRegisteredReplicatedObjects() {
    return TArray<UIRRReplicatedObject*>();
}


