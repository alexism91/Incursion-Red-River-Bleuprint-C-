#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementPackagePathColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackagePathColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackagePathColumn();
};

