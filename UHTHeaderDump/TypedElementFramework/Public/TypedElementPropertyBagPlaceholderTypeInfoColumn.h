#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementPropertyBagPlaceholderTypeInfoColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPropertyBagPlaceholderTypeInfoColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPropertyBagPlaceholderTypeInfoColumn();
};

