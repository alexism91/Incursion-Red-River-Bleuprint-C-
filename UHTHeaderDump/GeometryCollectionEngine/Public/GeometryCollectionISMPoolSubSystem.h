#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "GeometryCollectionISMPoolSubSystem.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UGeometryCollectionISMPoolSubSystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> reason);
    
};

