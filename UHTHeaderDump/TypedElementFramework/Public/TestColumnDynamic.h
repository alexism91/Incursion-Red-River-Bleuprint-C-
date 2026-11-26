#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TestColumnDynamic.generated.h"

USTRUCT(BlueprintType)
struct FTestColumnDynamic : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTestColumnDynamic();
};

