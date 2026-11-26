#include "MetaHumanGroomPipeline.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanCharacterPipelineSpecification -FallbackName=MetaHumanCharacterPipelineSpecification

UMetaHumanGroomPipeline::UMetaHumanGroomPipeline() {
    this->Specification = CreateDefaultSubobject<UMetaHumanCharacterPipelineSpecification>(TEXT("Specification"));
}

void UMetaHumanGroomPipeline::ApplyGroomAssemblyOutputToGroomComponent(const FMetaHumanGroomPipelineAssemblyOutput& GroomAssemblyOutput, UGroomComponent* GroomComponent) {
}


