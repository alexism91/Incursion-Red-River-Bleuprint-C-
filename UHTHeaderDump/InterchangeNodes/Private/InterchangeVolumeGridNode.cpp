#include "InterchangeVolumeGridNode.h"

UInterchangeVolumeGridNode::UInterchangeVolumeGridNode() {
}

bool UInterchangeVolumeGridNode::SetCustomNumComponents(const int32& NumComponents) {
    return false;
}

bool UInterchangeVolumeGridNode::SetCustomGridTransform(const FTransform& AttributeValue) {
    return false;
}

bool UInterchangeVolumeGridNode::SetCustomGridActiveDimensions(const FIntVector& AttributeValue) {
    return false;
}

bool UInterchangeVolumeGridNode::SetCustomGridActiveAABBMin(const FIntVector& AttributeValue) {
    return false;
}

bool UInterchangeVolumeGridNode::SetCustomGridActiveAABBMax(const FIntVector& AttributeValue) {
    return false;
}

bool UInterchangeVolumeGridNode::SetCustomElementType(const EVolumeGridElementType& AttributeValue) {
    return false;
}

bool UInterchangeVolumeGridNode::GetCustomNumComponents(int32& NumComponents) const {
    return false;
}

bool UInterchangeVolumeGridNode::GetCustomGridTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeVolumeGridNode::GetCustomGridActiveDimensions(FIntVector& AttributeValue) const {
    return false;
}

bool UInterchangeVolumeGridNode::GetCustomGridActiveAABBMin(FIntVector& AttributeValue) const {
    return false;
}

bool UInterchangeVolumeGridNode::GetCustomGridActiveAABBMax(FIntVector& AttributeValue) const {
    return false;
}

bool UInterchangeVolumeGridNode::GetCustomElementType(EVolumeGridElementType& AttributeValue) const {
    return false;
}


