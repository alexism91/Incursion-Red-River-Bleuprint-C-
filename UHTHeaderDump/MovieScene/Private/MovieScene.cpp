#include "MovieScene.h"

UMovieScene::UMovieScene() {
    this->CameraCutTrack = NULL;
    this->CustomClock = NULL;
    this->EvaluationType = EMovieSceneEvaluationType::WithSubFrames;
    this->ClockSource = EUpdateClockSource::Tick;
}


