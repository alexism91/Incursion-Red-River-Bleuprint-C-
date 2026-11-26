#pragma once
#include "CoreMinimal.h"
#include "CameraVariableAsset.h"
#include "Integer32CameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInteger32CameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UInteger32CameraVariable();

};

