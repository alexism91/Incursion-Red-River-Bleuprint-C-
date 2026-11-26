#include "InterchangeSpecularProfileFactoryNode.h"

UInterchangeSpecularProfileFactoryNode::UInterchangeSpecularProfileFactoryNode() {
}

bool UInterchangeSpecularProfileFactoryNode::SetCustomTexture(const FString& TextureUid) {
    return false;
}

bool UInterchangeSpecularProfileFactoryNode::SetCustomFormat(ESpecularProfileFormat Format) {
    return false;
}

bool UInterchangeSpecularProfileFactoryNode::GetCustomTexture(FString& TextureUid) const {
    return false;
}

bool UInterchangeSpecularProfileFactoryNode::GetCustomFormat(ESpecularProfileFormat& Format) const {
    return false;
}


