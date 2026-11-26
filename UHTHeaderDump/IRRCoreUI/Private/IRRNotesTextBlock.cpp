#include "IRRNotesTextBlock.h"

UIRRNotesTextBlock::UIRRNotesTextBlock() {
    this->DefaultRowName = TEXT("Default");
    this->HeaderRowName = TEXT("Header");
    this->HeaderFontSizeDelta = 2.00f;
    this->ParagraphSpacing = 10.00f;
    this->HeaderTopSpacing = 16.00f;
    this->HeaderBottomSpacing = 8.00f;
    this->HeaderUnderlineGap = 4.00f;
    this->ListTopSpacing = 4.00f;
    this->ListBottomSpacing = 12.00f;
    this->BulletItemSpacing = 3.00f;
    this->BulletIndent = 14.00f;
}

void UIRRNotesTextBlock::SetNotesTextFromText(const FText& InText) {
}

void UIRRNotesTextBlock::SetNotesText(const FString& InNotesText) {
}


