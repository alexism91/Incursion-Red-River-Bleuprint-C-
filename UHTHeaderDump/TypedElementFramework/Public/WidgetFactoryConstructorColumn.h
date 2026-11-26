#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "WidgetFactoryConstructorColumn.generated.h"

USTRUCT(BlueprintType)
struct FWidgetFactoryConstructorColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FWidgetFactoryConstructorColumn();
};

