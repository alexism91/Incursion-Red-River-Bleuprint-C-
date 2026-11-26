#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFStaticMeshExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGLTFStaticMeshExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFStaticMeshExporter();

};

