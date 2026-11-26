#include "MirrorAnimLibrary.h"

UMirrorAnimLibrary::UMirrorAnimLibrary() {
}

FMirrorAnimNodeReference UMirrorAnimLibrary::SetMirrorTransitionBlendTime(const FMirrorAnimNodeReference& MirrorNode, float InBlendTime) {
    return FMirrorAnimNodeReference{};
}

FMirrorAnimNodeReference UMirrorAnimLibrary::SetMirror(const FMirrorAnimNodeReference& MirrorNode, bool bInMirror) {
    return FMirrorAnimNodeReference{};
}

float UMirrorAnimLibrary::GetMirrorTransitionBlendTime(const FMirrorAnimNodeReference& MirrorNode) {
    return 0.0f;
}

UMirrorDataTable* UMirrorAnimLibrary::GetMirrorDataTable(const FMirrorAnimNodeReference& MirrorNode) {
    return NULL;
}

bool UMirrorAnimLibrary::GetMirror(const FMirrorAnimNodeReference& MirrorNode) {
    return false;
}

void UMirrorAnimLibrary::ConvertToMirrorNodePure(const FAnimNodeReference& Node, FMirrorAnimNodeReference& MirrorNode, bool& Result) {
}

FMirrorAnimNodeReference UMirrorAnimLibrary::ConvertToMirrorNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FMirrorAnimNodeReference{};
}


