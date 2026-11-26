#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "CameraVariableAsset.h"
#include "Vector4fCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVector4fCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4f DefaultValue;
    
    UVector4fCameraVariable();

};

