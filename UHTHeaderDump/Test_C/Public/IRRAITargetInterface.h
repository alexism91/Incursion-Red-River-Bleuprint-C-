#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRRAITargetInterface.generated.h"

class AAIController;
class APawn;

UINTERFACE(Blueprintable)
class UIRRAITargetInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRAITargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APawn* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AAIController* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLastKnownLocation() const;
    
};

