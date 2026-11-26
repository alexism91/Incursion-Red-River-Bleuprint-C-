#include "ScriptableToolClickSequenceBehavior.h"

UScriptableToolClickSequenceBehavior::UScriptableToolClickSequenceBehavior() {
    this->BehaviorHost = NULL;
    this->Behavior = NULL;
    this->MouseButton = EScriptableToolMouseButton::LeftButton;
}


