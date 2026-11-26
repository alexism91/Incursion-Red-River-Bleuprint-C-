#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MVVMViewExtension.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=MVVMView)
class UMVVMViewExtension : public UObject {
    GENERATED_BODY()
public:
    UMVVMViewExtension();

};

