#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "MeshMergeCullingVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AMeshMergeCullingVolume : public AVolume {
    GENERATED_BODY()
public:
    AMeshMergeCullingVolume(const FObjectInitializer& ObjectInitializer);

};

