#include "MetaHumanDefaultPipelineBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanCharacterPipelineSpecification -FallbackName=MetaHumanCharacterPipelineSpecification

UMetaHumanDefaultPipelineBase::UMetaHumanDefaultPipelineBase() {
    this->Specification = CreateDefaultSubobject<UMetaHumanCharacterPipelineSpecification>(TEXT("Specification"));
}


