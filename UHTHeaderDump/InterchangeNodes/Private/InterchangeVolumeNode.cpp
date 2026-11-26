#include "InterchangeVolumeNode.h"

UInterchangeVolumeNode::UInterchangeVolumeNode() {
}

bool UInterchangeVolumeNode::SetCustomFileName(const FString& AttributeValue) {
    return false;
}

bool UInterchangeVolumeNode::SetCustomAnimationID(const FString& AttributeValue) {
    return false;
}

bool UInterchangeVolumeNode::RemoveCustomGridDependency(const FString& DependencyUid) {
    return false;
}

bool UInterchangeVolumeNode::RemoveCustomFrameIndexInAnimation(int32 Index) {
    return false;
}

void UInterchangeVolumeNode::GetCustomGridDependency(const int32 Index, FString& OutDependency) const {
}

int32 UInterchangeVolumeNode::GetCustomGridDependeciesCount() const {
    return 0;
}

void UInterchangeVolumeNode::GetCustomGridDependecies(TArray<FString>& OutDependencies) const {
}

void UInterchangeVolumeNode::GetCustomFrameIndicesInAnimation(TArray<int32>& OutAnimationIndices) const {
}

void UInterchangeVolumeNode::GetCustomFrameIndexInAnimation(int32 IndexIndex, int32& OutIndex) const {
}

bool UInterchangeVolumeNode::GetCustomFileName(FString& AttributeValue) const {
    return false;
}

bool UInterchangeVolumeNode::GetCustomAnimationID(FString& AttributeValue) const {
    return false;
}

bool UInterchangeVolumeNode::AddCustomGridDependency(const FString& DependencyUid) {
    return false;
}

bool UInterchangeVolumeNode::AddCustomFrameIndexInAnimation(int32 Index) {
    return false;
}


