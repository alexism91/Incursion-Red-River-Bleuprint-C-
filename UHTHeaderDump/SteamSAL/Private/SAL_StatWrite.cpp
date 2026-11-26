#include "SAL_StatWrite.h"

FSAL_StatWrite::FSAL_StatWrite() {
    this->StatType = ESALStatReadType::Integer;
    this->IntegerValue = 0;
    this->FloatValue = 0.00f;
    this->CountThisSession = 0.00f;
    this->SessionLengthSeconds = 0.00f;
}

