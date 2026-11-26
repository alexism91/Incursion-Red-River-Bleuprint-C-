#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TypedElementUObjectIdColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementUObjectIdColumn : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNumber;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementUObjectIdColumn();
};

