#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "UnresolvedTableRowParentColumn.generated.h"

USTRUCT(BlueprintType)
struct FUnresolvedTableRowParentColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FUnresolvedTableRowParentColumn();
};

