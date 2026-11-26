#pragma once
#include "CoreMinimal.h"
#include "ERigControlVisibility.h"
#include "RigElementKey.h"
#include "RigUnit_HierarchyAddControl_ProxySettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddControl_ProxySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> DrivenControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigControlVisibility ShapeVisibility;
    
    CONTROLRIG_API FRigUnit_HierarchyAddControl_ProxySettings();
};

