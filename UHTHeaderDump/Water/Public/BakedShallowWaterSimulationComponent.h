#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "ShallowWaterSimulationGrid.h"
#include "BakedShallowWaterSimulationComponent.generated.h"

class AWaterBody;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBakedShallowWaterSimulationComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShallowWaterSimulationGrid SimulationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AWaterBody>> WaterBodies;
    
    UBakedShallowWaterSimulationComponent(const FObjectInitializer& ObjectInitializer);

};

