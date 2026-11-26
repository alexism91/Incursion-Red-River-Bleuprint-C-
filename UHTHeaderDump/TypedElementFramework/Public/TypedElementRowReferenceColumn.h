#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementRowReferenceColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementRowReferenceColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementRowReferenceColumn();
};

