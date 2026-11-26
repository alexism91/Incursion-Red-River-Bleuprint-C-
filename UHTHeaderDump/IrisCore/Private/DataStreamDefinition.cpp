#include "DataStreamDefinition.h"

FDataStreamDefinition::FDataStreamDefinition() {
    this->Class = NULL;
    this->DefaultSendStatus = EDataStreamSendStatus::Pause;
    this->bAutoCreate = false;
    this->bDynamicCreate = false;
}

