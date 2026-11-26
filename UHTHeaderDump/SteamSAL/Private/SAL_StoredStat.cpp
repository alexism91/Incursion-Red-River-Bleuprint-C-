#include "SAL_StoredStat.h"

FSAL_StoredStat::FSAL_StoredStat() {
    this->StatType = ESALStatReadType::Integer;
    this->IntegerValue = 0;
    this->FloatValue = 0.00f;
    this->bSucceeded = false;
}

