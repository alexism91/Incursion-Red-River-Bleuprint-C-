#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "SCCStagedTag.generated.h"

USTRUCT(BlueprintType)
struct FSCCStagedTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FSCCStagedTag();
};

