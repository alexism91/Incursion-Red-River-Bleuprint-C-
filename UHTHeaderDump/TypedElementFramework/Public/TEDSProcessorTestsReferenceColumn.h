#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TEDSProcessorTestsReferenceColumn.generated.h"

USTRUCT(BlueprintType)
struct FTEDSProcessorTestsReferenceColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTEDSProcessorTestsReferenceColumn();
};

