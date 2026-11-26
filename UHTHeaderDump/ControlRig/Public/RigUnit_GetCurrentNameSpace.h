#pragma once
#include "CoreMinimal.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_GetCurrentNameSpace.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetCurrentNameSpace : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    CONTROLRIG_API FRigUnit_GetCurrentNameSpace();
};

