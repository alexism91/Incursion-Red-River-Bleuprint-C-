#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "DescriptionColumn.generated.h"

USTRUCT(BlueprintType)
struct FDescriptionColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    TYPEDELEMENTFRAMEWORK_API FDescriptionColumn();
};

