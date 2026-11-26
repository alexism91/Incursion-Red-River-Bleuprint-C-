#include "IRRTerminalTextSource_DoorCodes.h"

UIRRTerminalTextSource_DoorCodes::UIRRTerminalTextSource_DoorCodes() {
    this->Key = TEXT("DoorCodes");
    this->bOnlyLocked = false;
    this->LineFormat = FText::FromString(TEXT("{Name}: {Code} {State}"));
    this->LockedText = FText::FromString(TEXT("[VERROUILLÉ]"));
    this->UnlockedText = FText::FromString(TEXT("[OUVERT]"));
    this->EmptyText = FText::FromString(TEXT("Aucun code d'accès enregistré."));
}


