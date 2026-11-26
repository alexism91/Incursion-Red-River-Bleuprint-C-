#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusDeformerInstanceAccessor.h"
#include "OptimusSkinnedMeshReadDataProvider.generated.h"

class UOptimusDeformerInstance;
class USkinnedMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusSkinnedMeshReadDataProvider : public UComputeDataProvider, public IOptimusDeformerInstanceAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DeformerInstance;
    
public:
    UOptimusSkinnedMeshReadDataProvider();


    // Fix for true pure virtual functions not being implemented
};

