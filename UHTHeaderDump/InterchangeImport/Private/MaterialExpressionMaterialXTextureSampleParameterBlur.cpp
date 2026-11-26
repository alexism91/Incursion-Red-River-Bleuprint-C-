#include "MaterialExpressionMaterialXTextureSampleParameterBlur.h"

UMaterialExpressionMaterialXTextureSampleParameterBlur::UMaterialExpressionMaterialXTextureSampleParameterBlur() {
    this->MenuCategories.AddDefaulted(2);
    this->KernelSize = EMAterialXTextureSampleBlurKernel::Kernel1;
    this->FilterSize = 1.00f;
    this->FilterOffset = 0.00f;
    this->Filter = EMaterialXTextureSampleBlurFilter::Gaussian;
}


