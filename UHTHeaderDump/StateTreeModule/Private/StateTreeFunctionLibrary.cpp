#include "StateTreeFunctionLibrary.h"

UStateTreeFunctionLibrary::UStateTreeFunctionLibrary() {
}

void UStateTreeFunctionLibrary::SetStateTree(FStateTreeReference& Reference, UStateTree* StateTree) {
}

FStateTreeReference UStateTreeFunctionLibrary::MakeStateTreeReference(UStateTree* StateTree) {
    return FStateTreeReference{};
}

void UStateTreeFunctionLibrary::K2_SetParametersProperty(FStateTreeReference& Reference, FGuid PropertyID, const int32& NewValue) {
}

void UStateTreeFunctionLibrary::K2_GetParametersProperty(const FStateTreeReference& Reference, FGuid PropertyID, int32& ReturnValue) {
}


