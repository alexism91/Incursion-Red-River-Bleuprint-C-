#pragma once
#include "CoreMinimal.h"
#include "BoneIndexControlAttributeMapping.h"
#include "RigUnit_RigLogic_IntArray.h"
#include "RigUnit_RigLogic_Data.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FRigUnit_RigLogic_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SkelMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> InputCurveIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> NeuralNetMaskCurveIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> HierarchyBoneIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBoneIndexControlAttributeMapping> DriverJointsToControlAttributesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_RigLogic_IntArray> BlendShapeIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_RigLogic_IntArray> CurveElementIndicesForAnimMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 CurrentLOD;
    
    RIGLOGICMODULE_API FRigUnit_RigLogic_Data();
};

