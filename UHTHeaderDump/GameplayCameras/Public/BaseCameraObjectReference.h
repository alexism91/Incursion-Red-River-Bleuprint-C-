#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
#include "CameraObjectInterfaceParameterMetaData.h"
#include "BaseCameraObjectReference.generated.h"

USTRUCT(BlueprintType)
struct FBaseCameraObjectReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraObjectInterfaceParameterMetaData> ParameterMetaData;
    
public:
    GAMEPLAYCAMERAS_API FBaseCameraObjectReference();
};

