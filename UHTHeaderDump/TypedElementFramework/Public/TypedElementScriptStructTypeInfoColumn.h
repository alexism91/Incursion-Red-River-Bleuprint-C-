#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementScriptStructTypeInfoColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementScriptStructTypeInfoColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementScriptStructTypeInfoColumn();
};

