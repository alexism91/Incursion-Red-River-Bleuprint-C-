#include "BTTask_SetKeyValueClass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object

UBTTask_SetKeyValueClass::UBTTask_SetKeyValueClass() {
    this->NodeName = TEXT("Set Class Key");
    this->BaseClass = UObject::StaticClass();
}


