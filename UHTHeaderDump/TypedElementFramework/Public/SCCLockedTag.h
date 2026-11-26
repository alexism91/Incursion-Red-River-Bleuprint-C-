#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "SCCLockedTag.generated.h"

USTRUCT(BlueprintType)
struct FSCCLockedTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FSCCLockedTag();
};

