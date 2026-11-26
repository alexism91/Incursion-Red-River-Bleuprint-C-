#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFrameTranslator -FallbackName=LiveLinkFrameTranslator
#include "LiveLinkTransformRoleToAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULiveLinkTransformRoleToAnimation : public ULiveLinkFrameTranslator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputBoneName;
    
    ULiveLinkTransformRoleToAnimation();

};

