#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4d -FallbackName=Vector4d
#include "CameraVariableAsset.h"
#include "Vector4dCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVector4dCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4d DefaultValue;
    
    UVector4dCameraVariable();

};

