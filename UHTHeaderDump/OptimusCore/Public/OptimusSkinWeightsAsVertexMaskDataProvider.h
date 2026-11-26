#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusDeformerInstanceAccessor.h"
#include "OptimusSkinWeightsAsVertexMaskDataProvider.generated.h"

class UOptimusDeformerInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusSkinWeightsAsVertexMaskDataProvider : public UComputeDataProvider, public IOptimusDeformerInstanceAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DeformerInstance;
    
public:
    UOptimusSkinWeightsAsVertexMaskDataProvider();


    // Fix for true pure virtual functions not being implemented
};

