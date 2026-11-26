#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterPipeline.h"
#include "MetaHumanCollectionPipeline.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMetaHumanCollectionPipeline : public UMetaHumanCharacterPipeline {
    GENERATED_BODY()
public:
    UMetaHumanCollectionPipeline();

};

