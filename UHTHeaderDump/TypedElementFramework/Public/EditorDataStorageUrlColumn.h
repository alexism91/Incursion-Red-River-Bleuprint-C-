#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "EditorDataStorageUrlColumn.generated.h"

USTRUCT(BlueprintType)
struct FEditorDataStorageUrlColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UrlString;
    
    TYPEDELEMENTFRAMEWORK_API FEditorDataStorageUrlColumn();
};

