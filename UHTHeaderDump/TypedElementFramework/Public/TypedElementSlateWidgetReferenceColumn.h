#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementSlateWidgetReferenceColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSlateWidgetReferenceColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSlateWidgetReferenceColumn();
};

