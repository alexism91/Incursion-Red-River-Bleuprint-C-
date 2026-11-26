#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "WidgetFactoryConstructorTypeInfoColumn.generated.h"

USTRUCT(BlueprintType)
struct FWidgetFactoryConstructorTypeInfoColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FWidgetFactoryConstructorTypeInfoColumn();
};

