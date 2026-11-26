#pragma once
#include "CoreMinimal.h"
#include "InstancedSkinnedMeshComponent.h"
#include "HLODInstancedSkinnedMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown, MinimalAPI, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHLODInstancedSkinnedMeshComponent : public UInstancedSkinnedMeshComponent {
    GENERATED_BODY()
public:
    UHLODInstancedSkinnedMeshComponent(const FObjectInitializer& ObjectInitializer);

};

