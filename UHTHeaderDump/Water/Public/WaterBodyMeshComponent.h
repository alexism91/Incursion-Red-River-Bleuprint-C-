#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "WaterBodyMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWaterBodyMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UWaterBodyMeshComponent(const FObjectInitializer& ObjectInitializer);

};

