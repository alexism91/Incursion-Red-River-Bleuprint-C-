#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusDeformerInstanceAccessor -FallbackName=OptimusDeformerInstanceAccessor
#include "OptimusGroomSolverReadDataProvider.generated.h"

class UGroomSolverComponent;
class UOptimusDeformerInstance;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGroomSolverReadDataProvider : public UComputeDataProvider, public IOptimusDeformerInstanceAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomSolverComponent* SolverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DeformerInstance;
    
    UOptimusGroomSolverReadDataProvider();


    // Fix for true pure virtual functions not being implemented
};

