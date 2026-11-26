#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFAnimSequenceExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGLTFAnimSequenceExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFAnimSequenceExporter();

};

