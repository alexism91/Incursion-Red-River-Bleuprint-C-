#pragma once
#include "CoreMinimal.h"
#include "NetObjectGridFilterProfile.generated.h"

USTRUCT(BlueprintType)
struct FNetObjectGridFilterProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterProfileName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FrameCountBeforeCulling;
    
    IRISCORE_API FNetObjectGridFilterProfile();
};

