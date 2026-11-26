#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementWorldColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementWorldColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementWorldColumn();
};

