#pragma once
#include "CoreMinimal.h"
#include "MetaHumanDefaultPipelineBase.h"
#include "Templates/SubclassOf.h"
#include "MetaHumanDefaultPipeline.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanDefaultPipeline : public UMetaHumanDefaultPipelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
public:
    UMetaHumanDefaultPipeline();

};

