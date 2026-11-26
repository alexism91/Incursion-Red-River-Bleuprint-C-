#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementI32IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementI32IntValueCacheColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementI32IntValueCacheColumn();
};

