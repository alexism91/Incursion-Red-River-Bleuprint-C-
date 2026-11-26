#include "QuestNumberFormattingOptions.h"

FQuestNumberFormattingOptions::FQuestNumberFormattingOptions() {
    this->RoundingMode = HalfToEven;
    this->bUseGrouping = false;
    this->MinimumIntegralDigits = 0;
    this->MaximumIntegralDigits = 0;
    this->MinimumFractionalDigits = 0;
    this->MaximumFractionalDigits = 0;
}

