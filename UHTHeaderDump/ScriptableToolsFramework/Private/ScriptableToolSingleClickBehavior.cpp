#include "ScriptableToolSingleClickBehavior.h"

UScriptableToolSingleClickBehavior::UScriptableToolSingleClickBehavior() {
    this->BehaviorHost = NULL;
    this->Behavior = NULL;
    this->MouseButton = EScriptableToolMouseButton::LeftButton;
}


