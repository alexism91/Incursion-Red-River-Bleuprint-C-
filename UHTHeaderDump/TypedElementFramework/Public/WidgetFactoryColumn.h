#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "WidgetFactoryColumn.generated.h"

USTRUCT(BlueprintType)
struct FWidgetFactoryColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FWidgetFactoryColumn();
};

