#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectRemapper -FallbackName=LiveLinkSubjectRemapper
#include "LiveLinkSkeletonRemapper.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULiveLinkSkeletonRemapper : public ULiveLinkSubjectRemapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> ReferenceSkeleton;
    
    ULiveLinkSkeletonRemapper();

};

