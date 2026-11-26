#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterPipeline.h"
#include "MetaHumanItemPipeline.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMetaHumanItemPipeline : public UMetaHumanCharacterPipeline {
    GENERATED_BODY()
public:
    UMetaHumanItemPipeline();

};

