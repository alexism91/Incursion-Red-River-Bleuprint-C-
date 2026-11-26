#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusDeformerInstanceAccessor.h"
#include "OptimusAdvancedSkeletonDataProvider.generated.h"

class UOptimusDeformerInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusAdvancedSkeletonDataProvider : public UComputeDataProvider, public IOptimusDeformerInstanceAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DeformerInstance;
    
public:
    UOptimusAdvancedSkeletonDataProvider();


    // Fix for true pure virtual functions not being implemented
};

