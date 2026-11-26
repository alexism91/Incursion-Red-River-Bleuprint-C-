#include "MaterialExpressionFunctionOutput.h"

UMaterialExpressionFunctionOutput::UMaterialExpressionFunctionOutput() {
    this->MenuCategories.AddDefaulted(1);
    this->OutputName = TEXT("Result");
    this->SortPriority = 0;
    this->bLastPreviewed = false;
}


