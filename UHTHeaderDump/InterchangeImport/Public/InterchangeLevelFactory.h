#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeLevelFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeLevelFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeLevelFactory();

};

