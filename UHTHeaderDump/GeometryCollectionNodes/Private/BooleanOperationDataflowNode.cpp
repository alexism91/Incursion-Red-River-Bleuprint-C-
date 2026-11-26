#include "BooleanOperationDataflowNode.h"

FBooleanOperationDataflowNode::FBooleanOperationDataflowNode() {
    this->Operation = EBooleanOperationEnum::Dataflow_And;
    this->bBoolA = false;
    this->bBoolB = false;
    this->bResult = false;
}

