#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeSkeletalMeshFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeSkeletalMeshFactory();

};

