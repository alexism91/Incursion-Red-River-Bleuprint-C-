#include "MovieGraphCameraSettingNode.h"

UMovieGraphCameraSettingNode::UMovieGraphCameraSettingNode() {
    this->bOverride_ShutterTiming = false;
    this->bOverride_OverscanPercentage = false;
    this->bOverride_bRenderAllCameras = false;
    this->ShutterTiming = EMoviePipelineShutterTiming::FrameCenter;
    this->OverscanPercentage = 0.00f;
    this->bRenderAllCameras = false;
}


