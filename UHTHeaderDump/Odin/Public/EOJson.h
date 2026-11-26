#pragma once
#include "CoreMinimal.h"
#include "EOJson.generated.h"

UENUM(BlueprintType)
namespace EOJson {
    enum Type {
        None,
        Null,
        String,
        Number,
        Boolean,
        Array,
        Object,
    };
}

