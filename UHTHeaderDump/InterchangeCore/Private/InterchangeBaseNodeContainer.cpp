#include "InterchangeBaseNodeContainer.h"

UInterchangeBaseNodeContainer::UInterchangeBaseNodeContainer() {
}

bool UInterchangeBaseNodeContainer::SetNodeParentUid(const FString& NodeUniqueID, const FString& NewParentNodeUid) {
    return false;
}

bool UInterchangeBaseNodeContainer::SetNodeDesiredChildIndex(const FString& NodeUniqueID, const int32& NewNodeDesiredChildIndex) {
    return false;
}

void UInterchangeBaseNodeContainer::SetNamespace(const FString& Namespace, UClass* TargetClass) {
}

void UInterchangeBaseNodeContainer::SaveToFile(const FString& Filename) {
}

void UInterchangeBaseNodeContainer::ResetChildrenCache() {
}

void UInterchangeBaseNodeContainer::Reset() {
}

void UInterchangeBaseNodeContainer::ReplaceNode(const FString& NodeUniqueID, UInterchangeFactoryBaseNode* NewNode) {
}

void UInterchangeBaseNodeContainer::RemoveNode(const FString& NodeUniqueID) {
}

void UInterchangeBaseNodeContainer::LoadFromFile(const FString& Filename) {
}

bool UInterchangeBaseNodeContainer::IsNodeUidValid(const FString& NodeUniqueID) const {
    return false;
}

void UInterchangeBaseNodeContainer::GetRoots(TArray<FString>& RootNodes) const {
}

void UInterchangeBaseNodeContainer::GetNodes(const UClass* ClassNode, TArray<FString>& OutNodes) const {
}

TArray<FString> UInterchangeBaseNodeContainer::GetNodeChildrenUids(const FString& NodeUniqueID) const {
    return TArray<FString>();
}

int32 UInterchangeBaseNodeContainer::GetNodeChildrenCount(const FString& NodeUniqueID) const {
    return 0;
}

UInterchangeBaseNode* UInterchangeBaseNodeContainer::GetNodeChildren(const FString& NodeUniqueID, int32 ChildIndex) {
    return NULL;
}

UInterchangeBaseNode* UInterchangeBaseNodeContainer::GetNode(const FString& NodeUniqueID) const {
    return NULL;
}

bool UInterchangeBaseNodeContainer::GetIsAncestor(const FString& NodeUniqueID, const FString& AncestorUID) const {
    return false;
}

UInterchangeFactoryBaseNode* UInterchangeBaseNodeContainer::GetFactoryNode(const FString& NodeUniqueID) const {
    return NULL;
}

void UInterchangeBaseNodeContainer::ComputeChildrenCache() {
}

bool UInterchangeBaseNodeContainer::ClearNodeParentUid(const FString& NodeUniqueID) {
    return false;
}

FString UInterchangeBaseNodeContainer::AddNode(UInterchangeBaseNode* Node) {
    return TEXT("");
}


