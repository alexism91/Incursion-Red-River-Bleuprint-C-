#pragma once
#include "CoreMinimal.h"
#include "TypedElementWidgetConstructor.h"
#include "SimpleWidgetConstructor.generated.h"

USTRUCT(BlueprintType)
struct FSimpleWidgetConstructor : public FTypedElementWidgetConstructor {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FSimpleWidgetConstructor();
};

