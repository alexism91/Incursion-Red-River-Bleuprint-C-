#include "HTNNode.h"

UHTNNode::UHTNNode() {
    this->NodeInstancePoolingMode = EHTNNodeInstancePoolingMode::ProjectDefault;
    this->TemplateNode = NULL;
    this->bCreateNodeInstance = false;
    this->HTNAsset = NULL;
    this->OwnerComponent = NULL;
}

UHTNNode* UHTNNode::GetTemplateNode() const {
    return NULL;
}

FString UHTNNode::GetStaticDescription() const {
    return TEXT("");
}

FString UHTNNode::GetShortDescription() const {
    return TEXT("");
}

AAIController* UHTNNode::GetOwnerController() const {
    return NULL;
}

UHTNComponent* UHTNNode::GetOwnerComponent() const {
    return NULL;
}

FString UHTNNode::GetNodeName() const {
    return TEXT("");
}

APawn* UHTNNode::GetControlledPawn() const {
    return NULL;
}


