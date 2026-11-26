#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeLevelSequenceFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeLevelSequenceFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeLevelSequenceFactory();

};

