#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TestColumnInt.generated.h"

USTRUCT(BlueprintType)
struct FTestColumnInt : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestInt;
    
    TYPEDELEMENTFRAMEWORK_API FTestColumnInt();
};

