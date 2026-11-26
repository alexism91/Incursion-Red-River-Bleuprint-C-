#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "VisibleInEditorColumn.generated.h"

USTRUCT(BlueprintType)
struct FVisibleInEditorColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FVisibleInEditorColumn();
};

