#include "LiveLinkAnimationVirtualSubject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkAnimationRole -FallbackName=LiveLinkAnimationRole

ULiveLinkAnimationVirtualSubject::ULiveLinkAnimationVirtualSubject() {
    this->Role = ULiveLinkAnimationRole::StaticClass();
    this->LocationBehavior = EBoneTransformResolution::Combine;
    this->RotationBehavior = EBoneTransformResolution::Combine;
    this->bAppendSubjectNameToBones = false;
}


