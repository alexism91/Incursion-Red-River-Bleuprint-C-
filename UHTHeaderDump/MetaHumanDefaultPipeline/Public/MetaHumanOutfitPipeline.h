#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanItemPipeline -FallbackName=MetaHumanItemPipeline
#include "MetaHumanMaterialParameter.h"
#include "MetaHumanOutfitPipelineAssemblyOutput.h"
#include "MetaHumanOutfitPipeline.generated.h"

class UChaosClothComponent;
class UMaterialInterface;
class UMetaHumanCharacterPipelineSpecification;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanOutfitPipeline : public UMetaHumanItemPipeline {
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
    UMetaHumanOutfitPipeline();

    UFUNCTION(BlueprintCallable)
    static void ApplyOutfitAssemblyOutputToMeshComponent(const FMetaHumanOutfitPipelineAssemblyOutput& InOutfitAssemblyOutput, USkeletalMeshComponent* InMeshComponent, bool bUpdateSkelMesh);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyOutfitAssemblyOutputToClothComponent(const FMetaHumanOutfitPipelineAssemblyOutput& InOutfitAssemblyOutput, UChaosClothComponent* InClothComponent);
    
};

