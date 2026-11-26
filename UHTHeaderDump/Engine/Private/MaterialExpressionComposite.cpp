#include "MaterialExpressionComposite.h"

UMaterialExpressionComposite::UMaterialExpressionComposite() {
    this->MenuCategories.AddDefaulted(1);
    this->SubgraphName = TEXT("Collapsed Nodes");
    this->InputExpressions = NULL;
    this->OutputExpressions = NULL;
}


