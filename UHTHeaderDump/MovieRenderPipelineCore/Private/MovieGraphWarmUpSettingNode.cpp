#include "MovieGraphWarmUpSettingNode.h"

UMovieGraphWarmUpSettingNode::UMovieGraphWarmUpSettingNode() {
    this->bOverride_NumWarmUpFrames = false;
    this->bOverride_bEmulateMotionBlur = false;
    this->NumWarmUpFrames = 0;
    this->bEmulateMotionBlur = false;
}


