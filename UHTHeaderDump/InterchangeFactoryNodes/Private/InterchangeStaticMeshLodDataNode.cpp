#include "InterchangeStaticMeshLodDataNode.h"

UInterchangeStaticMeshLodDataNode::UInterchangeStaticMeshLodDataNode() {
}

bool UInterchangeStaticMeshLodDataNode::SetOneConvexHullPerUCX(bool AttributeValue) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::SetImportCollisionType(EInterchangeMeshCollision AttributeValue) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::SetImportCollision(bool AttributeValue) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::SetForceCollisionPrimitiveGeneration(bool bGenerate) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveSphereCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveMeshUid(const FString& MeshName) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveConvexCollisionMeshUid(const FString& MeshName) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveCapsuleCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveBoxCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveAllSphereCollisionMeshes() {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveAllMeshes() {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveAllConvexCollisionMeshes() {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveAllCapsuleCollisionMeshes() {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::RemoveAllBoxCollisionMeshes() {
    return false;
}

int32 UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshUidsCount() const {
    return 0;
}

void UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames) const {
}

TMap<FString, FString> UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshMap() const {
    return TMap<FString, FString>();
}

void UInterchangeStaticMeshLodDataNode::GetSphereColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const {
}

bool UInterchangeStaticMeshLodDataNode::GetOneConvexHullPerUCX(bool& AttributeValue) const {
    return false;
}

int32 UInterchangeStaticMeshLodDataNode::GetMeshUidsCount() const {
    return 0;
}

void UInterchangeStaticMeshLodDataNode::GetMeshUids(TArray<FString>& OutMeshNames) const {
}

bool UInterchangeStaticMeshLodDataNode::GetImportCollisionType(EInterchangeMeshCollision& AttributeValue) const {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::GetImportCollision(bool& AttributeValue) const {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::GetForceCollisionPrimitiveGeneration(bool& bGenerate) const {
    return false;
}

int32 UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshUidsCount() const {
    return 0;
}

void UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames) const {
}

TMap<FString, FString> UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshMap() const {
    return TMap<FString, FString>();
}

void UInterchangeStaticMeshLodDataNode::GetConvexColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const {
}

int32 UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshUidsCount() const {
    return 0;
}

void UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames) const {
}

TMap<FString, FString> UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshMap() const {
    return TMap<FString, FString>();
}

void UInterchangeStaticMeshLodDataNode::GetCapsuleColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const {
}

int32 UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshUidsCount() const {
    return 0;
}

void UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames) const {
}

TMap<FString, FString> UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshMap() const {
    return TMap<FString, FString>();
}

void UInterchangeStaticMeshLodDataNode::GetBoxColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const {
}

bool UInterchangeStaticMeshLodDataNode::AddSphereCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddSphereCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddMeshUid(const FString& MeshName) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddConvexCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddConvexCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddCapsuleCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddCapsuleCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddBoxCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid) {
    return false;
}

bool UInterchangeStaticMeshLodDataNode::AddBoxCollisionMeshUid(const FString& ColliderMeshUid) {
    return false;
}


