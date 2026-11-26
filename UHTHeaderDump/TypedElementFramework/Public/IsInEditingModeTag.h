#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "IsInEditingModeTag.generated.h"

USTRUCT(BlueprintType)
struct FIsInEditingModeTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FIsInEditingModeTag();
};

