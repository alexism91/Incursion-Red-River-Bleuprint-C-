#include "IRRPlayerCameraManager.h"

AIRRPlayerCameraManager::AIRRPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->PPWeight = 1.00f;
}

void AIRRPlayerCameraManager::RemoveBlendable(const TScriptInterface<IBlendableInterface> InBlendableObject, float BlendTime) {
}

void AIRRPlayerCameraManager::AddBlendable(const TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, float BlendTime) {
}


