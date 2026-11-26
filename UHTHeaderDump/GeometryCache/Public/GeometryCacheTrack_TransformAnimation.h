#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrack_TransformAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UDEPRECATED_GeometryCacheTrack_TransformAnimation();

    UFUNCTION(BlueprintCallable)
    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
    
};

