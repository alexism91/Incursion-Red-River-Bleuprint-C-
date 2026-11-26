#pragma once
#include "CoreMinimal.h"
#include "ESenseTestResult.h"
#include "SensorTestBase.h"
#include "SensorBoolTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorBoolTest : public USensorTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESenseTestResult TestResult;
    
    USensorBoolTest();

};

