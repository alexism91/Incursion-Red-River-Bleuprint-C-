#include "PCGSpawnActorSettings.h"

UPCGSpawnActorSettings::UPCGSpawnActorSettings() {
    this->Option = EPCGSpawnActorOption::CollapseActors;
    this->bForceDisableActorParsing = true;
    this->GenerationTrigger = EPCGSpawnActorGenerationTrigger::Default;
    this->bInheritActorTags = false;
    this->TemplateActor = NULL;
    this->AttachOptions = EPCGAttachOptions::Attached;
    this->bSpawnByAttribute = false;
    this->bWarnOnIdenticalSpawn = true;
    this->bDeleteActorsBeforeGeneration = false;
    this->TemplateActorClass = NULL;
    this->bAllowTemplateActorEditing = false;
}


