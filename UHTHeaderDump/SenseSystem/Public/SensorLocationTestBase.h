#pragma once
#include "CoreMinimal.h"
#include "SensorTestBase.h"
#include "SensorLocationTestBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API USensorLocationTestBase : public USensorTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestBySingleLocation;
    
    USensorLocationTestBase();

};

