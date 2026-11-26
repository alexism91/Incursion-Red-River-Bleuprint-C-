#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TestColumnF.generated.h"

USTRUCT(BlueprintType)
struct FTestColumnF : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestColumnF();
};

