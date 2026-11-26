#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeSkeletonFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSkeletonFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeSkeletonFactory();

};

