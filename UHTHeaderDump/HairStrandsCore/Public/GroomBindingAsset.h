#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AsyncCompilation -FallbackName=Interface_AsyncCompilation
#include "EGroomBindingMeshType.h"
#include "GoomBindingGroupInfo.h"
#include "OnGroomBindingAssetBuildCompleteDelegate.h"
#include "GroomBindingAsset.generated.h"

class UGeometryCache;
class UGroomAsset;
class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UGroomBindingAsset : public UObject, public IInterface_AsyncCompilation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroomBindingMeshType GroomBindingType;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomAsset* Groom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SourceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceMeshRequestedLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceMeshUsedLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TargetSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMeshRequestedMinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMeshUsedMinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* SourceGeometryCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* TargetGeometryCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInterpolationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchingSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBindingAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGoomBindingGroupInfo> GroupInfos;
    
public:
    UGroomBindingAsset();

    UFUNCTION(BlueprintCallable)
    void SetTargetSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetTargetMeshUsedMinLOD(int32 InTargetMeshUsedMinLOD);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetMeshRequestedMinLOD(int32 InTargetMeshRequestedMinLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetGeometryCache(UGeometryCache* InGeometryCache);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetBindingAttribute(FName InAttributeName);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetSourceMeshUsedLOD(int32 InSourceMeshUsedLOD);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSourceMeshRequestedLOD(int32 InSourceMeshRequestedLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceGeometryCache(UGeometryCache* InGeometryCache);
    
    UFUNCTION(BlueprintCallable)
    void SetNumInterpolationPoints(int32 InNumInterpolationPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingSection(int32 InMatchingSection);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupInfos(const TArray<FGoomBindingGroupInfo>& InGroupInfos);
    
    UFUNCTION(BlueprintCallable)
    void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType);
    
    UFUNCTION(BlueprintCallable)
    void SetGroom(UGroomAsset* InGroom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetTargetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetMeshUsedMinLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetMeshRequestedMinLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeometryCache* GetTargetGeometryCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetBindingAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetSourceSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSourceMeshUsedLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSourceMeshRequestedLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeometryCache* GetSourceGeometryCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInterpolationPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchingSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGoomBindingGroupInfo> GetGroupInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGroomBindingMeshType GetGroomBindingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGroomAsset* GetGroom() const;
    
    UFUNCTION(BlueprintCallable)
    void Build(FOnGroomBindingAssetBuildComplete CompletionDelegate);
    

    // Fix for true pure virtual functions not being implemented
};

