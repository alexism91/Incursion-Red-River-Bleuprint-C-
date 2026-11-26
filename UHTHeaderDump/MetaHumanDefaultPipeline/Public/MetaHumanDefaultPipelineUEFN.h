#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "MetaHumanDefaultPipelineLegacy.h"
#include "MetaHumanDefaultPipelineUEFN.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanDefaultPipelineUEFN : public UMetaHumanDefaultPipelineLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath UefnProjectFilePath;
    
    UMetaHumanDefaultPipelineUEFN();

};

