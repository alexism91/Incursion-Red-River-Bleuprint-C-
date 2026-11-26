#include "GeometryCollectionComponent.h"
#include "Net/UnrealNetwork.h"

UGeometryCollectionComponent::UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->ChaosSolverActor = NULL;
    this->RestCollection = NULL;
    this->Simulating = false;
    this->ObjectType = EObjectStateTypeEnum::Chaos_Object_Dynamic;
    this->GravityGroupIndex = 0;
    this->OneWayInteractionLevel = -1;
    this->bDensityFromPhysicsMaterial = false;
    this->bForceMotionBlur = false;
    this->EnableClustering = true;
    this->ClusterGroupIndex = 0;
    this->MaxClusterLevel = 100;
    this->MaxSimulatedLevel = 100;
    this->DamageModel = EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold;
    this->DamageThreshold.AddDefaulted(3);
    this->bUseSizeSpecificDamageThreshold = false;
    this->bUseMaterialDamageModifiers = false;
    this->bEnableDamageFromCollision = true;
    this->bAllowRemovalOnSleep = true;
    this->bAllowRemovalOnBreak = true;
    this->bForceUpdateActiveTransforms = false;
    this->ClusterConnectionType = EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation;
    this->CollisionGroup = 0;
    this->CollisionSampleFraction = 1.00f;
    this->LinearEtherDrag = 0.00f;
    this->PhysicalMaterial = NULL;
    this->InitialVelocityType = EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined;
    this->PhysicalMaterialOverride = NULL;
    this->DesiredCacheTime = 0.00f;
    this->CachePlayback = false;
    this->bNotifyBreaks = false;
    this->bNotifyCollisions = false;
    this->bNotifyTrailing = false;
    this->bNotifyRemovals = false;
    this->bNotifyCrumblings = false;
    this->bCrumblingEventIncludesChildren = false;
    this->bNotifyGlobalBreaks = false;
    this->bNotifyGlobalCollisions = false;
    this->bNotifyGlobalRemovals = false;
    this->bNotifyGlobalCrumblings = false;
    this->bGlobalCrumblingEventIncludesChildren = false;
    this->bStoreVelocities = false;
    this->bIsCurrentlyNavigationRelevant = true;
    this->bShowBoneColors = false;
    this->bUpdateComponentTransformToRootBone = false;
    this->bUseRootProxyForNavigation = false;
    this->bUpdateNavigationInTick = true;
    this->bEnableReplication = false;
    this->bEnableAbandonAfterLevel = true;
    this->AbandonedCollisionProfileName = TEXT("Custom");
    this->ISMPool = NULL;
    this->CustomRendererType = NULL;
    this->bOverrideCustomRenderer = false;
    this->bAutoAssignISMPool = false;
    this->bUseStaticMeshCollisionForTraces = false;
    this->ReplicationAbandonClusterLevel = 0;
    this->ReplicationAbandonAfterLevel = 0;
    this->ReplicationMaxPositionAndVelocityCorrectionLevel = 100;
    this->DummyBodySetup = NULL;
    this->EventDispatcher = NULL;
    this->AngularEtherDrag = 0.00f;
}

void UGeometryCollectionComponent::SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces) {
}

void UGeometryCollectionComponent::SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers) {
}

void UGeometryCollectionComponent::SetSolverActor(AChaosSolverActor* InSolverActor) {
}

void UGeometryCollectionComponent::SetRootProxyComponentSpaceTransform(int32 Index, const FTransform& RootProxyTransform) {
}

void UGeometryCollectionComponent::SetRestCollection(const UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults) {
}

void UGeometryCollectionComponent::SetPerParticleCollisionProfileName(const TArray<int32>& BoneIds, FName ProfileName) {
}

void UGeometryCollectionComponent::SetPerLevelCollisionProfileNames(const TArray<FName>& ProfileNames) {
}

void UGeometryCollectionComponent::SetOneWayInteractionLevel(int32 InOneWayInteractionLevel) {
}

void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals) {
}

void UGeometryCollectionComponent::SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals) {
}

void UGeometryCollectionComponent::SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren) {
}

void UGeometryCollectionComponent::SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions) {
}

void UGeometryCollectionComponent::SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks) {
}

void UGeometryCollectionComponent::SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren) {
}

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks) {
}

void UGeometryCollectionComponent::SetLocalRestTransforms(const TArray<FTransform>& Transforms, bool bOnlyLeaves) {
}

void UGeometryCollectionComponent::SetGravityGroupIndex(int32 InGravityGroupIndex) {
}

void UGeometryCollectionComponent::SetEnableDamageFromCollision(bool bValue) {
}

void UGeometryCollectionComponent::SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial) {
}

void UGeometryCollectionComponent::SetDamageThreshold(const TArray<float>& InDamageThreshold) {
}

void UGeometryCollectionComponent::SetDamagePropagationData(const FGeometryCollectionDamagePropagationData& InDamagePropagationData) {
}

void UGeometryCollectionComponent::SetDamageModel(EDamageModelTypeEnum InDamageModel) {
}

void UGeometryCollectionComponent::SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32 MaxLevel) {
}

void UGeometryCollectionComponent::SetAnchoredByIndex(int32 Index, bool bAnchored) {
}

void UGeometryCollectionComponent::SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32 MaxLevel) {
}

void UGeometryCollectionComponent::SetAbandonedParticleCollisionProfileName(FName CollisionProfile) {
}

void UGeometryCollectionComponent::RemoveAllAnchors() {
}


void UGeometryCollectionComponent::OnRep_RepStateData() {
}

void UGeometryCollectionComponent::OnRep_RepDynamicData() {
}

void UGeometryCollectionComponent::OnRep_RepData() {
}

bool UGeometryCollectionComponent::IsRootBroken() const {
    return false;
}

bool UGeometryCollectionComponent::GetUseStaticMeshCollisionForTraces() const {
    return false;
}

AChaosSolverActor* UGeometryCollectionComponent::GetSolverActor() const {
    return NULL;
}

FTransform UGeometryCollectionComponent::GetRootInitialTransform() const {
    return FTransform{};
}

int32 UGeometryCollectionComponent::GetRootIndex() const {
    return 0;
}

FTransform UGeometryCollectionComponent::GetRootCurrentTransform() const {
    return FTransform{};
}

void UGeometryCollectionComponent::GetMassAndExtents(int32 ItemIndex, float& OutMass, FBox& OutExtents) {
}

TArray<FTransform> UGeometryCollectionComponent::GetLocalRestTransforms(bool bInitialTransforms) const {
    return TArray<FTransform>();
}

FBox UGeometryCollectionComponent::GetLocalBounds() const {
    return FBox{};
}

TArray<FTransform> UGeometryCollectionComponent::GetInitialLocalRestTransforms() const {
    return TArray<FTransform>();
}

int32 UGeometryCollectionComponent::GetInitialLevel(int32 ItemIndex) {
    return 0;
}

FString UGeometryCollectionComponent::GetDebugInfo() {
    return TEXT("");
}

TArray<float> UGeometryCollectionComponent::GetDamageThreshold() const {
    return TArray<float>();
}

void UGeometryCollectionComponent::ForceBrokenForCustomRenderer(bool bForceBroken) {
}

void UGeometryCollectionComponent::EnableRootProxyForCustomRenderer(bool bEnable) {
}

void UGeometryCollectionComponent::CrumbleCluster(int32 ItemIndex) {
}

void UGeometryCollectionComponent::CrumbleActiveClusters() {
}

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

void UGeometryCollectionComponent::ApplyLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity) {
}

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, FVector Position) {
}

void UGeometryCollectionComponent::ApplyInternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain) {
}

void UGeometryCollectionComponent::ApplyExternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain) {
}

void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity) {
}

void UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity) {
}

void UGeometryCollectionComponent::ApplyAssetDefaults() {
}

void UGeometryCollectionComponent::ApplyAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity) {
}

void UGeometryCollectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGeometryCollectionComponent, RepData);
    DOREPLIFETIME(UGeometryCollectionComponent, RepStateData);
    DOREPLIFETIME(UGeometryCollectionComponent, RepDynamicData);
}


