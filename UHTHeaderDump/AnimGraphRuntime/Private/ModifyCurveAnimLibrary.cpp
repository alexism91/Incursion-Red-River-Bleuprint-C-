#include "ModifyCurveAnimLibrary.h"

UModifyCurveAnimLibrary::UModifyCurveAnimLibrary() {
}

FModifyCurveAnimNodeReference UModifyCurveAnimLibrary::SetCurveMap(const FModifyCurveAnimNodeReference& ModifyCurveNode, const TMap<FName, float>& InCurveMap) {
    return FModifyCurveAnimNodeReference{};
}

FModifyCurveAnimNodeReference UModifyCurveAnimLibrary::SetApplyMode(const FModifyCurveAnimNodeReference& ModifyCurveNode, EModifyCurveApplyMode InMode) {
    return FModifyCurveAnimNodeReference{};
}

FModifyCurveAnimNodeReference UModifyCurveAnimLibrary::SetAlpha(const FModifyCurveAnimNodeReference& ModifyCurveNode, float InAlpha) {
    return FModifyCurveAnimNodeReference{};
}

EModifyCurveApplyMode UModifyCurveAnimLibrary::GetApplyMode(const FModifyCurveAnimNodeReference& ModifyCurveNode) {
    return EModifyCurveApplyMode::Add;
}

float UModifyCurveAnimLibrary::GetAlpha(const FModifyCurveAnimNodeReference& ModifyCurveNode) {
    return 0.0f;
}

void UModifyCurveAnimLibrary::ConvertToModifyCurveNodePure(const FAnimNodeReference& Node, FModifyCurveAnimNodeReference& ModifyCurveNode, bool& Result) {
}

FModifyCurveAnimNodeReference UModifyCurveAnimLibrary::ConvertToModifyCurveNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FModifyCurveAnimNodeReference{};
}


