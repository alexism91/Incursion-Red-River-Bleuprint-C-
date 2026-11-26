#include "MediaPlayerOptions.h"

FMediaPlayerOptions::FMediaPlayerOptions() {
    this->TrackSelection = EMediaPlayerOptionTrackSelectMode::UseMediaPlayerDefaults;
    this->SeekTimeType = EMediaPlayerOptionSeekTimeType::Ignored;
    this->PlayOnOpen = EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting;
    this->Loop = EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting;
}

