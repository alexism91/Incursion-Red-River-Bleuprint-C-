#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "DistortionHandlerPicker.generated.h"

class UCineCameraComponent;

USTRUCT(BlueprintType)
struct FDistortionHandlerPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* TargetCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DistortionProducerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HandlerDisplayName;
    
    CAMERACALIBRATIONCORE_API FDistortionHandlerPicker();
};

