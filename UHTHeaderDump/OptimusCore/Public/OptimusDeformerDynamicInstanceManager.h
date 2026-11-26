#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformerInstance -FallbackName=MeshDeformerInstance
#include "OptimusDeformerDynamicInstanceManager.generated.h"

class UOptimusDeformerInstance;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusDeformerDynamicInstanceManager : public UMeshDeformerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DefaultInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UOptimusDeformerInstance*> GuidToRigDeformerInstanceMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UOptimusDeformerInstance*> GuidToInstanceMap;
    
public:
    UOptimusDeformerDynamicInstanceManager();

};

