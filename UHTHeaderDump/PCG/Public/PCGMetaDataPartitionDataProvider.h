#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGMetaDataPartitionDataProvider.generated.h"

class UPCGComputeKernel;

UCLASS(Blueprintable)
class UPCGMetaDataPartitionDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGComputeKernel* Kernel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartitionAttributeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInputData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumPartitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttributeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UniqueStringKeyValues;
    
    UPCGMetaDataPartitionDataProvider();

};

