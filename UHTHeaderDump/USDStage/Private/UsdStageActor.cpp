#include "UsdStageActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "UsdInfoCache.h"
#include "UsdPrimLinkCache.h"
#include "UsdPrimTwin.h"
#include "UsdTransactor.h"

AUsdStageActor::AUsdStageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->StageState = EUsdStageState::OpenedAndLoaded;
    this->AssetCache = NULL;
    this->UsdInfoCache = CreateDefaultSubobject<UUsdInfoCache>(TEXT("InfoCache_2147482609"));
    this->PrimLinkCache = CreateDefaultSubobject<UUsdPrimLinkCache>(TEXT("LinkCache_2147482608"));
    this->UsdAssetCache = NULL;
    this->InitialLoadSet = EUsdInitialLoadSet::LoadAll;
    this->InterpolationType = EUsdInterpolationType::Linear;
    this->GeometryCacheImport = EGeometryCacheImport::Never;
    this->bUsePrimKindsForCollapsing = true;
    this->KindsToCollapse = 18;
    this->bMergeIdenticalMaterialSlots = true;
    this->bShareAssetsForIdenticalPrims = true;
    this->bReuseIdenticalAssets = false;
    this->bCollapseTopLevelPointInstancers = false;
    this->PurposesToLoad = 1;
    this->NaniteTriangleThreshold = 1000000;
    this->RenderContext = TEXT("unreal");
    this->MaterialPurpose = TEXT("preview");
    this->RootMotionHandling = EUsdRootMotionHandling::NoAdditionalRootMotion;
    this->FallbackCollisionType = EUsdCollisionType::ConvexHull;
    this->SubdivisionLevel = 0;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->Time = 0.00f;
    this->LevelSequence = NULL;
    this->RootUsdTwin = CreateDefaultSubobject<UUsdPrimTwin>(TEXT("RootUsdTwin_2147482610"));
    this->Transactor = CreateDefaultSubobject<UUsdTransactor>(TEXT("Transactor_2147482607"));
}

void AUsdStageActor::SetUsePrimKindsForCollapsing(bool bUse) {
}

void AUsdStageActor::SetUsdAssetCache(UUsdAssetCache3* NewCache) {
}

void AUsdStageActor::SetTime(float InTime) {
}

void AUsdStageActor::SetSubdivisionLevel(int32 NewLevel) {
}

void AUsdStageActor::SetStageState(EUsdStageState NewStageState) {
}

void AUsdStageActor::SetShareAssetsForIdenticalPrims(bool bShare) {
}

void AUsdStageActor::SetRootMotionHandling(EUsdRootMotionHandling NewHandlingStrategy) {
}

void AUsdStageActor::SetRootLayer(const FString& RootFilePath) {
}

void AUsdStageActor::SetReuseIdenticalAssets(bool bReuse) {
}

void AUsdStageActor::SetRenderContext(const FName& NewRenderContext) {
}

void AUsdStageActor::SetPurposesToLoad(int32 NewPurposesToLoad) {
}

void AUsdStageActor::SetNaniteTriangleThreshold(int32 NewNaniteTriangleThreshold) {
}

void AUsdStageActor::SetMergeIdenticalMaterialSlots(bool bMerge) {
}

void AUsdStageActor::SetMaterialPurpose(const FName& NewMaterialPurpose) {
}

void AUsdStageActor::SetKindsToCollapse(int32 NewKindsToCollapse) {
}

void AUsdStageActor::SetIsolatedRootLayer(const FString& IsolatedStageRootLayer) {
}

void AUsdStageActor::SetInvertFilters(bool bNewInvertValue) {
}

void AUsdStageActor::SetInterpolationType(EUsdInterpolationType NewType) {
}

void AUsdStageActor::SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet) {
}

void AUsdStageActor::SetGeometryCacheImport(EGeometryCacheImport ImportOption) {
}

void AUsdStageActor::SetFallbackCollisionType(EUsdCollisionType NewCollisionType) {
}

void AUsdStageActor::SetCollectOnComponents(bool bNewCollectValue) {
}

void AUsdStageActor::SetCollectMetadata(bool bNewCollectValue) {
}

void AUsdStageActor::SetCollectFromEntireSubtrees(bool bNewCollectValue) {
}

void AUsdStageActor::SetCollapseTopLevelPointInstancers(bool bCollapse) {
}

void AUsdStageActor::SetBlockedPrefixFilters(const TArray<FString>& NewFilters) {
}

void AUsdStageActor::SetAssetCache(UUsdAssetCache2* NewCache) {
}

void AUsdStageActor::NewStage() {
}

float AUsdStageActor::GetTime() const {
    return 0.0f;
}

FString AUsdStageActor::GetSourcePrimPath(const UObject* Object) const {
    return TEXT("");
}

ULevelSequence* AUsdStageActor::GetLevelSequence() const {
    return NULL;
}

FString AUsdStageActor::GetIsolatedRootLayer() const {
    return TEXT("");
}

USceneComponent* AUsdStageActor::GetGeneratedComponent(const FString& PrimPath) const {
    return NULL;
}

TArray<UObject*> AUsdStageActor::GetGeneratedAssets(const FString& PrimPath) const {
    return TArray<UObject*>();
}


