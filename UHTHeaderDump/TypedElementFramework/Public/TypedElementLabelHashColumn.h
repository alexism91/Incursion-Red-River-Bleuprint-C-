#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementLabelHashColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementLabelHashColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 LabelHash;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementLabelHashColumn();
};

