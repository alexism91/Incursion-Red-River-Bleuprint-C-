#pragma once
#include "CoreMinimal.h"
#include "SCCUserInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCCUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    TYPEDELEMENTFRAMEWORK_API FSCCUserInfo();
};

