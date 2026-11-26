#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementSelectionColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSelectionColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectionSet;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementSelectionColumn();
};

