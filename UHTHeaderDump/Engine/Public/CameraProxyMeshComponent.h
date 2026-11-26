#pragma once
#include "CoreMinimal.h"
#include "StaticMeshComponent.h"
#include "CameraProxyMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCameraProxyMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UCameraProxyMeshComponent(const FObjectInitializer& ObjectInitializer);

};

