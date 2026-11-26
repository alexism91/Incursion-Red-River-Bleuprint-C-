#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "CameraVariableAsset.h"
#include "Vector2fCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVector2fCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f DefaultValue;
    
    UVector2fCameraVariable();

};

