#pragma once
#include "CoreMinimal.h"
#include "CompositeFallbackFont.h"
#include "CompositeSubFont.h"
#include "Typeface.h"
#include "CompositeFont.generated.h"

USTRUCT(BlueprintType)
struct FCompositeFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTypeface DefaultTypeface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompositeFallbackFont FallbackTypeface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeSubFont> SubTypefaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAscentDescentOverride;
    
    SLATECORE_API FCompositeFont();
};

