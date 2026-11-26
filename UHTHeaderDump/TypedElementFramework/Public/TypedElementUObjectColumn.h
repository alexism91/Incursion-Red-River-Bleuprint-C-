#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementUObjectColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementUObjectColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementUObjectColumn();
};

