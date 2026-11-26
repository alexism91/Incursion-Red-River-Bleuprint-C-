#pragma once
#include "CoreMinimal.h"
#include "BlueprintCameraDirectorEvaluationParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBlueprintCameraDirectorEvaluationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EvaluationContextOwner;
    
    GAMEPLAYCAMERAS_API FBlueprintCameraDirectorEvaluationParams();
};

