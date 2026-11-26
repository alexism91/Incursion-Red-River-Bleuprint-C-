#include "PCGCreateTargetActor.h"

UPCGCreateTargetActor::UPCGCreateTargetActor() {
    this->TemplateActor = NULL;
    this->AttachOptions = EPCGAttachOptions::Attached;
    this->bDeleteActorsBeforeGeneration = false;
    this->TemplateActorClass = NULL;
    this->bAllowTemplateActorEditing = false;
}


