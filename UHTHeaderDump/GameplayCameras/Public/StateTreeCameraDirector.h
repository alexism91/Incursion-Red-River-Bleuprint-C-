#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeReference -FallbackName=StateTreeReference
#include "CameraDirector.h"
#include "StateTreeCameraDirector.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UStateTreeCameraDirector : public UCameraDirector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeReference StateTreeReference;
    
    UStateTreeCameraDirector();

};

