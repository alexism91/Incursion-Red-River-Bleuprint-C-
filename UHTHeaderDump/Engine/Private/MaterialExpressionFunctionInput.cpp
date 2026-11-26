#include "MaterialExpressionFunctionInput.h"

UMaterialExpressionFunctionInput::UMaterialExpressionFunctionInput() {
    this->MenuCategories.AddDefaulted(1);
    this->InputName = TEXT("In");
    this->InputType = FunctionInput_Vector3;
    this->bUsePreviewValueAsDefault = false;
    this->SortPriority = 0;
    this->bCompilingFunctionPreview = false;
}


