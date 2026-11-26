#pragma once
#include "CoreMinimal.h"
#include "CameraDirector.h"
#include "Templates/SubclassOf.h"
#include "BlueprintCameraDirector.generated.h"

class UBlueprintCameraDirectorEvaluator;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBlueprintCameraDirector : public UCameraDirector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlueprintCameraDirectorEvaluator> CameraDirectorEvaluatorClass;
    
    UBlueprintCameraDirector();

};

