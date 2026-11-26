#pragma once
#include "CoreMinimal.h"
#include "SocialPlatformDescription.h"
#include "UserPlatform.generated.h"

USTRUCT(BlueprintType)
struct FUserPlatform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialPlatformDescription PlatformDescription;
    
public:
    PARTY_API FUserPlatform();
};

