#pragma once
#include "CoreMinimal.h"
#include "RigUnit_LiveLinkBase.h"
#include "RigUnit_LiveLinkEvaluateBasicValue.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_LiveLinkEvaluateBasicValue : public FRigUnit_LiveLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    LIVELINKCONTROLRIG_API FRigUnit_LiveLinkEvaluateBasicValue();
};

