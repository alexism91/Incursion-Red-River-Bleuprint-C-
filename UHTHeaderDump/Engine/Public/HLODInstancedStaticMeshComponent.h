#pragma once
#include "CoreMinimal.h"
#include "InstancedStaticMeshComponent.h"
#include "HLODInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown, MinimalAPI, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHLODInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UHLODInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

