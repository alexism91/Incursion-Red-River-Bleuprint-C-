#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementU32IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementU32IntValueCacheColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementU32IntValueCacheColumn();
};

