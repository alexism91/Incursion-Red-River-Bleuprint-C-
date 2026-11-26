#include "MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h"

UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::UMaterialExpressionDataDrivenShaderPlatformInfoSwitch() {
    this->MenuCategories.AddDefaulted(1);
    this->bContainsInvalidProperty = false;
}

TArray<FString> UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::GetNameOptions() const {
    return TArray<FString>();
}


