#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineViewFamilySetting -FallbackName=MoviePipelineViewFamilySetting
#include "EFSRMoviePipelineQuality.h"
#include "FSRMoviePipelineSettings.generated.h"

UCLASS(Blueprintable)
class FSRMOVIERENDERPIPELINE_API UFSRMoviePipelineSettings : public UMoviePipelineViewFamilySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSRMoviePipelineQuality FSRQuality;
    
    UFSRMoviePipelineSettings();

};

