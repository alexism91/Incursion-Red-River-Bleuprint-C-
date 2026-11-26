#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkVirtualSubject -FallbackName=LiveLinkVirtualSubject
#include "EBoneTransformResolution.h"
#include "LiveLinkVirtualSubjectBoneAttachment.h"
#include "LiveLinkAnimationVirtualSubject.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkVirtualSubjectBoneAttachment> Attachments;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneTransformResolution LocationBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneTransformResolution RotationBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppendSubjectNameToBones;
    
    ULiveLinkAnimationVirtualSubject();

};

