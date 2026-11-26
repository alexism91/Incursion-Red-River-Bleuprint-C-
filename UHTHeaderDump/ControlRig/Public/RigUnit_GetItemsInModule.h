#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_GetItemsInModule.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetItemsInModule : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType TypeToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    CONTROLRIG_API FRigUnit_GetItemsInModule();
};

