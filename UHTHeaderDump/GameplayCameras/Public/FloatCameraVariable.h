#pragma once
#include "CoreMinimal.h"
#include "CameraVariableAsset.h"
#include "FloatCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFloatCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UFloatCameraVariable();

};

