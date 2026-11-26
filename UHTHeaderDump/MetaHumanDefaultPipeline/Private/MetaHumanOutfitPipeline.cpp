#include "MetaHumanOutfitPipeline.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanCharacterPipelineSpecification -FallbackName=MetaHumanCharacterPipelineSpecification

UMetaHumanOutfitPipeline::UMetaHumanOutfitPipeline() {
    this->Specification = CreateDefaultSubobject<UMetaHumanCharacterPipelineSpecification>(TEXT("Specification"));
}

void UMetaHumanOutfitPipeline::ApplyOutfitAssemblyOutputToMeshComponent(const FMetaHumanOutfitPipelineAssemblyOutput& InOutfitAssemblyOutput, USkeletalMeshComponent* InMeshComponent, bool bUpdateSkelMesh) {
}

void UMetaHumanOutfitPipeline::ApplyOutfitAssemblyOutputToClothComponent(const FMetaHumanOutfitPipelineAssemblyOutput& InOutfitAssemblyOutput, UChaosClothComponent* InClothComponent) {
}


