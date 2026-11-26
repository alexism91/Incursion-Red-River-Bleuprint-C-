#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusDeformerInstanceAccessor.h"
#include "OptimusGraphVariableDescription.h"
#include "OptimusGraphDataProvider.generated.h"

class UMeshComponent;
class UOptimusDeformerInstance;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGraphDataProvider : public UComputeDataProvider, public IOptimusDeformerInstanceAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusGraphVariableDescription> Variables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DeformerInstance;
    
public:
    UOptimusGraphDataProvider();


    // Fix for true pure virtual functions not being implemented
};

