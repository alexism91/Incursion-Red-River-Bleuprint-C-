#include "MovieGraphPostRenderImageSequencePlayOptions.h"

FMovieGraphPostRenderImageSequencePlayOptions::FMovieGraphPostRenderImageSequencePlayOptions() {
    this->FrameRangeNotation = EMovieGraphFrameRangeNotation::HashWithStartEndFrame;
    this->PlaybackRange = EMovieGraphImageSequencePlaybackRange::FirstFrameOnly;
}

