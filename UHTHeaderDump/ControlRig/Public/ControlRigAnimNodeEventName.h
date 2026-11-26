#pragma once
#include "CoreMinimal.h"
#include "ControlRigAnimNodeEventName.generated.h"

USTRUCT(BlueprintType)
struct FControlRigAnimNodeEventName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    CONTROLRIG_API FControlRigAnimNodeEventName();
};

