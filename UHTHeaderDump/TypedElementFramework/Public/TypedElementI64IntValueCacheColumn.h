#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementI64IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementI64IntValueCacheColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementI64IntValueCacheColumn();
};

