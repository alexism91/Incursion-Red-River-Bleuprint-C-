#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_GetItemNameSpace.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetItemNameSpace : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasNameSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    CONTROLRIG_API FRigUnit_GetItemNameSpace();
};

