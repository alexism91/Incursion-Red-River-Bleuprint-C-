#include "SplineMeshComponentDescriptorBase.h"

FSplineMeshComponentDescriptorBase::FSplineMeshComponentDescriptorBase() {
    this->Hash = 0;
    this->ComponentClass = NULL;
    this->Mobility = EComponentMobility::Static;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Never;
    this->LightmapType = ELightmapType::Default;
    this->RayTracingGroupId = 0;
    this->RayTracingGroupCullingPriority = ERayTracingGroupCullingPriority::CP_0_NEVER_CULL;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->VirtualTextureCullMips = 0;
    this->TranslucencySortPriority = 0;
    this->OverriddenLightMapRes = 0;
    this->CustomDepthStencilValue = 0;
    this->bCastShadow = false;
    this->bEmissiveLightSource = false;
    this->bCastDynamicShadow = false;
    this->bCastStaticShadow = false;
    this->bCastContactShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bCastHiddenShadow = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDynamicIndirectLightingWhileHidden = false;
    this->bAffectDistanceFieldLighting = false;
    this->bReceivesDecals = false;
    this->bOverrideLightMapRes = false;
    this->bUseAsOccluder = false;
    this->bEnableDiscardOnLoad = false;
    this->bRenderCustomDepth = false;
    this->bVisibleInRayTracing = false;
    this->bHiddenInGame = false;
    this->bIsEditorOnly = false;
    this->bVisible = false;
    this->bEvaluateWorldPositionOffset = false;
    this->bReverseCulling = false;
    this->bUseDefaultCollision = false;
    this->bGenerateOverlapEvents = false;
    this->bOverrideNavigationExport = false;
    this->bForceNavigationObstacle = false;
    this->bFillCollisionUnderneathForNavmesh = false;
    this->WorldPositionOffsetDisableDistance = 0;
    this->ShadowCacheInvalidationBehavior = EShadowCacheInvalidationBehavior::Auto;
    this->DetailMode = DM_Low;
}

