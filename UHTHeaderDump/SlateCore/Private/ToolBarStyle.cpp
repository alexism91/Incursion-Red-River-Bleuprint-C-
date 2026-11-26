#include "ToolBarStyle.h"

FToolBarStyle::FToolBarStyle() {
    this->UniformBlockWidth = 0.00f;
    this->UniformBlockHeight = 0.00f;
    this->NumColumns = 0;
    this->SeparatorThickness = 0.00f;
    this->WrapButtonIndex = 0;
    this->bAllowWrapButton = false;
    this->bAllowWrappingDefault = false;
    this->bShowLabels = false;
    this->ButtonContentMaxWidth = 0.00f;
    this->ButtonContentFillWidth = 0.00f;
    this->ComboContentMinWidth = 0.00f;
    this->ComboContentMaxWidth = 0.00f;
    this->ComboContentHorizontalAlignment = HAlign_Fill;
    this->RaisedChildrenRightPadding = 0.00f;
}

