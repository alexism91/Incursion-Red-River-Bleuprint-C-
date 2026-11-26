#pragma once
#include "CoreMinimal.h"
#include "EOpenCVArucoDictionarySize.generated.h"

UENUM(BlueprintType)
enum class EOpenCVArucoDictionarySize : uint8 {
    DictSize50,
    DictSize100,
    DictSize250,
    DictSize1000,
};

