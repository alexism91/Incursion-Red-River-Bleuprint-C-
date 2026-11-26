#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementPackageUnresolvedReference.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackageUnresolvedReference : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackageUnresolvedReference();
};

