#include "MaterialExpressionVectorNoise.h"

UMaterialExpressionVectorNoise::UMaterialExpressionVectorNoise() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
    this->NoiseFunction = VNF_CellnoiseALU;
    this->Quality = 1;
    this->bTiling = false;
    this->TileSize = 300;
}


