#pragma once
#include "CoreMinimal.h"
#include "WebJSCallbackBase.h"
#include "WebJSResponse.generated.h"

USTRUCT(BlueprintType)
struct FWebJSResponse : public FWebJSCallbackBase {
    GENERATED_BODY()
public:
    WEBBROWSER_API FWebJSResponse();
};

