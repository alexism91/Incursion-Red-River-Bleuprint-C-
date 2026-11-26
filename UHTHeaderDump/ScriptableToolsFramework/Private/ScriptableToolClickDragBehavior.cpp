#include "ScriptableToolClickDragBehavior.h"

UScriptableToolClickDragBehavior::UScriptableToolClickDragBehavior() {
    this->BehaviorHost = NULL;
    this->Behavior = NULL;
    this->MouseButton = EScriptableToolMouseButton::LeftButton;
}


