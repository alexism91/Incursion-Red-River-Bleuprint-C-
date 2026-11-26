#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterEditorPipeline.h"
#include "MetaHumanCollectionEditorPipeline.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMetaHumanCollectionEditorPipeline : public UMetaHumanCharacterEditorPipeline {
    GENERATED_BODY()
public:
    UMetaHumanCollectionEditorPipeline();

};

