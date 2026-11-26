#include "ChaosOutfitAssetOutfitQueryNode.h"

FChaosOutfitAssetOutfitQueryNode::FChaosOutfitAssetOutfitQueryNode() {
    this->Outfit = NULL;
    this->bHasAnyValidPieces = false;
    this->bHasAnyValidBodySizes = false;
    this->bBodyPartMustExist = false;
    this->bMeasurementsMustExist = false;
    this->bInterpolationDataMustExist = false;
}

