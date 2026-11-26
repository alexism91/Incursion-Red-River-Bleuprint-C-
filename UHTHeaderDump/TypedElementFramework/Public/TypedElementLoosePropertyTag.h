#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementLoosePropertyTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementLoosePropertyTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementLoosePropertyTag();
};

