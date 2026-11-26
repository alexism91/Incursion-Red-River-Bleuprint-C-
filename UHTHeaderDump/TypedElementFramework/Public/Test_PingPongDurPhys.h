#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageColumn.h"
#include "Test_PingPongDurPhys.generated.h"

USTRUCT(BlueprintType)
struct FTest_PingPongDurPhys : public FEditorDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTest_PingPongDurPhys();
};

