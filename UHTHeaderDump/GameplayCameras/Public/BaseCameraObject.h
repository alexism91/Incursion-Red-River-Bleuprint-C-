#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraObjectAllocationInfo.h"
#include "CameraObjectInterface.h"
#include "CameraObjectInterfaceParameterDefinition.h"
#include "BaseCameraObject.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBaseCameraObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraObjectInterface Interface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraObjectAllocationInfo AllocationInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag DefaultParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraObjectInterfaceParameterDefinition> ParameterDefinitions;
    
public:
    UBaseCameraObject();

};

