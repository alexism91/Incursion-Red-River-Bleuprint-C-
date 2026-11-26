#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LXRSilhouette.generated.h"

UINTERFACE(Blueprintable)
class ULXRSilhouette : public UInterface {
    GENERATED_BODY()
};

class ILXRSilhouette : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSilhouetteTraceLocationAndDirection(FVector& Location, FRotator& Rotator);
    
};

