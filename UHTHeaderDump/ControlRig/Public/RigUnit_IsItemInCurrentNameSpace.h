#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_IsItemInCurrentNameSpace.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_IsItemInCurrentNameSpace : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    CONTROLRIG_API FRigUnit_IsItemInCurrentNameSpace();
};

