#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "Test_PingPongPrePhys.generated.h"

USTRUCT(BlueprintType)
struct FTest_PingPongPrePhys : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTest_PingPongPrePhys();
};

