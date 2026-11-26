#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementSyncBackToWorldTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSyncBackToWorldTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSyncBackToWorldTag();
};

