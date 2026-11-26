#include "MovieGraphGlobalOutputSettingNode.h"

UMovieGraphGlobalOutputSettingNode::UMovieGraphGlobalOutputSettingNode() {
    this->bOverride_OutputDirectory = false;
    this->bOverride_OutputResolution = false;
    this->bOverride_AdaptResolution = false;
    this->bOverride_OutputFrameRate = false;
    this->bOverride_bOverwriteExistingOutput = false;
    this->bOverride_ZeroPadFrameNumbers = false;
    this->bOverride_FrameNumberOffset = false;
    this->bOverride_HandleFrameCount = false;
    this->bOverride_CustomPlaybackRangeStartFrame = false;
    this->bOverride_CustomPlaybackRangeEndFrame = false;
    this->bOverride_CustomPlaybackRangeStart = false;
    this->bOverride_CustomPlaybackRangeEnd = false;
    this->bOverride_CustomTimecodeStart = false;
    this->bOverride_bDropFrameTimecode = false;
    this->bOverride_VersioningSettings = false;
    this->bOverride_bFlushDiskWritesPerShot = false;
    this->AdaptResolution = EMovieGraphAspectRatioAdaptBehavior::Disabled;
    this->bOverwriteExistingOutput = true;
    this->ZeroPadFrameNumbers = 4;
    this->FrameNumberOffset = 0;
    this->HandleFrameCount = 0;
    this->bDropFrameTimecode = true;
    this->bFlushDiskWritesPerShot = false;
    this->CustomPlaybackRangeStartFrame = 0;
    this->CustomPlaybackRangeEndFrame = 0;
}


