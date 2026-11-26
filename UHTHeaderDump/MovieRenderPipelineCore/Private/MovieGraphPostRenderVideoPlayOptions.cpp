#include "MovieGraphPostRenderVideoPlayOptions.h"

FMovieGraphPostRenderVideoPlayOptions::FMovieGraphPostRenderVideoPlayOptions() {
    this->PlaybackMethod = EMovieGraphPlaybackMethod::OperatingSystem;
    this->JobPlayback = EMovieGraphJobPlaybackRange::FirstJobOnly;
    this->RenderLayerPlayback = EMovieGraphRenderLayerPlaybackRange::FirstRenderLayerOnly;
}

