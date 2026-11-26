#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TestTagColumnC.generated.h"

USTRUCT(BlueprintType)
struct FTestTagColumnC : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestTagColumnC();
};

