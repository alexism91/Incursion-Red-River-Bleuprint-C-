#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementPropertyBagPlaceholderTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPropertyBagPlaceholderTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPropertyBagPlaceholderTag();
};

