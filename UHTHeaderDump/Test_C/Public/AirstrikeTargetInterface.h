#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AirstrikeAimPoint.h"
#include "AirstrikeTargetInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UAirstrikeTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IAirstrikeTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStrikeCalledIn(APawn* CalledInBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FAirstrikeAimPoint> GetStrikeAimPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetStrikeAimLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeStruck() const;
    
};

