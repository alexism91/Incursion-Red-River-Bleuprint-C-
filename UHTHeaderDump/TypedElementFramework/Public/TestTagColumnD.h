#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TestTagColumnD.generated.h"

USTRUCT(BlueprintType)
struct FTestTagColumnD : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestTagColumnD();
};

