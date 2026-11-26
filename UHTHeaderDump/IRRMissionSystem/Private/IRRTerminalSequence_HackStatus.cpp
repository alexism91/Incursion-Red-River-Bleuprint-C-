#include "IRRTerminalSequence_HackStatus.h"

UIRRTerminalSequence_HackStatus::UIRRTerminalSequence_HackStatus() {
    this->bUseInterruptReason = false;
    this->ReadyText = FText::FromString(TEXT("Dispositif d'intrusion {Device} connecté. Batterie {Battery}%. Coût estimé {Cost}%. Tape \"hack\" pour démarrer."));
    this->NoDeviceText = FText::FromString(TEXT("Aucun dispositif d'intrusion connecté."));
    this->DepletedText = FText::FromString(TEXT("Dispositif d'intrusion {Device} : batterie épuisée ({Battery}%)."));
}

FText UIRRTerminalSequence_HackStatus::GetStatusText(const UIRRTerminalComponent* Terminal) const {
    return FText::GetEmpty();
}


