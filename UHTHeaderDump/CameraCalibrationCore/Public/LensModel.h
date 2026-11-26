#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LensModel.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ULensModel : public UObject {
    GENERATED_BODY()
public:
    ULensModel();

};

