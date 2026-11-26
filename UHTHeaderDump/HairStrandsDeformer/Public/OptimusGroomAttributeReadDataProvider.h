#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "EOptimusGroomAttributeTypes.h"
#include "EOptimusGroomExecDomain.h"
#include "OptimusGroomAttributeReadDataProvider.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGroomAttributeReadDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroomAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusGroomExecDomain GroomAttributeGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusGroomAttributeTypes GroomAttributeType;
    
    UOptimusGroomAttributeReadDataProvider();

};

