#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TableRowParentColumn.generated.h"

USTRUCT(BlueprintType)
struct FTableRowParentColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTableRowParentColumn();
};

