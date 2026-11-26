#pragma once
#include "CoreMinimal.h"
#include "RigControl.h"
#include "RigControlHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FRigControlHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigControl> Controls;
    
public:
    CONTROLRIG_API FRigControlHierarchy();
};

