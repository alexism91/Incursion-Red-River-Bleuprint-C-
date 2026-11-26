#include "IRRRadioMessage.h"

FIRRRadioMessage::FIRRRadioMessage() {
    this->BroadcasterEvent = NULL;
    this->BroadcasterSound = NULL;
    this->ReceiverEvent = NULL;
    this->ReceiverSound = NULL;
    this->bSendResponse = false;
    this->bForceResponse = false;
    this->ResponseChance = 0.00f;
}

