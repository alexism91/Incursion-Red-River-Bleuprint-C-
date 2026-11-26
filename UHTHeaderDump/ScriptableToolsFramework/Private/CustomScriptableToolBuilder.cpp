#include "CustomScriptableToolBuilder.h"

UCustomScriptableToolBuilder::UCustomScriptableToolBuilder() {
}

void UCustomScriptableToolBuilder::OnSetupTool_Implementation(UScriptableInteractiveTool* Tool, const TArray<AActor*>& SelectedActors, const TArray<UActorComponent*>& SelectedComponents) const {
}

bool UCustomScriptableToolBuilder::OnCanBuildTool_Implementation(const TArray<AActor*>& SelectedActors, const TArray<UActorComponent*>& SelectedComponents) const {
    return false;
}


