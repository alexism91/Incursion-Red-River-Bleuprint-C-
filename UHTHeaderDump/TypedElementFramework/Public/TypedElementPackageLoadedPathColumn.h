#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementPackageLoadedPathColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackageLoadedPathColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackageLoadedPathColumn();
};

