#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeSparseVolumeTextureFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSparseVolumeTextureFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeSparseVolumeTextureFactory();

};

