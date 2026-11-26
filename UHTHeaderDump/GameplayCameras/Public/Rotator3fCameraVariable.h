#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator3f -FallbackName=Rotator3f
#include "CameraVariableAsset.h"
#include "Rotator3fCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URotator3fCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3f DefaultValue;
    
    URotator3fCameraVariable();

};

