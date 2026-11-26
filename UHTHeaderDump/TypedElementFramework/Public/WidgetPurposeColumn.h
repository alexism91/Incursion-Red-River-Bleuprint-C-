#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "WidgetPurposeColumn.generated.h"

USTRUCT(BlueprintType)
struct FWidgetPurposeColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FWidgetPurposeColumn();
};

