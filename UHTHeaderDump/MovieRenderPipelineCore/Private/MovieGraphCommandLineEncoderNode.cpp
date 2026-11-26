#include "MovieGraphCommandLineEncoderNode.h"

UMovieGraphCommandLineEncoderNode::UMovieGraphCommandLineEncoderNode() {
    this->bOverride_FileNameFormat = false;
    this->bOverride_bDeleteSourceFiles = false;
    this->bOverride_bSkipEncodeOnRenderCanceled = false;
    this->bOverride_VideoCodec = false;
    this->bOverride_AudioCodec = false;
    this->bOverride_OutputFileExtension = false;
    this->bOverride_CommandLineFormat = false;
    this->bOverride_VideoInputStringFormat = false;
    this->bOverride_AudioInputStringFormat = false;
    this->bOverride_EncodeSettings = false;
    this->bOverride_bRetainInputTextFiles = false;
    this->FileNameFormat = TEXT("{sequence_name}");
    this->bDeleteSourceFiles = false;
    this->bSkipEncodeOnRenderCanceled = true;
    this->CommandLineFormat = TEXT("-hide_banner -y -loglevel error {VideoInputs} {AudioInputs} -acodec {AudioCodec} -vcodec {VideoCodec} {Quality} \"{OutputPath}\"");
    this->VideoInputStringFormat = TEXT("-f concat -safe 0 -i \"{InputFile}\" -r {FrameRate}");
    this->AudioInputStringFormat = TEXT("-f concat -safe 0 -i \"{InputFile}\"");
    this->EncodeSettings = TEXT("-crf 20");
    this->bRetainInputTextFiles = false;
}


