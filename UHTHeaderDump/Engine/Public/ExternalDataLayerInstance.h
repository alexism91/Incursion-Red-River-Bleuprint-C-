#pragma once
#include "CoreMinimal.h"
#include "DataLayerInstanceWithAsset.h"
#include "ExternalDataLayerInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UExternalDataLayerInstance : public UDataLayerInstanceWithAsset {
    GENERATED_BODY()
public:
    UExternalDataLayerInstance();

};

