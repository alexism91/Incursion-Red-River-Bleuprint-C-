#include "MetaHumanCharacterPipelineSlot.h"

FMetaHumanCharacterPipelineSlot::FMetaHumanCharacterPipelineSlot() {
    this->BuildOutputStruct = NULL;
    this->AssemblyInputStruct = NULL;
    this->AssemblyOutputStruct = NULL;
    this->bAllowsMultipleSelection = false;
    this->bVisibleToUser = false;
}

