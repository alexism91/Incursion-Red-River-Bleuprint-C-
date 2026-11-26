#include "AnimBankSequence.h"

FAnimBankSequence::FAnimBankSequence() {
    this->Sequence = NULL;
    this->bLooping = false;
    this->bAutoStart = false;
    this->Position = 0.00f;
    this->PlayRate = 0.00f;
    this->BoundsScale = 0.00f;
}

