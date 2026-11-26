#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CameraVariableAsset.h"
#include "Vector2dCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVector2dCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultValue;
    
    UVector2dCameraVariable();

};

