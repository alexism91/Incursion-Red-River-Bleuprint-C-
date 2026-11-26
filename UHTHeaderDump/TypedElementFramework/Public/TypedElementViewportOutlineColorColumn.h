#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementViewportOutlineColorColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementViewportOutlineColorColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectionOutlineColorIndex;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementViewportOutlineColorColumn();
};

