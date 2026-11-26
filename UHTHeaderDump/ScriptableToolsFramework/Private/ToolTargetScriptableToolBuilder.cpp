#include "ToolTargetScriptableToolBuilder.h"

UToolTargetScriptableToolBuilder::UToolTargetScriptableToolBuilder() {
    this->Requirements = NULL;
}

void UToolTargetScriptableToolBuilder::OnSetupTool_Implementation(UScriptableInteractiveTool* Tool) const {
}

UScriptableToolTargetRequirements* UToolTargetScriptableToolBuilder::GetToolTargetRequirements_Implementation() const {
    return NULL;
}


