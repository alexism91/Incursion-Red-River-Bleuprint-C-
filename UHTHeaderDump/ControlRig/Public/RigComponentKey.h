#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigComponentKey.generated.h"

USTRUCT(BlueprintType)
struct FRigComponentKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey ElementKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    CONTROLRIG_API FRigComponentKey();
};

