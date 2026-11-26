#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementClassTypeInfoColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementClassTypeInfoColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementClassTypeInfoColumn();
};

