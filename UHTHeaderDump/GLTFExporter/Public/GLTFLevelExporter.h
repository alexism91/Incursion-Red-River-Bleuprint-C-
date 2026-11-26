#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFLevelExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGLTFLevelExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFLevelExporter();

};

