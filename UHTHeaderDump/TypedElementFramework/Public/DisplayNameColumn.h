#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "DisplayNameColumn.generated.h"

USTRUCT(BlueprintType)
struct FDisplayNameColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    TYPEDELEMENTFRAMEWORK_API FDisplayNameColumn();
};

