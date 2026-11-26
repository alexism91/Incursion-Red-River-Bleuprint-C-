#include "ScriptableToolSingleClickOrDragBehavior.h"

UScriptableToolSingleClickOrDragBehavior::UScriptableToolSingleClickOrDragBehavior() {
    this->BehaviorHost = NULL;
    this->Behavior = NULL;
    this->MouseButton = EScriptableToolMouseButton::LeftButton;
}


