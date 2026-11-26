#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../Test_C/Config/DefaultGameplayTags.ini");
    this->GameplayTagRedirects.AddDefaulted(275);
    this->GameplayTagList.AddDefaulted(1318);
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->AllowEditorTagUnloading = true;
    this->AllowGameTagUnloading = false;
    this->FastReplication = false;
    this->bDynamicReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}


