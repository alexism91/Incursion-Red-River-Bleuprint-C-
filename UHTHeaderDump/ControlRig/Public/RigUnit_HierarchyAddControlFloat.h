#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddControlElement.h"
#include "RigUnit_HierarchyAddControlFloat_Settings.h"
#include "RigUnit_HierarchyAddControlFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlFloat_Settings Settings;
    
    CONTROLRIG_API FRigUnit_HierarchyAddControlFloat();
};

