#include "IRRGraphData.h"

UIRRGraphData::UIRRGraphData() {
    this->MissionComponent = NULL;
}

void UIRRGraphData::SetupGraph(TSoftObjectPtr<UIRRMissionGraph> InMissionGraph) {
}

void UIRRGraphData::InitGraph(UIRRMissionComponent* InMissionComponent, FIRRGraphSaveData InSaveData) {
}

FIRRGraphSaveData UIRRGraphData::GetSaveData() const {
    return FIRRGraphSaveData{};
}

void UIRRGraphData::EvaluateGraph() {
}


