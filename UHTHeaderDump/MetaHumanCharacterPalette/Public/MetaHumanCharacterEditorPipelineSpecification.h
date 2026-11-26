#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanCharacterPipelineSlotEditorData.h"
#include "MetaHumanCharacterEditorPipelineSpecification.generated.h"

class UScriptStruct;

UCLASS(Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterEditorPipelineSpecification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BuildInputStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMetaHumanCharacterPipelineSlotEditorData> SlotEditorData;
    
    UMetaHumanCharacterEditorPipelineSpecification();

};

