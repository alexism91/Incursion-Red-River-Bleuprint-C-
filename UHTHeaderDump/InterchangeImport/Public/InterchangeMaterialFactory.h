#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeMaterialFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeMaterialFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeMaterialFactory();

};

