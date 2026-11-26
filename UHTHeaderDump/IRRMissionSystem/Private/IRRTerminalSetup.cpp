#include "IRRTerminalSetup.h"

UIRRTerminalSetup::UIRRTerminalSetup() {
    this->bBootSequence = false;
    this->ErrorSequence = NULL;
    this->CharacterDelay = 0.00f;
    this->ResponseDelay = 0.02f;
    this->HackDelay = 0.50f;
    this->HackCommandCost = 2.00f;
    this->HackBypassCost = 8.00f;
}

void UIRRTerminalSetup::InvalidateDirectoryIndex() {
}

bool UIRRTerminalSetup::FindCommand(const FString& Word, FIRRTerminalCommand& OutCommand) const {
    return false;
}


