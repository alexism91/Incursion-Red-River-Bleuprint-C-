#include "IRRTerminalArgument.h"

UIRRTerminalArgument::UIRRTerminalArgument() {
    this->bPredictable = false;
}

FIRRTerminalArgumentResult UIRRTerminalArgument::ExecuteArgument_Implementation(UIRRTerminalComponent* Terminal, const FString& Payload) {
    return FIRRTerminalArgumentResult{};
}


