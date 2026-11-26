#include "BakeTextureFromCollectionDataflowNode.h"

FBakeTextureFromCollectionDataflowNode::FBakeTextureFromCollectionDataflowNode() {
    this->Resolution = (EDataflowImageResolution)0;
    this->GutterSize = 0;
    this->UVChannel = 0;
    this->RedChannel = ECollectionBakeTextureAttribute::None;
    this->GreenChannel = ECollectionBakeTextureAttribute::None;
    this->BlueChannel = ECollectionBakeTextureAttribute::None;
    this->AlphaChannel = ECollectionBakeTextureAttribute::None;
    this->MaxDistance = 0.00f;
    this->OcclusionRays = 0;
    this->OcclusionBlurRadius = 0.00f;
    this->CurvatureBlurRadius = 0.00f;
    this->VoxelResolution = 0;
    this->SmoothingIterations = 0;
    this->ThicknessFactor = 0.00f;
    this->MaxCurvature = 0.00f;
}

