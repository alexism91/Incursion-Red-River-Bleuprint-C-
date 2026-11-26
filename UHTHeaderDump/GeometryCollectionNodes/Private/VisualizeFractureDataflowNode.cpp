#include "VisualizeFractureDataflowNode.h"

FVisualizeFractureDataflowNode::FVisualizeFractureDataflowNode() {
    this->Level = 0;
    this->RandomSeed = 0;
    this->bApplyExplodedView = false;
    this->ExplodeAmount = 0.00f;
    this->bApplyColor = false;
    this->ColoringType = EDataflowVisualizeFractureColoringType::ColorByParent;
    this->RandomColorRangeMin = 0;
    this->RandomColorRangeMax = 0;
}

