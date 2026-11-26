#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementPackageReference.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackageReference : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackageReference();
};

