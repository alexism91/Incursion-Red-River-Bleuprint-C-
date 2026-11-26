#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MVVMViewClassExtension.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=MVVMViewClass)
class UMVVMViewClassExtension : public UObject {
    GENERATED_BODY()
public:
    UMVVMViewClassExtension();

};

