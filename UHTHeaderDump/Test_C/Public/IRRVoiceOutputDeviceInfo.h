#pragma once
#include "CoreMinimal.h"
#include "IRRVoiceOutputDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRVoiceOutputDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WwiseDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
    FIRRVoiceOutputDeviceInfo();
};

