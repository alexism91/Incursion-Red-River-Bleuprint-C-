#include "NiagaraStatelessModule_SubUVAnimation.h"

UNiagaraStatelessModule_SubUVAnimation::UNiagaraStatelessModule_SubUVAnimation() {
    this->NumFrames = 16;
    this->bStartFrameRangeOverride_Enabled = false;
    this->bEndFrameRangeOverride_Enabled = false;
    this->StartFrameRangeOverride = 0;
    this->EndFrameRangeOverride = 0;
    this->AnimationMode = ENSMSubUVAnimation_Mode::Linear;
    this->LoopsPerSecond = 1.00f;
    this->RandomChangeInterval = 0.10f;
}


