#include "DefaultRootCameraNode.h"
#include "BlendStackCameraNode.h"

UDefaultRootCameraNode::UDefaultRootCameraNode() {
    this->BaseLayer = CreateDefaultSubobject<UBlendStackCameraNode>(TEXT("BaseLayer"));
    this->MainLayer = CreateDefaultSubobject<UBlendStackCameraNode>(TEXT("MainLayer"));
    this->GlobalLayer = CreateDefaultSubobject<UBlendStackCameraNode>(TEXT("GlobalLayer"));
    this->VisualLayer = CreateDefaultSubobject<UBlendStackCameraNode>(TEXT("VisualLayer"));
}


