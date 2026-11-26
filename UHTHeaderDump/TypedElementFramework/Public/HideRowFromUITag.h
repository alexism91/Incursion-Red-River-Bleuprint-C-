#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "HideRowFromUITag.generated.h"

USTRUCT(BlueprintType)
struct FHideRowFromUITag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FHideRowFromUITag();
};

