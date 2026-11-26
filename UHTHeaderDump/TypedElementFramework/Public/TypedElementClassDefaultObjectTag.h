#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TypedElementClassDefaultObjectTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementClassDefaultObjectTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementClassDefaultObjectTag();
};

