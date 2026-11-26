#include "MetaHumanRealtimeSmoothingParam.h"

FMetaHumanRealtimeSmoothingParam::FMetaHumanRealtimeSmoothingParam() {
    this->Method = EMetaHumanRealtimeSmoothingParamMethod::RollingAverage;
    this->RollingAverageFrame = 0;
    this->OneEuroSlope = 0.00f;
    this->OneEuroMinCutoff = 0.00f;
}

