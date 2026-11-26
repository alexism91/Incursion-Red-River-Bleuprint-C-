#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase
#include "InterchangeGLTFPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeGLTFPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PipelineDisplayName;
    
    UInterchangeGLTFPipeline();

};

