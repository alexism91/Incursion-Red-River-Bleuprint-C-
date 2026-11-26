#pragma once
#include "CoreMinimal.h"
#include "CameraVariableAsset.h"
#include "BooleanCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBooleanCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultValue;
    
    UBooleanCameraVariable();

};

