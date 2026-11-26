#include "MaterialExpressionComment.h"

UMaterialExpressionComment::UMaterialExpressionComment() {
    this->MenuCategories.AddDefaulted(1);
    this->SizeX = 0;
    this->SizeY = 0;
    this->FontSize = 18;
    this->bCommentBubbleVisible_InDetailsPanel = false;
    this->bColorCommentBubble = false;
    this->bGroupMode = true;
}


