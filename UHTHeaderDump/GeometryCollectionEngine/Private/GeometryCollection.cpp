#include "GeometryCollection.h"

UGeometryCollection::UGeometryCollection() {
    this->EnableClustering = true;
    this->ClusterGroupIndex = 0;
    this->MaxClusterLevel = 100;
    this->DamageModel = EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold;
    this->DamageThreshold.AddDefaulted(3);
    this->bUseSizeSpecificDamageThreshold = false;
    this->bUseMaterialDamageModifiers = false;
    this->PerClusterOnlyDamageThreshold = false;
    this->ClusterConnectionType = EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation;
    this->ConnectionGraphBoundsFilteringMargin = 0.00f;
    this->bUseFullPrecisionUVs = false;
    this->bStripOnCook = false;
    this->bStripRenderDataOnCook = false;
    this->CustomRendererType = NULL;
    this->EnableNanite = false;
    this->bEnableNaniteFallback = false;
    this->bConvertVertexColorsToSRGB = true;
    this->PhysicsMaterial = NULL;
    this->bDensityFromPhysicsMaterial = false;
    this->CachedDensityFromPhysicsMaterialInGCm3 = 0.00f;
    this->bMassAsDensity = true;
    this->Mass = 2500.00f;
    this->MinimumMassClamp = 0.10f;
    this->bImportCollisionFromSource = false;
    this->bOptimizeConvexes = false;
    this->bScaleOnRemoval = true;
    this->bRemoveOnMaxSleep = false;
    this->bAutomaticCrumblePartialClusters = true;
    this->bSlowMovingAsSleeping = true;
    this->SlowMovingVelocityThreshold = 1.00f;
    this->SizeSpecificData.AddDefaulted(1);
    this->EnableRemovePiecesOnFracture = false;
    this->RootIndex = -1;
    this->BoneSelectedMaterialIndex = -1;
}

void UGeometryCollection::SetEnableNanite(bool bValue) {
}

void UGeometryCollection::SetDataflowAsset(UDataflow* InDataflowAsset) {
}

void UGeometryCollection::SetConvertVertexColorsToSRGB(bool bValue) {
}

UDataflow* UGeometryCollection::GetDataflowAsset() const {
    return NULL;
}


