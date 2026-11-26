#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReplicatedMovementInputInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UReplicatedMovementInputInterface : public UInterface {
    GENERATED_BODY()
};

class IReplicatedMovementInputInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddReplicatedRightMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddReplicatedForwardMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    
};

