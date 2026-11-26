#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "SCCInChangelistTag.generated.h"

USTRUCT(BlueprintType)
struct FSCCInChangelistTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FSCCInChangelistTag();
};

