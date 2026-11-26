#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
#include "CameraVariableAsset.h"
#include "Transform3fCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTransform3fCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform3f DefaultValue;
    
    UTransform3fCameraVariable();

};

