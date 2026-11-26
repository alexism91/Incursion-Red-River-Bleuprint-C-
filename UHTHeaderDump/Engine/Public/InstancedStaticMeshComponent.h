#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoundsCacheElement.h"
#include "InstancedStaticMeshInstanceData.h"
#include "InstancedStaticMeshMappingInfo.h"
#include "InstancedStaticMeshRandomSeed.h"
#include "SMInstanceManager.h"
#include "StaticMeshComponent.h"
#include "InstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInstancedStaticMeshComponent : public UStaticMeshComponent, public ISMInstanceManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMatrix> PerInstancePrevTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PreviousComponentTransform;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstancingRandomSeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<float> PerInstanceSMCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshRandomSeed> AdditionalRandomSeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstanceLODDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceMinDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceStartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseGpuLodSelection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritPerInstanceData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InstanceReorderTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    int32 NumPendingLightmaps;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshMappingInfo> CachedMappings;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoundsCacheElement CachedBounds[3];
    
public:
    UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void SetNumCustomDataFloats(int32 InNumCustomDataFloats);
    
    UFUNCTION(BlueprintCallable)
    void SetLODDistanceScale(float InLODDistanceScale);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetCullDistances(int32 StartCullDistance, int32 EndCullDistance);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstances(const TArray<int32>& InstancesToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstance(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidInstance(int32 InstanceIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLODDistanceScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInstanceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCullDistances(int32& OutStartCullDistance, int32& OutEndCullDistance) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInstances();
    
    UFUNCTION(BlueprintCallable)
    bool BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstanceWorldSpace(const FTransform& WorldTransform);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> AddInstances(const TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices, bool bWorldSpace, bool bUpdateNavigation);
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstance(const FTransform& InstanceTransform, bool bWorldSpace);
    

    // Fix for true pure virtual functions not being implemented
};

