#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementIconOverrideColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementIconOverrideColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconName;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementIconOverrideColumn();
};

