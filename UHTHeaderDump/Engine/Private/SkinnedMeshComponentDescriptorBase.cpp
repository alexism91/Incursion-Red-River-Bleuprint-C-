#include "SkinnedMeshComponentDescriptorBase.h"

FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase() {
    this->Hash = 0;
    this->Mobility = EComponentMobility::Static;
    this->ComponentClass = NULL;
    this->InstanceMinDrawDistance = 0;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->bCastShadow = false;
    this->bCastDynamicShadow = false;
    this->bCastStaticShadow = false;
    this->bCastVolumetricTranslucentShadow = false;
    this->bCastContactShadow = false;
    this->bSelfShadowOnly = false;
    this->bCastFarShadow = false;
    this->bCastInsetShadow = false;
    this->bCastCinematicShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bVisibleInRayTracing = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bIsInstanceDataGPUOnly = false;
    this->NumInstancesGPUOnly = 0;
    this->NumCustomDataFloatsGPUOnly = 0;
}

