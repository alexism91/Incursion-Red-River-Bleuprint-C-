#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFSkeletalMeshExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGLTFSkeletalMeshExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFSkeletalMeshExporter();

};

