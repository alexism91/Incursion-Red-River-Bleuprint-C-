#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeSceneVariantSetsFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeSceneVariantSetsFactory();

};

