#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGCustomKernelDataInterface.generated.h"

class UPCGComputeKernel;
class UPCGSettings;

UCLASS(Blueprintable, MinimalAPI)
class UPCGCustomKernelDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGComputeKernel* Kernel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPCGSettings> Settings;
    
public:
    UPCGCustomKernelDataInterface();

};

