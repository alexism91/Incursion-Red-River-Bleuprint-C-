#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrack_TransformGroupAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation();

    UFUNCTION(BlueprintCallable)
    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
    
};

