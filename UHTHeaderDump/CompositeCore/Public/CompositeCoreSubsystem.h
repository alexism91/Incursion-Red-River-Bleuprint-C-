#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "CompositeCoreSubsystem.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UCompositeCoreSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UCompositeCoreSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterPrimitive(UPrimitiveComponent* InPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPrimitive(UPrimitiveComponent* InPrimitiveComponent);
    
};

