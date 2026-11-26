#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AnimBankItem.h"
#include "PrimitiveInstanceId.h"
#include "SkinnedMeshComponent.h"
#include "SkinnedMeshInstanceData.h"
#include "InstancedSkinnedMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInstancedSkinnedMeshComponent : public USkinnedMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FSkinnedMeshInstanceData> InstanceData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<float> InstanceCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationMinScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceMinDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceStartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritPerInstanceData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimBankItem> AnimBankItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox PrimitiveBoundsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstanceDataGPUOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstancesGPUOnly;
    
public:
    UInstancedSkinnedMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNumCustomDataFloats(int32 InNumCustomDataFloats);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDataValue(FPrimitiveInstanceId InstanceId, int32 CustomDataIndex, float CustomDataValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInstances(const TArray<FPrimitiveInstanceId>& InstancesToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstance(FPrimitiveInstanceId InstanceId);
    
    UFUNCTION(BlueprintCallable)
    void OptimizeInstanceData(bool bShouldRetainIdMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstanceTransform(FPrimitiveInstanceId InstanceId, FTransform& OutInstanceTransform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInstances();
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimitiveInstanceId> AddInstances(const TArray<FTransform>& Transforms, const TArray<int32>& BankIndices, bool bShouldReturnIds, bool bWorldSpace);
    
    UFUNCTION(BlueprintCallable)
    FPrimitiveInstanceId AddInstance(const FTransform& InstanceTransform, int32 BankIndex, bool bWorldSpace);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAnimBankItem(const FAnimBankItem& BankItem);
    
};

