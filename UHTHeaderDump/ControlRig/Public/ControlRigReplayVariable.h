#pragma once
#include "CoreMinimal.h"
#include "ControlRigReplayVariable.generated.h"

USTRUCT(BlueprintType)
struct FControlRigReplayVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CPPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    CONTROLRIG_API FControlRigReplayVariable();
};

