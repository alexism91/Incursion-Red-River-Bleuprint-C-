#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataInterface -FallbackName=ComputeDataInterface
#include "OptimusComputeKernelDataInterface.h"
#include "OptimusCopyKernelDataInterface.generated.h"

class UOptimusComponentSourceBinding;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusCopyKernelDataInterface : public UComputeDataInterface, public IOptimusComputeKernelDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusComponentSourceBinding> ComponentSourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NumThreadsExpression;
    
    UOptimusCopyKernelDataInterface();


    // Fix for true pure virtual functions not being implemented
};

