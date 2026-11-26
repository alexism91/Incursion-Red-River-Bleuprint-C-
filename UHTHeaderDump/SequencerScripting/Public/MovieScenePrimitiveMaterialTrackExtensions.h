#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=ComponentMaterialInfo -FallbackName=ComponentMaterialInfo
#include "MovieScenePrimitiveMaterialTrackExtensions.generated.h"

class UMovieScenePrimitiveMaterialTrack;

UCLASS(Blueprintable)
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieScenePrimitiveMaterialTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetMaterialInfo(UMovieScenePrimitiveMaterialTrack* Track, const FComponentMaterialInfo& MaterialInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialIndex(UMovieScenePrimitiveMaterialTrack* Track, const int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static FComponentMaterialInfo GetMaterialInfo(UMovieScenePrimitiveMaterialTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaterialIndex(UMovieScenePrimitiveMaterialTrack* Track);
    
};

