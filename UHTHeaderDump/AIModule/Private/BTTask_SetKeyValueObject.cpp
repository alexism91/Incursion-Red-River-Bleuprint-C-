#include "BTTask_SetKeyValueObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object

UBTTask_SetKeyValueObject::UBTTask_SetKeyValueObject() {
    this->NodeName = TEXT("Set Object Key");
    this->BaseClass = UObject::StaticClass();
}


