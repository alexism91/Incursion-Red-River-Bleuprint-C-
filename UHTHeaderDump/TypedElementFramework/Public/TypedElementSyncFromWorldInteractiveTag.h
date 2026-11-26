#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementSyncFromWorldInteractiveTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSyncFromWorldInteractiveTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSyncFromWorldInteractiveTag();
};

