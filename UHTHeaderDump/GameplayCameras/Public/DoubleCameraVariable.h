#pragma once
#include "CoreMinimal.h"
#include "CameraVariableAsset.h"
#include "DoubleCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDoubleCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultValue;
    
    UDoubleCameraVariable();

};

