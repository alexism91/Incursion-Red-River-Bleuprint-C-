#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TestTagColumnA.generated.h"

USTRUCT(BlueprintType)
struct FTestTagColumnA : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestTagColumnA();
};

