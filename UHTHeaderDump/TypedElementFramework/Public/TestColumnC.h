#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TestColumnC.generated.h"

USTRUCT(BlueprintType)
struct FTestColumnC : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestColumnC();
};

