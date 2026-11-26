#include "VerseStruct.h"

UVerseStruct::UVerseStruct() {
    this->VerseClassFlags = 0;
    this->InitFunction = NULL;
    this->ModuleClass = NULL;
    this->FactoryFunction = NULL;
    this->OverrideFactoryFunction = NULL;
    this->ConstructorEffects = EVerseEffectSet::None;
}


