#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementExternalObjectColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementExternalObjectColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementExternalObjectColumn();
};

