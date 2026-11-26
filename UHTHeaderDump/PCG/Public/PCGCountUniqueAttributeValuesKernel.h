#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGCountUniqueAttributeValuesKernel.generated.h"

UCLASS(Blueprintable)
class UPCGCountUniqueAttributeValuesKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPCGCountUniqueAttributeValuesKernel();

};

