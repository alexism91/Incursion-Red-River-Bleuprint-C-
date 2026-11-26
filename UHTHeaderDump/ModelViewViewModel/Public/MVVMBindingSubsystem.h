#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MVVMBindingSubsystem.generated.h"

UCLASS(Blueprintable)
class UMVVMBindingSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UMVVMBindingSubsystem();

};

