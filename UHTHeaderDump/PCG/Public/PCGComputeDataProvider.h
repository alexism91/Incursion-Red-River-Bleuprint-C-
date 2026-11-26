#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "PCGComputeDataProvider.generated.h"

class UPCGComputeKernel;
class UPCGSettings;

UCLASS(Abstract, Blueprintable)
class UPCGComputeDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGComputeKernel* ProducerKernel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPCGSettings> ProducerSettings;
    
public:
    UPCGComputeDataProvider();

};

