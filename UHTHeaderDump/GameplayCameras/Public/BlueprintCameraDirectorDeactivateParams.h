#pragma once
#include "CoreMinimal.h"
#include "BlueprintCameraDirectorDeactivateParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBlueprintCameraDirectorDeactivateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EvaluationContextOwner;
    
    GAMEPLAYCAMERAS_API FBlueprintCameraDirectorDeactivateParams();
};

