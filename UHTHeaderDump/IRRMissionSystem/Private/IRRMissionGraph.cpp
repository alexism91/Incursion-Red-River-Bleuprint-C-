#include "IRRMissionGraph.h"
#include "IRRMissionGraphEdge.h"
#include "IRRMissionGraphNode.h"

UIRRMissionGraph::UIRRMissionGraph() {
    this->Name = TEXT("MissionGraph");
    this->NodeType = UIRRMissionGraphNode::StaticClass();
    this->EdgeType = UIRRMissionGraphEdge::StaticClass();
}

UIRRMissionGraphNode* UIRRMissionGraph::GetRootNode() {
    return NULL;
}

UIRRMissionGraphNode* UIRRMissionGraph::GetMissionGraphNodeByUID(FGuid UID) {
    return NULL;
}


