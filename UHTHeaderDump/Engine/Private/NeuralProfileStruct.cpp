#include "NeuralProfileStruct.h"

FNeuralProfileStruct::FNeuralProfileStruct() {
    this->InputFormat = ENeuralProfileFormat::Type32;
    this->OutputFormat = ENeuralProfileFormat::Type32;
    this->RuntimeType = ENeuralProfileRuntimeType::NNERuntimeORTDml;
    this->NNEModelData = NULL;
    this->BatchSizeOverride = 0;
    this->TileSize = ENeuralModelTileType::OneByOne;
    this->TileOverlapResolveType = ETileOverlapResolveType::Ignore;
}

