#include "StimulusFindResult.h"

FStimulusFindResult::FStimulusFindResult() {
    this->SensorType = ESensorType::None;
    this->Channel = 0;
    this->SensedType = ESensorArrayByType::SenseLost;
    this->SensedID = 0;
}

