#include "MaterialExpressionNeuralNetworkOutput.h"

UMaterialExpressionNeuralNetworkOutput::UMaterialExpressionNeuralNetworkOutput() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->NeuralIndexType = NIT_TextureIndex;
}


