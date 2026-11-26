#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioPropertiesSheetAssetBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAudioPropertiesSheetAssetBase : public UObject {
    GENERATED_BODY()
public:
    UAudioPropertiesSheetAssetBase();

};

