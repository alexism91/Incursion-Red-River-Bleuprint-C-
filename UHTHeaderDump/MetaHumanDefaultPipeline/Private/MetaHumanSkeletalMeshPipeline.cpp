#include "MetaHumanSkeletalMeshPipeline.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanCharacterPipelineSpecification -FallbackName=MetaHumanCharacterPipelineSpecification

UMetaHumanSkeletalMeshPipeline::UMetaHumanSkeletalMeshPipeline() {
    this->Specification = CreateDefaultSubobject<UMetaHumanCharacterPipelineSpecification>(TEXT("Specification"));
}

void UMetaHumanSkeletalMeshPipeline::ApplySkeletalMeshAssemblyOutputToSkeletalMeshComponent(const FMetaHumanSkeletalMeshPipelineAssemblyOutput& InAssemblyOutput, USkeletalMeshComponent* InComponent, USkeletalMeshComponent* InLeaderComponent) {
}


