#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "CameraVariableAsset.h"
#include "Vector3fCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVector3fCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f DefaultValue;
    
    UVector3fCameraVariable();

};

