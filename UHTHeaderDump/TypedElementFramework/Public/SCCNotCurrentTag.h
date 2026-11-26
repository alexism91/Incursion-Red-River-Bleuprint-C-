#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "SCCNotCurrentTag.generated.h"

USTRUCT(BlueprintType)
struct FSCCNotCurrentTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FSCCNotCurrentTag();
};

