#include "MetaHumanComponentBase.h"

UMetaHumanComponentBase::UMetaHumanComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyComponentName = TEXT("Body");
    this->BodyType = EMetaHumanBodyType::BlendableBody;
    this->bEnableBodyCorrectives = true;
    this->FaceComponentName = TEXT("Face");
    this->RigLogicLODThreshold = -1;
    this->bEnableNeckCorrectives = true;
    this->NeckCorrectivesLODThreshold = -1;
    this->bEnableNeckProcControlRig = true;
    this->NeckProcControlRigLODThreshold = -1;
}


