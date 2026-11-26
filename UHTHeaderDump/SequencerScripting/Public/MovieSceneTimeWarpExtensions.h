#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTimeWarpVariant -FallbackName=MovieSceneTimeWarpVariant
#include "MovieSceneTimeWarpExtensions.generated.h"

UCLASS(Blueprintable)
class UMovieSceneTimeWarpExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneTimeWarpExtensions();

    UFUNCTION(BlueprintPure)
    static double ToFixedPlayRate(const FMovieSceneTimeWarpVariant& TimeWarp);
    
    UFUNCTION(BlueprintPure)
    static void SetFixedPlayRate(UPARAM(Ref) FMovieSceneTimeWarpVariant& TimeWarp, double FixedPlayRate);
    
    UFUNCTION(BlueprintPure)
    static FMovieSceneTimeWarpVariant MakeTimeWarp(double FixedPlayRate);
    
    UFUNCTION(BlueprintPure)
    static double Conv_TimeWarpVariantToPlayRate(const FMovieSceneTimeWarpVariant& TimeWarp);
    
    UFUNCTION(BlueprintPure)
    static FMovieSceneTimeWarpVariant Conv_PlayRateToTimeWarpVariant(double ConstantPlayRate);
    
    UFUNCTION(BlueprintPure)
    static void BreakTimeWarp(const FMovieSceneTimeWarpVariant& TimeWarp, double& FixedPlayRate);
    
};

