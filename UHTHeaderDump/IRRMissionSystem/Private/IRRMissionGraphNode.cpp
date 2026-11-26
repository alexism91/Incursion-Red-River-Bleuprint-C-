#include "IRRMissionGraphNode.h"

UIRRMissionGraphNode::UIRRMissionGraphNode() {
}

void UIRRMissionGraphNode::InitNode(UIRRGraphData* Owner, bool bReInit) {
}

FGuid UIRRMissionGraphNode::GetNodeGuid() const {
    return FGuid{};
}

void UIRRMissionGraphNode::FinishNode(UIRRGraphData* Owner) {
}

void UIRRMissionGraphNode::FailNode(UIRRGraphData* Owner) {
}

bool UIRRMissionGraphNode::EvaluateNode(UIRRGraphData* Owner, TArray<UIRRMissionGraphNode*>& Child) {
    return false;
}


