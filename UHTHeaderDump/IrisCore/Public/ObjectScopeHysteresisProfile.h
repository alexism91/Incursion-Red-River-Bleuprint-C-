#pragma once
#include "CoreMinimal.h"
#include "ObjectScopeHysteresisProfile.generated.h"

USTRUCT(BlueprintType)
struct FObjectScopeHysteresisProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HysteresisFrameCount;
    
    IRISCORE_API FObjectScopeHysteresisProfile();
};

