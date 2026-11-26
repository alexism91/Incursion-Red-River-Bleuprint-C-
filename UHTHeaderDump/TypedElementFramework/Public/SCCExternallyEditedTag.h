#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "SCCExternallyEditedTag.generated.h"

USTRUCT(BlueprintType)
struct FSCCExternallyEditedTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FSCCExternallyEditedTag();
};

