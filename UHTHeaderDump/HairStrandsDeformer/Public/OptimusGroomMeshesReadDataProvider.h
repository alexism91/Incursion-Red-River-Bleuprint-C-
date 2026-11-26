#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusGroomMeshesReadDataProvider.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGroomMeshesReadDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UOptimusGroomMeshesReadDataProvider();

};

