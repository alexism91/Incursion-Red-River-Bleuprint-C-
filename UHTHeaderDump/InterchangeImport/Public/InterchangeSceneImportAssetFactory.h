#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeSceneImportAssetFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeSceneImportAssetFactory();

};

