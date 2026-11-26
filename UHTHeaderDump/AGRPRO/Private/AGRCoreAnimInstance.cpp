#include "AGRCoreAnimInstance.h"

UAGRCoreAnimInstance::UAGRCoreAnimInstance() {
    this->OwningCharacter = NULL;
    this->OwnerMovementComponent = NULL;
    this->AnimMasterComponent = NULL;
    this->AimOffsetType = EAGR_AimOffsets::NONE;
    this->AimOffsetBehavior = EAGR_AimOffsetClamp::Nearest;
    this->AimClamp = 0.00f;
    this->AimPitch = 0.00f;
    this->RotationMethod = EAGR_RotationMethod::NONE;
    this->DeltaTick = 0.00f;
    this->Velocity = 0.00f;
    this->ForwardVelocity = 0.00f;
    this->StrafeVelocity = 0.00f;
    this->UpVelocity = 0.00f;
    this->Direction = 0.00f;
    this->GroundDistance = 0.00f;
    this->bFirstPerson = false;
    this->bIdle = false;
    this->bStanding = false;
    this->bSwimming = false;
    this->bCrouching = false;
    this->bGrounded = false;
    this->bWalkingState = false;
    this->bInAir = false;
    this->bFalling = false;
    this->bFlying = false;
    this->MovementMode = MOVE_None;
    this->Lean = 0.00f;
    this->TargetFrameRate = 60.00f;
    this->LeanSmooth = 6.00f;
    this->AimSmooth = 6.00f;
    this->PawnReference = NULL;
}


