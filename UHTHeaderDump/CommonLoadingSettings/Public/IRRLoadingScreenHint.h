#pragma once
#include "CoreMinimal.h"
#include "IRRLoadingScreenHint.generated.h"

USTRUCT(BlueprintType)
struct COMMONLOADINGSETTINGS_API FIRRLoadingScreenHint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FIRRLoadingScreenHint();
};

