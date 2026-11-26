#include "SensorSight_Extended.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=EOnSenseEvent -FallbackName=EOnSenseEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=ESensorThreadType -FallbackName=ESensorThreadType

USensorSight_Extended::USensorSight_Extended() {
    this->SensorTag = TEXT("SensorSight");
    this->SensorThreadType = ESensorThreadType::Async_Task;
    this->DetectDepth = EOnSenseEvent::SenseCurrent;
    this->CallStimulusFlag = 1;
    this->ChannelSetup.AddDefaulted(1);
    this->SensorTests.AddDefaulted(2);
}


