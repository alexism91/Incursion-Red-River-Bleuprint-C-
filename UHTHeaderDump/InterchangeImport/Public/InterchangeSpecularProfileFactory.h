#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeSpecularProfileFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSpecularProfileFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeSpecularProfileFactory();

};

