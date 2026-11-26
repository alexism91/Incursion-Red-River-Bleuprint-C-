#pragma once
#include "CoreMinimal.h"
#include "ComponentMaterialInfo.h"
#include "MovieScenePropertyTrack.h"
#include "MovieScenePrimitiveMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentMaterialInfo MaterialInfo;
    
public:
    UMovieScenePrimitiveMaterialTrack();

};

