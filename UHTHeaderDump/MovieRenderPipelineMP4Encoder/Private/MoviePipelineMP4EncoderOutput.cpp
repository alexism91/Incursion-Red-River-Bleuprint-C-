#include "MoviePipelineMP4EncoderOutput.h"

UMoviePipelineMP4EncoderOutput::UMoviePipelineMP4EncoderOutput() {
    this->EncodingRateControl = EMoviePipelineMP4EncodeRateControlMode::Quality;
    this->AverageBitrateInMbps = 8.00f;
    this->MaxBitrateInMbps = 16.00f;
    this->ConstantRateFactor = 20;
    this->EncodingProfile = EMoviePipelineMP4EncodeProfile::High;
    this->EncodingLevel = EMoviePipelineMP4EncodeLevel::Auto;
    this->bIncludeAudio = true;
}


