#pragma once
#include "CoreMinimal.h"
#include "BlueprintCameraDirectorActivateParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBlueprintCameraDirectorActivateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EvaluationContextOwner;
    
    GAMEPLAYCAMERAS_API FBlueprintCameraDirectorActivateParams();
};

