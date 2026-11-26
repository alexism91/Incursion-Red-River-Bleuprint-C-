#pragma once
#include "CoreMinimal.h"
#include "SlateRHIPostBufferProcessor.h"
#include "SlatePostBufferBlur.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class USlatePostBufferBlur : public USlateRHIPostBufferProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GaussianBlurStrength;
    
    USlatePostBufferBlur();

};

