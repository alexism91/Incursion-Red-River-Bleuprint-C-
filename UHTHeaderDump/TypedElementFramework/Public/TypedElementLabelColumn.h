#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementLabelColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementLabelColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementLabelColumn();
};

