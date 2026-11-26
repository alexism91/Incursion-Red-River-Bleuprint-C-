#pragma once
#include "CoreMinimal.h"
#include "ERigControlAxis.h"
#include "RigUnit_HierarchyAddControlInteger_LimitSettings.h"
#include "RigUnit_HierarchyAddControl_ProxySettings.h"
#include "RigUnit_HierarchyAddControl_Settings.h"
#include "RigUnit_HierarchyAddControl_ShapeSettings.h"
#include "RigUnit_HierarchyAddControlInteger_Settings.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigControlAxis PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* ControlEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;
    
    CONTROLRIG_API FRigUnit_HierarchyAddControlInteger_Settings();
};

