#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraValueInterpolator.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UCameraValueInterpolator : public UObject {
    GENERATED_BODY()
public:
    UCameraValueInterpolator();

};

