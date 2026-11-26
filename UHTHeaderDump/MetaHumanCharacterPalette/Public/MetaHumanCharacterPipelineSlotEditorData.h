#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterPipelineSlotEditorData.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanCharacterPipelineSlotEditorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BuildInputStruct;
    
    FMetaHumanCharacterPipelineSlotEditorData();
};

