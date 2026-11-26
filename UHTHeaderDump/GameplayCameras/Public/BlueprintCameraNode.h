#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CustomCameraNodeParameterProvider.h"
#include "CustomCameraNodeParameters.h"
#include "Templates/SubclassOf.h"
#include "BlueprintCameraNode.generated.h"

class UBlueprintCameraNodeEvaluator;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBlueprintCameraNode : public UCameraNode, public ICustomCameraNodeParameterProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlueprintCameraNodeEvaluator* CameraNodeEvaluatorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomCameraNodeParameters CameraNodeEvaluatorOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlueprintCameraNodeEvaluator> CameraNodeEvaluatorClass;
    
public:
    UBlueprintCameraNode();


    // Fix for true pure virtual functions not being implemented
};

