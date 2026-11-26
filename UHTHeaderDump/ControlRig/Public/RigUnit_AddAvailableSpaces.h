#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyWithLabel.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_AddAvailableSpaces.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AddAvailableSpaces : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKeyWithLabel> Spaces;
    
    CONTROLRIG_API FRigUnit_AddAvailableSpaces();
};

