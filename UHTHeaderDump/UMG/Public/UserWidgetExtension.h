#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UserWidgetExtension.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, MinimalAPI, Within=UserWidget)
class UUserWidgetExtension : public UObject {
    GENERATED_BODY()
public:
    UUserWidgetExtension();

};

