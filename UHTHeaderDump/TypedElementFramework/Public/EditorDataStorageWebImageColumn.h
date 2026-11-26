#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "EditorDataStorageWebImageColumn.generated.h"

USTRUCT(BlueprintType)
struct FEditorDataStorageWebImageColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UrlString;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Width;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Height;
    
    TYPEDELEMENTFRAMEWORK_API FEditorDataStorageWebImageColumn();
};

