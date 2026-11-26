#include "HTNTask_RandomLook.h"

UHTNTask_RandomLook::UHTNTask_RandomLook() {
    this->NodeName = TEXT("Random Look");
    this->NumTracePoints = 16;
    this->MinAngleDeg = 10.00f;
    this->MaxAngleDeg = 120.00f;
    this->TraceDistance = 800.00f;
    this->MinHitDistance = 50.00f;
    this->TraceChannel = ECC_Visibility;
    this->bTraceComplex = true;
    this->Mode = EIRRAIRandomLookMode::TrueRandom;
    this->MaxLookPoints = 3;
    this->NumLoops = 1;
    this->LookDuration = 1.50f;
    this->TurnAcceptanceAngle = 10.00f;
    this->MaxTurnTime = 3.00f;
    this->bDebug = false;
}


