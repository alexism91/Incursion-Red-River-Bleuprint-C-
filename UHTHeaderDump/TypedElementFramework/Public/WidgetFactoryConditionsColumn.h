#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "WidgetFactoryConditionsColumn.generated.h"

USTRUCT(BlueprintType)
struct FWidgetFactoryConditionsColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FWidgetFactoryConditionsColumn();
};

