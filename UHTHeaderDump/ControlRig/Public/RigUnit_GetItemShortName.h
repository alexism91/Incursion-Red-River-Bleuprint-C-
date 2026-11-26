#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_GetItemShortName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetItemShortName : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShortName;
    
    CONTROLRIG_API FRigUnit_GetItemShortName();
};

