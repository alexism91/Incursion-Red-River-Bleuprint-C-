#pragma once
#include "CoreMinimal.h"
#include "WebJSCallbackBase.h"
#include "WebJSFunction.generated.h"

USTRUCT(BlueprintType)
struct FWebJSFunction : public FWebJSCallbackBase {
    GENERATED_BODY()
public:
    WEBBROWSER_API FWebJSFunction();
};

