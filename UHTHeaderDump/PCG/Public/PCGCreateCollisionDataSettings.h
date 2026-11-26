#pragma once
#include "CoreMinimal.h"
#include "EPCGCollisionQueryFlag.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGCreateCollisionDataSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCreateCollisionDataSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CollisionAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCollisionQueryFlag CollisionQueryFlag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnIfAttributeCouldNotBeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPCGCreateCollisionDataSettings();

};

