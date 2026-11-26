#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EComponentPhysicsStateChange.h"
#include "AutoRTFMTestObject.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UAutoRTFMTestObject : public UObject {
    GENERATED_BODY()
public:
    UAutoRTFMTestObject();

    UFUNCTION(BlueprintCallable)
    void OnComponentPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
};

