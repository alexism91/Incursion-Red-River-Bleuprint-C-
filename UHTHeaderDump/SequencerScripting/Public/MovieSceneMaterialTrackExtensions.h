#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=ComponentMaterialInfo -FallbackName=ComponentMaterialInfo
#include "MovieSceneMaterialTrackExtensions.generated.h"

class UMovieSceneComponentMaterialTrack;

UCLASS(Blueprintable)
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneMaterialTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetMaterialInfo(UMovieSceneComponentMaterialTrack* Track, const FComponentMaterialInfo& MaterialInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialIndex(UMovieSceneComponentMaterialTrack* Track, const int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static FComponentMaterialInfo GetMaterialInfo(UMovieSceneComponentMaterialTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaterialIndex(UMovieSceneComponentMaterialTrack* Track);
    
};

