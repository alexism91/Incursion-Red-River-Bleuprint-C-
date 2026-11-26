#include "MetaHumanCollection.h"
#include "MetaHumanCharacterInstance.h"

UMetaHumanCollection::UMetaHumanCollection() {
    this->pipeline = NULL;
    this->DefaultInstance = CreateDefaultSubobject<UMetaHumanCharacterInstance>(TEXT("DefaultInstance"));
    this->bIsUnpacked = false;
}


