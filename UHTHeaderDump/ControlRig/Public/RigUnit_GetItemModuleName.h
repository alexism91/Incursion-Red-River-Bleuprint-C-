#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_GetItemModuleName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetItemModuleName : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPartOfModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Module;
    
    CONTROLRIG_API FRigUnit_GetItemModuleName();
};

