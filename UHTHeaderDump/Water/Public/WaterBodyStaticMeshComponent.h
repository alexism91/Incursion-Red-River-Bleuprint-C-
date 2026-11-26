#pragma once
#include "CoreMinimal.h"
#include "WaterBodyMeshComponent.h"
#include "WaterBodyStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent {
    GENERATED_BODY()
public:
    UWaterBodyStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

