#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementSyncFromWorldTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSyncFromWorldTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSyncFromWorldTag();
};

