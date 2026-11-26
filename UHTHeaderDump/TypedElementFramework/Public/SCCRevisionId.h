#pragma once
#include "CoreMinimal.h"
#include "SCCRevisionId.generated.h"

USTRUCT(BlueprintType)
struct FSCCRevisionId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID[5];
    
    TYPEDELEMENTFRAMEWORK_API FSCCRevisionId();
};

