#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGDataLabelResolverDataProvider.generated.h"

class UPCGComputeKernel;

UCLASS(Blueprintable)
class UPCGDataLabelResolverDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGComputeKernel* Kernel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInput;
    
    UPCGDataLabelResolverDataProvider();

};

