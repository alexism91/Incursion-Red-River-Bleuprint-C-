#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeSceneImportAssetFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneImportAssetFactoryNode();

};

