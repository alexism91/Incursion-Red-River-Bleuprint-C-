#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeGeometryCacheFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeGeometryCacheFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeGeometryCacheFactory();

};

