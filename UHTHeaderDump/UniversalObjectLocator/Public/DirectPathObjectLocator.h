#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "DirectPathObjectLocator.generated.h"

USTRUCT(BlueprintType)
struct FDirectPathObjectLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Path;
    
    UNIVERSALOBJECTLOCATOR_API FDirectPathObjectLocator();
};

