#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanCollectionPipeline -FallbackName=MetaHumanCollectionPipeline
#include "Templates/SubclassOf.h"
#include "MetaHumanDefaultPipelineBase.generated.h"

class UMetaHumanCharacterPipelineSpecification;
class UMetaHumanItemPipeline;

UCLASS(Abstract, Blueprintable)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanDefaultPipelineBase : public UMetaHumanCollectionPipeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanCharacterPipelineSpecification* Specification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UObject>, TSubclassOf<UMetaHumanItemPipeline>> DefaultAssetPipelines;
    
public:
    UMetaHumanDefaultPipelineBase();

};

