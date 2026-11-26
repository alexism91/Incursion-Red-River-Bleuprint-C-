#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LiveLinkControllerBase.h"
#include "LiveLinkTransformControllerData.h"
#include "LiveLinkTransformController.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULiveLinkTransformController : public ULiveLinkControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkTransformControllerData TransformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    ULiveLinkTransformController();

};

