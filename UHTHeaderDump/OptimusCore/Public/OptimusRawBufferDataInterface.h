#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ShaderValueTypeHandle -FallbackName=ShaderValueTypeHandle
#include "OptimusComputeDataInterface.h"
#include "OptimusConstantIdentifier.h"
#include "OptimusDataDomain.h"
#include "OptimusRawBufferDataInterface.generated.h"

class UOptimusComponentSourceBinding;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderValueTypeHandle ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataDomain DataDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusComponentSourceBinding> ComponentSourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusConstantIdentifier DomainConstantIdentifier;
    
    UOptimusRawBufferDataInterface();

};

