#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementFloatValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementFloatValueCacheColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementFloatValueCacheColumn();
};

