#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataInterface -FallbackName=ComputeDataInterface
#include "OptimusComputeKernelDataInterface.h"
#include "OptimusConstantIdentifier.h"
#include "OptimusCustomComputeKernelDataInterface.generated.h"

class UOptimusComponentSourceBinding;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusCustomComputeKernelDataInterface : public UComputeDataInterface, public IOptimusComputeKernelDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusComponentSourceBinding> ComponentSourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NumThreadsExpression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusConstantIdentifier ExecutionDomainConstantIdentifier;
    
    UOptimusCustomComputeKernelDataInterface();


    // Fix for true pure virtual functions not being implemented
};

