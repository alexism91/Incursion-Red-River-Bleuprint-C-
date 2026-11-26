#include "DataflowBlueprintLibrary.h"

UDataflowBlueprintLibrary::UDataflowBlueprintLibrary() {
}

bool UDataflowBlueprintLibrary::RegenerateAssetFromDataflow(UObject* AssetToRegenerate, bool bRegenerateDependentAssets) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableObjectArray(UObject* Asset, FName VariableName, const TArray<UObject*>& VariableArrayValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableObject(UObject* Asset, FName VariableName, UObject* VariableValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableIntArray(UObject* Asset, FName VariableName, const TArray<int32>& VariableArrayValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableInt(UObject* Asset, FName VariableName, int64 VariableValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableFloatArray(UObject* Asset, FName VariableName, const TArray<float>& VariableArrayValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableFloat(UObject* Asset, FName VariableName, float VariableValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableBoolArray(UObject* Asset, FName VariableName, const TArray<bool>& VariableArrayValue) {
    return false;
}

bool UDataflowBlueprintLibrary::OverrideDataflowVariableBool(UObject* Asset, FName VariableName, bool VariableValue) {
    return false;
}

void UDataflowBlueprintLibrary::EvaluateTerminalNodeByName(UDataflow* Dataflow, FName TerminalNodeName, UObject* ResultAsset) {
}


