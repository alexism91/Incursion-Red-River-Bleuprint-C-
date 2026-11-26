#include "PCGProceduralISMComponentDescriptor.h"

FPCGProceduralISMComponentDescriptor::FPCGProceduralISMComponentDescriptor() {
    this->Hash = 0;
    this->OverlayMaterial = NULL;
    this->NumInstances = 0;
    this->NumCustomFloats = 0;
    this->InstanceMinDrawDistance = 0;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->Mobility = EComponentMobility::Static;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Never;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->VirtualTextureCullMips = 0;
    this->TranslucencySortPriority = 0;
    this->CustomDepthStencilValue = 0;
    this->bVisibleInRayTracing = false;
    this->RayTracingGroupId = 0;
    this->RayTracingGroupCullingPriority = ERayTracingGroupCullingPriority::CP_0_NEVER_CULL;
    this->bCastShadow = false;
    this->bEmissiveLightSource = false;
    this->bCastDynamicShadow = false;
    this->bCastStaticShadow = false;
    this->bCastContactShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bCastHiddenShadow = false;
    this->bReceivesDecals = false;
    this->bUseAsOccluder = false;
    this->bRenderCustomDepth = false;
    this->bEvaluateWorldPositionOffset = false;
    this->bReverseCulling = false;
    this->WorldPositionOffsetDisableDistance = 0;
    this->ShadowCacheInvalidationBehavior = EShadowCacheInvalidationBehavior::Auto;
    this->DetailMode = DM_Low;
}

