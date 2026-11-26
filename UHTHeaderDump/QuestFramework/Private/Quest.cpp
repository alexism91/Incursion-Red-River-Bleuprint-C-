#include "Quest.h"

UQuest::UQuest() {
    this->CustomData = NULL;
}

bool UQuest::HasValidGuid() const {
    return false;
}

UQuestNode_Root* UQuest::GetRootNode() const {
    return NULL;
}

FGuid UQuest::GetGuid() const {
    return FGuid{};
}

FText UQuest::GetDisplayName() const {
    return FText::GetEmpty();
}

UQuestCustomData* UQuest::GetCustomData() const {
    return NULL;
}

void UQuest::GetAllStageNodesNames(TArray<FName>& OutNames) const {
}

UQuestNode_Stage* UQuest::FindStageNodeByName(const FName& Name) const {
    return NULL;
}


