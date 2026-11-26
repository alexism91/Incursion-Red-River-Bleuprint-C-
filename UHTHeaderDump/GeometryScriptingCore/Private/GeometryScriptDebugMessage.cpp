#include "GeometryScriptDebugMessage.h"

FGeometryScriptDebugMessage::FGeometryScriptDebugMessage() {
    this->MessageType = EGeometryScriptDebugMessageType::ErrorMessage;
    this->ErrorType = EGeometryScriptErrorType::NoError;
}

