#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanProcessingAsset.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMetaHumanProcessingAsset : public UObject {
    GENERATED_BODY()
public:
    UMetaHumanProcessingAsset();

};

