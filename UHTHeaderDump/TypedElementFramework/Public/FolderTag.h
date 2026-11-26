#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageTag.h"
#include "FolderTag.generated.h"

USTRUCT(BlueprintType)
struct FFolderTag : public FEditorDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FFolderTag();
};

