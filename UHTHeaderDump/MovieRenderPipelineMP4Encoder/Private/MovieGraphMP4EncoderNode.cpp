#include "MovieGraphMP4EncoderNode.h"

UMovieGraphMP4EncoderNode::UMovieGraphMP4EncoderNode() {
    this->bOverride_EncodingRateControl = false;
    this->bOverride_AverageBitrateInMbps = false;
    this->bOverride_MaxBitrateInMbps = false;
    this->bOverride_ConstantRateFactor = false;
    this->bOverride_EncodingProfile = false;
    this->bOverride_EncodingLevel = false;
    this->bOverride_bIncludeAudio = false;
    this->bOverride_OCIOConfiguration = false;
    this->bOverride_OCIOContext = false;
    this->EncodingRateControl = EMoviePipelineMP4EncodeRateControlMode::VariableBitRate;
    this->AverageBitrateInMbps = 8.00f;
    this->MaxBitrateInMbps = 16.00f;
    this->ConstantRateFactor = 20;
    this->EncodingProfile = EMoviePipelineMP4EncodeProfile::High;
    this->EncodingLevel = EMoviePipelineMP4EncodeLevel::Auto;
    this->bIncludeAudio = true;
}


