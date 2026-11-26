#include "QuestNode.h"

UQuestNode::UQuestNode() {
    this->NodeIndex = -1;
    this->CustomData = NULL;
}

FText UQuestNode::GetNodeText(UQuestContext* Context) const {
    return FText::GetEmpty();
}

int32 UQuestNode::GetNodeIndex() const {
    return 0;
}

FGuid UQuestNode::GetNodeGuid() const {
    return FGuid{};
}

UQuestCustomData* UQuestNode::GetCustomData() const {
    return NULL;
}


