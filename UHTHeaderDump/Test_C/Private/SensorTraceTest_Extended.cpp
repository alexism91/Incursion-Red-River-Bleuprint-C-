#include "SensorTraceTest_Extended.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=ETraceTestParam -FallbackName=ETraceTestParam

USensorTraceTest_Extended::USensorTraceTest_Extended() {
    this->bTestBySingleLocation = false;
    this->TraceTestParam = ETraceTestParam::MultiTraceTest;
    this->bTraceComplex = true;
}


