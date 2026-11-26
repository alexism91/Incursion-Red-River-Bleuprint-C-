#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase
#include "InterchangeMaterialXPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UInterchangeMaterialXPipeline();

};

