#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanCharacterEditorPipeline.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMetaHumanCharacterEditorPipeline : public UObject {
    GENERATED_BODY()
public:
    UMetaHumanCharacterEditorPipeline();

};

