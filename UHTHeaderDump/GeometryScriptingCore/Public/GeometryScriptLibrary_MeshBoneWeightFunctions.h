#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptBoneInfo.h"
#include "GeometryScriptBoneWeight.h"
#include "GeometryScriptBoneWeightProfile.h"
#include "GeometryScriptCopyBonesFromMeshOptions.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptPruneBoneWeightsOptions.h"
#include "GeometryScriptSmoothBoneWeightsOptions.h"
#include "GeometryScriptTransferBoneWeightsOptions.h"
#include "GeometryScriptLibrary_MeshBoneWeightFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;
class USkeleton;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshBoneWeightFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TransferBoneWeightsFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptTransferBoneWeightsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetVertexBoneWeights(UDynamicMesh* TargetMesh, int32 VertexID, const TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetAllVertexBoneWeights(UDynamicMesh* TargetMesh, const TArray<FGeometryScriptBoneWeight>& BoneWeights, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* PruneBoneWeights(UDynamicMesh* TargetMesh, const TArray<FName>& BonesToPrune, FGeometryScriptPruneBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDynamicMesh* MeshHasBoneWeights(UDynamicMesh* TargetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* MeshCreateBoneWeights(UDynamicMesh* TargetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* MeshCopyBoneWeights(UDynamicMesh* TargetMesh, bool& bProfileExisted, FGeometryScriptBoneWeightProfile TargetProfile, FGeometryScriptBoneWeightProfile SourceProfile);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetVertexBoneWeights(UDynamicMesh* TargetMesh, int32 VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetRootBoneName(UDynamicMesh* TargetMesh, FName& BoneName, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMaxBoneWeightIndex(UDynamicMesh* TargetMesh, bool& bHasBoneWeights, int32& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetLargestVertexBoneWeight(UDynamicMesh* TargetMesh, int32 VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetBoneInfo(UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetBoneIndex(UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, int32& BoneIndex, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetBoneChildren(UDynamicMesh* TargetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray<FGeometryScriptBoneInfo>& ChildrenInfo, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllBonesInfo(UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneInfo>& BonesInfo, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DiscardBonesFromMesh(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyBonesFromSkeleton(USkeleton* SourceSkeleton, UDynamicMesh* TargetMesh, FGeometryScriptCopyBonesFromMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyBonesFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptCopyBonesFromMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeSmoothBoneWeights(UDynamicMesh* TargetMesh, USkeleton* Skeleton, FGeometryScriptSmoothBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BlendBoneWeights(const TArray<FGeometryScriptBoneWeight>& BoneWeightsA, const TArray<FGeometryScriptBoneWeight>& BoneWeightsB, float Alpha, TArray<FGeometryScriptBoneWeight>& Result, UGeometryScriptDebug* Debug);
    
};

