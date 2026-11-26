#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "ObjectOverrideColumn.generated.h"

USTRUCT(BlueprintType)
struct FObjectOverrideColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FObjectOverrideColumn();
};

