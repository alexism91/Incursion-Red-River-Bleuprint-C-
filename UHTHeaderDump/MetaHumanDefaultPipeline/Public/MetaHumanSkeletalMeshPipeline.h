#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanItemPipeline -FallbackName=MetaHumanItemPipeline
#include "MetaHumanMaterialParameter.h"
#include "MetaHumanSkeletalMeshPipelineAssemblyOutput.h"
#include "MetaHumanSkeletalMeshPipeline.generated.h"

class UAnimBlueprint;
class UMaterialInterface;
class UMetaHumanCharacterPipelineSpecification;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanSkeletalMeshPipeline : public UMetaHumanItemPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanMaterialParameter> RuntimeMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> AnimBlueprintToUse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanCharacterPipelineSpecification* Specification;
    
public:
    UMetaHumanSkeletalMeshPipeline();

    UFUNCTION(BlueprintCallable)
    static void ApplySkeletalMeshAssemblyOutputToSkeletalMeshComponent(const FMetaHumanSkeletalMeshPipelineAssemblyOutput& InAssemblyOutput, USkeletalMeshComponent* InComponent, USkeletalMeshComponent* InLeaderComponent);
    
};

