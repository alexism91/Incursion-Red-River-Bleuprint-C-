#pragma once
#include "CoreMinimal.h"
#include "PreviewMesh.h"
#include "PolyEditPreviewMesh.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditPreviewMesh : public UPreviewMesh {
    GENERATED_BODY()
public:
    UPolyEditPreviewMesh();

};

