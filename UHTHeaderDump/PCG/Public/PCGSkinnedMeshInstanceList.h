#pragma once
#include "CoreMinimal.h"
#include "PCGSkinnedMeshInstance.h"
#include "PCGSoftSkinnedMeshComponentDescriptor.h"
#include "PCGSkinnedMeshInstanceList.generated.h"

class UPCGPointData;

USTRUCT(BlueprintType)
struct FPCGSkinnedMeshInstanceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSoftSkinnedMeshComponentDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGSkinnedMeshInstance> Instances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPCGPointData> PointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InstancePointIndices;
    
    PCG_API FPCGSkinnedMeshInstanceList();
};

