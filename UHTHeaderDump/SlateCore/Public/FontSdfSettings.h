#pragma once
#include "CoreMinimal.h"
#include "FontSdfSettings.generated.h"

USTRUCT(BlueprintType)
struct FFontSdfSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePpem;
    
    SLATECORE_API FFontSdfSettings();
};

