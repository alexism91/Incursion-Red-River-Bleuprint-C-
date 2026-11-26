#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeNodes -ObjectName=EInterchangeMeshCollision -FallbackName=EInterchangeMeshCollision
#include "InterchangeStaticMeshLodDataNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeStaticMeshLodDataNode();

    UFUNCTION(BlueprintCallable)
    bool SetOneConvexHullPerUCX(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetImportCollisionType(EInterchangeMeshCollision AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetImportCollision(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetForceCollisionPrimitiveGeneration(bool bGenerate);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSphereCollisionMeshUid(const FString& ColliderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConvexCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCapsuleCollisionMeshUid(const FString& ColliderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBoxCollisionMeshUid(const FString& ColliderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllSphereCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllConvexCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllCapsuleCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllBoxCollisionMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSphereCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetSphereCollisionMeshMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSphereColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOneConvexHullPerUCX(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetImportCollisionType(EInterchangeMeshCollision& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetImportCollision(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceCollisionPrimitiveGeneration(bool& bGenerate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConvexCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetConvexCollisionMeshMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConvexColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapsuleCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetCapsuleCollisionMeshMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCapsuleColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoxCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetBoxCollisionMeshMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBoxColliderRenderMeshUid(const FString& InColliderMeshUid, FString& OutRenderMeshUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSphereCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddSphereCollisionMeshUid(const FString& ColliderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddConvexCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddConvexCollisionMeshUid(const FString& ColliderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddCapsuleCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddCapsuleCollisionMeshUid(const FString& ColliderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddBoxCollisionMeshUids(const FString& ColliderMeshUid, const FString& RenderMeshUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddBoxCollisionMeshUid(const FString& ColliderMeshUid);
    
};

