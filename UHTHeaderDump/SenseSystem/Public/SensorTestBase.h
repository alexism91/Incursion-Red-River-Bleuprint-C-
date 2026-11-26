#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SensorTestBase.generated.h"

class USensorBase;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API USensorTestBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScore;
    
    USensorTestBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitializeFromSensorBP(USensorBase* Sensor);
    
};

