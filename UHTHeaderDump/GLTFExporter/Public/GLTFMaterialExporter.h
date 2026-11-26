#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFMaterialExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGLTFMaterialExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFMaterialExporter();

};

