#include "InterchangeLevelFactoryNode.h"

UInterchangeLevelFactoryNode::UInterchangeLevelFactoryNode() {
}

bool UInterchangeLevelFactoryNode::SetCustomShouldCreateLevel(const bool& AttributeValue) {
    return false;
}

bool UInterchangeLevelFactoryNode::SetCustomSceneImportAssetFactoryNodeUid(const FString& AttributeValue) {
    return false;
}

bool UInterchangeLevelFactoryNode::SetCustomCreateWorldPartitionLevel(const bool& AttributeValue) {
    return false;
}

bool UInterchangeLevelFactoryNode::RemoveCustomActorFactoryNodeUid(const FString& ActorFactoryNodeUid) {
    return false;
}

bool UInterchangeLevelFactoryNode::GetCustomShouldCreateLevel(bool& AttributeValue) const {
    return false;
}

bool UInterchangeLevelFactoryNode::GetCustomSceneImportAssetFactoryNodeUid(FString& AttributeValue) const {
    return false;
}

bool UInterchangeLevelFactoryNode::GetCustomCreateWorldPartitionLevel(bool& AttributeValue) const {
    return false;
}

void UInterchangeLevelFactoryNode::GetCustomActorFactoryNodeUids(TArray<FString>& OutActorFactoryNodeUids) const {
}

int32 UInterchangeLevelFactoryNode::GetCustomActorFactoryNodeUidCount() const {
    return 0;
}

void UInterchangeLevelFactoryNode::GetCustomActorFactoryNodeUid(const int32 Index, FString& OutActorFactoryNodeUid) const {
}

bool UInterchangeLevelFactoryNode::AddCustomActorFactoryNodeUid(const FString& ActorFactoryNodeUid) {
    return false;
}


