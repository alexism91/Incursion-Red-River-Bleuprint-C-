#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SensorTraceTest -FallbackName=SensorTraceTest
#include "SensorTraceTest_Extended.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USensorTraceTest_Extended : public USensorTraceTest {
    GENERATED_BODY()
public:
    USensorTraceTest_Extended();

};

