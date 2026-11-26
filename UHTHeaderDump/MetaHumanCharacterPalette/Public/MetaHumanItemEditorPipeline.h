#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterEditorPipeline.h"
#include "MetaHumanItemEditorPipeline.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMetaHumanItemEditorPipeline : public UMetaHumanCharacterEditorPipeline {
    GENERATED_BODY()
public:
    UMetaHumanItemEditorPipeline();

};

