#include "IRRSuppressionConfig.h"

FIRRSuppressionConfig::FIRRSuppressionConfig() {
    this->bSuppressionEnabled = false;
    this->Max_Suppression_Distance = 0.00f;
    this->Suppression_Scale_Start_Distance = 0.00f;
    this->Suppression_Decay_Rate = 0.00f;
    this->Suppression_Decay_Delay = 0.00f;
    this->Max_Suppression_Number = 0.00f;
}

