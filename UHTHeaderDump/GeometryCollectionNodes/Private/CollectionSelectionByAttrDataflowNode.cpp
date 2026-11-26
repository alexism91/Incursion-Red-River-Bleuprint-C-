#include "CollectionSelectionByAttrDataflowNode.h"

FCollectionSelectionByAttrDataflowNode::FCollectionSelectionByAttrDataflowNode() {
    this->Group = ESelectionByAttrGroup::Vertices;
    this->Operation = ESelectionByAttrOperation::Equal;
}

