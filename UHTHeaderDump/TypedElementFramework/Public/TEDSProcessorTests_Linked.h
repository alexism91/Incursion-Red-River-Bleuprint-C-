#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "TEDSProcessorTests_Linked.generated.h"

USTRUCT(BlueprintType)
struct FTEDSProcessorTests_Linked : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTEDSProcessorTests_Linked();
};

