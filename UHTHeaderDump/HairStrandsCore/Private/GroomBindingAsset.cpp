#include "GroomBindingAsset.h"

UGroomBindingAsset::UGroomBindingAsset() {
    this->GroomBindingType = EGroomBindingMeshType::SkeletalMesh;
    this->Groom = NULL;
    this->SourceSkeletalMesh = NULL;
    this->SourceMeshRequestedLOD = 0;
    this->SourceMeshUsedLOD = -1;
    this->TargetSkeletalMesh = NULL;
    this->TargetMeshRequestedMinLOD = 0;
    this->TargetMeshUsedMinLOD = -1;
    this->SourceGeometryCache = NULL;
    this->TargetGeometryCache = NULL;
    this->NumInterpolationPoints = 100;
    this->MatchingSection = 0;
}

void UGroomBindingAsset::SetTargetSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
}

void UGroomBindingAsset::SetTargetMeshUsedMinLOD(int32 InTargetMeshUsedMinLOD) {
}

void UGroomBindingAsset::SetTargetMeshRequestedMinLOD(int32 InTargetMeshRequestedMinLOD) {
}

void UGroomBindingAsset::SetTargetGeometryCache(UGeometryCache* InGeometryCache) {
}

void UGroomBindingAsset::SetTargetBindingAttribute(FName InAttributeName) {
}

void UGroomBindingAsset::SetSourceSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
}

void UGroomBindingAsset::SetSourceMeshUsedLOD(int32 InSourceMeshUsedLOD) {
}

void UGroomBindingAsset::SetSourceMeshRequestedLOD(int32 InSourceMeshRequestedLOD) {
}

void UGroomBindingAsset::SetSourceGeometryCache(UGeometryCache* InGeometryCache) {
}

void UGroomBindingAsset::SetNumInterpolationPoints(int32 InNumInterpolationPoints) {
}

void UGroomBindingAsset::SetMatchingSection(int32 InMatchingSection) {
}

void UGroomBindingAsset::SetGroupInfos(const TArray<FGoomBindingGroupInfo>& InGroupInfos) {
}

void UGroomBindingAsset::SetGroomBindingType(EGroomBindingMeshType InGroomBindingType) {
}

void UGroomBindingAsset::SetGroom(UGroomAsset* InGroom) {
}

USkeletalMesh* UGroomBindingAsset::GetTargetSkeletalMesh() const {
    return NULL;
}

int32 UGroomBindingAsset::GetTargetMeshUsedMinLOD() const {
    return 0;
}

int32 UGroomBindingAsset::GetTargetMeshRequestedMinLOD() const {
    return 0;
}

UGeometryCache* UGroomBindingAsset::GetTargetGeometryCache() const {
    return NULL;
}

FName UGroomBindingAsset::GetTargetBindingAttribute() const {
    return NAME_None;
}

USkeletalMesh* UGroomBindingAsset::GetSourceSkeletalMesh() const {
    return NULL;
}

int32 UGroomBindingAsset::GetSourceMeshUsedLOD() const {
    return 0;
}

int32 UGroomBindingAsset::GetSourceMeshRequestedLOD() const {
    return 0;
}

UGeometryCache* UGroomBindingAsset::GetSourceGeometryCache() const {
    return NULL;
}

int32 UGroomBindingAsset::GetNumInterpolationPoints() const {
    return 0;
}

int32 UGroomBindingAsset::GetMatchingSection() const {
    return 0;
}

TArray<FGoomBindingGroupInfo> UGroomBindingAsset::GetGroupInfos() const {
    return TArray<FGoomBindingGroupInfo>();
}

EGroomBindingMeshType UGroomBindingAsset::GetGroomBindingType() const {
    return EGroomBindingMeshType::SkeletalMesh;
}

UGroomAsset* UGroomBindingAsset::GetGroom() const {
    return NULL;
}

void UGroomBindingAsset::Build(FOnGroomBindingAssetBuildComplete CompletionDelegate) {
}


