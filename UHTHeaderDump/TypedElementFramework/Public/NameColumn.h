#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "NameColumn.generated.h"

USTRUCT(BlueprintType)
struct FNameColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    TYPEDELEMENTFRAMEWORK_API FNameColumn();
};

