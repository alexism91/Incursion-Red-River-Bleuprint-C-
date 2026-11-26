#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusDeformerAssetPathAccessor.h"
#include "OptimusHalfEdgeDataProvider.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusHalfEdgeDataProvider : public UComputeDataProvider, public IOptimusDeformerAssetPathAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMesh;
    
    UOptimusHalfEdgeDataProvider();


    // Fix for true pure virtual functions not being implemented
};

