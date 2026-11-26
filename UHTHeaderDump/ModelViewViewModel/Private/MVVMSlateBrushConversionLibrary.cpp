#include "MVVMSlateBrushConversionLibrary.h"

UMVVMSlateBrushConversionLibrary::UMVVMSlateBrushConversionLibrary() {
}

FSlateBrush UMVVMSlateBrushConversionLibrary::Conv_SetVectorParameterMID(FSlateBrush Brush, UMaterialInterface* Material, FName ParameterName, FLinearColor Value) {
    return FSlateBrush{};
}

FSlateBrush UMVVMSlateBrushConversionLibrary::Conv_SetVectorParameter(FSlateBrush Brush, FName ParameterName, FLinearColor Value) {
    return FSlateBrush{};
}

FSlateBrush UMVVMSlateBrushConversionLibrary::Conv_SetTextureParameterMID(FSlateBrush Brush, UMaterialInterface* Material, FName ParameterName, UTexture* Value) {
    return FSlateBrush{};
}

FSlateBrush UMVVMSlateBrushConversionLibrary::Conv_SetTextureParameter(FSlateBrush Brush, FName ParameterName, UTexture* Value) {
    return FSlateBrush{};
}

FSlateBrush UMVVMSlateBrushConversionLibrary::Conv_SetScalarParameterMID(FSlateBrush Brush, UMaterialInterface* Material, FName ParameterName, float Value) {
    return FSlateBrush{};
}

FSlateBrush UMVVMSlateBrushConversionLibrary::Conv_SetScalarParameter(FSlateBrush Brush, FName ParameterName, float Value) {
    return FSlateBrush{};
}


