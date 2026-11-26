#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanItemPipeline -FallbackName=MetaHumanItemPipeline
#include "MetaHumanGroomPipelineAssemblyOutput.h"
#include "MetaHumanMaterialParameter.h"
#include "MetaHumanGroomPipeline.generated.h"

class UGroomComponent;
class UMaterialInterface;
class UMetaHumanCharacterPipelineSpecification;

UCLASS(Blueprintable, EditInlineNew)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanGroomPipeline : public UMetaHumanItemPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanMaterialParameter> RuntimeMaterialParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanCharacterPipelineSpecification* Specification;
    
public:
    UMetaHumanGroomPipeline();

    UFUNCTION(BlueprintCallable)
    static void ApplyGroomAssemblyOutputToGroomComponent(const FMetaHumanGroomPipelineAssemblyOutput& GroomAssemblyOutput, UGroomComponent* GroomComponent);
    
};

