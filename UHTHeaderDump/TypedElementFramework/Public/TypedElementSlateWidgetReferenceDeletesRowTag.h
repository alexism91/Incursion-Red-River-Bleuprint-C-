#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementSlateWidgetReferenceDeletesRowTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSlateWidgetReferenceDeletesRowTag();
};

