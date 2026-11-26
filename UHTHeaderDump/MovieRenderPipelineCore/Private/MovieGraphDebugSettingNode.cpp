#include "MovieGraphDebugSettingNode.h"

UMovieGraphDebugSettingNode::UMovieGraphDebugSettingNode() {
    this->bOverride_bCaptureFramesWithRenderDoc = false;
    this->bOverride_RenderDocCaptureFrame = false;
    this->bOverride_bCaptureUnrealInsightsTrace = false;
    this->bOverride_UnrealInsightsTraceFileNameFormat = false;
    this->bCaptureFramesWithRenderDoc = false;
    this->RenderDocCaptureFrame = 0;
    this->bCaptureUnrealInsightsTrace = false;
    this->UnrealInsightsTraceFileNameFormat = TEXT("{sequence_name}_UnrealInsights");
}


