#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGCountUniqueAttributeValuesDataProvider.generated.h"

class UPCGComputeKernel;

UCLASS(Blueprintable)
class UPCGCountUniqueAttributeValuesDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGComputeKernel* Kernel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeToCountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributeToCountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputValueAttributeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputCountAttributeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttributeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UniqueStringKeyValues;
    
    UPCGCountUniqueAttributeValuesDataProvider();

};

