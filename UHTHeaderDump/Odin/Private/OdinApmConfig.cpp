#include "OdinApmConfig.h"

FOdinApmConfig::FOdinApmConfig() {
    this->echo_canceller = false;
    this->high_pass_filter = false;
    this->transient_suppressor = false;
    this->noise_suppression = ODIN_NOISE_SUPPRESSION_NONE;
    this->gain_controller = ODIN_GAIN_CONTROLLER_DISABLED;
}

