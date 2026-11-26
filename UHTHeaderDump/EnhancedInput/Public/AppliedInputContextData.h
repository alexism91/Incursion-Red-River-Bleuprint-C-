#pragma once
#include "CoreMinimal.h"
#include "AppliedInputContextData.generated.h"

USTRUCT(BlueprintType)
struct FAppliedInputContextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegistrationCount;
    
    ENHANCEDINPUT_API FAppliedInputContextData();
};

