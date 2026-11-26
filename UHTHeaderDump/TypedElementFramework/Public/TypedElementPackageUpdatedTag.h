#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementPackageUpdatedTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackageUpdatedTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackageUpdatedTag();
};

