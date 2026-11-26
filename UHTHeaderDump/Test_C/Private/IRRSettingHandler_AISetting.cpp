#include "IRRSettingHandler_AISetting.h"

UIRRSettingHandler_AISetting::UIRRSettingHandler_AISetting() {
    this->CategoryId = TEXT("AISettings");
    this->Target = EIRRAISettingTarget::Field;
    this->bAllowAdvancedFields = false;
    this->bOnlyEditPlayerVariant = false;
    this->bListPlayerVariants = true;
}

TArray<FString> UIRRSettingHandler_AISetting::GetFieldOptions() const {
    return TArray<FString>();
}

TArray<FString> UIRRSettingHandler_AISetting::GetCategoryOptions() const {
    return TArray<FString>();
}


