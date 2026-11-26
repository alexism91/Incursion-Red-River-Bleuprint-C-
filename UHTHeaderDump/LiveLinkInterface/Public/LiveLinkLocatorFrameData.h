#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LiveLinkBaseFrameData.h"
#include "LiveLinkLocatorFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkLocatorFrameData : public FLiveLinkBaseFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locators;
    
    LIVELINKINTERFACE_API FLiveLinkLocatorFrameData();
};

