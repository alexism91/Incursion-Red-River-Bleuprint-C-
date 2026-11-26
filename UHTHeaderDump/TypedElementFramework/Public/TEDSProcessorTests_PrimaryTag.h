#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TEDSProcessorTests_PrimaryTag.generated.h"

USTRUCT(BlueprintType)
struct FTEDSProcessorTests_PrimaryTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTEDSProcessorTests_PrimaryTag();
};

