#include "LocalAttachmentBase.h"
#include "Net/UnrealNetwork.h"

ALocalAttachmentBase::ALocalAttachmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseSkeletalMesh = false;
    this->LaserIndex = 0;
    this->FlashlightIndex = 0;
}

void ALocalAttachmentBase::ReplicateAttachmentTags_Implementation(FGameplayTagContainer NewAttachmentTags) {
}

void ALocalAttachmentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALocalAttachmentBase, GameplayTags);
}


