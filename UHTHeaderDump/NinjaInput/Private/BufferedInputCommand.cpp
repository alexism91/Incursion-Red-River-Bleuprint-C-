#include "BufferedInputCommand.h"

FBufferedInputCommand::FBufferedInputCommand() {
    this->Source = NULL;
    this->InputAction = NULL;
    this->Handler = NULL;
    this->TriggerEvent = ETriggerEvent::None;
}

