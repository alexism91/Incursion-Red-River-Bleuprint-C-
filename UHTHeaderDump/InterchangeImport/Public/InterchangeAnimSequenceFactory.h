#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeAnimSequenceFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeAnimSequenceFactory();

};

