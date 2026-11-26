#pragma once
#include "CoreMinimal.h"
#include "DatacenterQosInstance.h"
#include "QosRegionInfo.h"
#include "RegionQosInstance.generated.h"

USTRUCT(BlueprintType)
struct FRegionQosInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQosRegionInfo Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatacenterQosInstance> DatacenterOptions;
    
    QOS_API FRegionQosInstance();
};

