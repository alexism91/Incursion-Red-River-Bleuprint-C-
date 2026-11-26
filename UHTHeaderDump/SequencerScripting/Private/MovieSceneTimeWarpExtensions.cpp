#include "MovieSceneTimeWarpExtensions.h"

UMovieSceneTimeWarpExtensions::UMovieSceneTimeWarpExtensions() {
}

double UMovieSceneTimeWarpExtensions::ToFixedPlayRate(const FMovieSceneTimeWarpVariant& TimeWarp) {
    return 0.0;
}

void UMovieSceneTimeWarpExtensions::SetFixedPlayRate(FMovieSceneTimeWarpVariant& TimeWarp, double FixedPlayRate) {
}

FMovieSceneTimeWarpVariant UMovieSceneTimeWarpExtensions::MakeTimeWarp(double FixedPlayRate) {
    return FMovieSceneTimeWarpVariant{};
}

double UMovieSceneTimeWarpExtensions::Conv_TimeWarpVariantToPlayRate(const FMovieSceneTimeWarpVariant& TimeWarp) {
    return 0.0;
}

FMovieSceneTimeWarpVariant UMovieSceneTimeWarpExtensions::Conv_PlayRateToTimeWarpVariant(double ConstantPlayRate) {
    return FMovieSceneTimeWarpVariant{};
}

void UMovieSceneTimeWarpExtensions::BreakTimeWarp(const FMovieSceneTimeWarpVariant& TimeWarp, double& FixedPlayRate) {
}


