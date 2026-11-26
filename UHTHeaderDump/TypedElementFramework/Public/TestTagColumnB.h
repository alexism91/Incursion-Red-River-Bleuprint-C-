#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TestTagColumnB.generated.h"

USTRUCT(BlueprintType)
struct FTestTagColumnB : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestTagColumnB();
};

