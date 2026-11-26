#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "TestColumnString.generated.h"

USTRUCT(BlueprintType)
struct FTestColumnString : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestString;
    
    TYPEDELEMENTFRAMEWORK_API FTestColumnString();
};

