#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyWithLabel.generated.h"

USTRUCT(BlueprintType)
struct FRigElementKeyWithLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    CONTROLRIG_API FRigElementKeyWithLabel();
};

