#include "ScriptableToolTargetRequirements.h"

UScriptableToolTargetRequirements::UScriptableToolTargetRequirements() {
    this->MinMatchingTargets = 0;
    this->MaxMatchingTargets = 1;
}

UScriptableToolTargetRequirements* UScriptableToolTargetRequirements::BuildToolTargetRequirements(TArray<UClass*> RequirementInterfaces) {
    return NULL;
}


