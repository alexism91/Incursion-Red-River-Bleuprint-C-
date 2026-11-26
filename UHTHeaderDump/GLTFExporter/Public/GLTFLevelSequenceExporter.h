#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFLevelSequenceExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGLTFLevelSequenceExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFLevelSequenceExporter();

};

