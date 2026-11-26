#include "MoviePipelineImageSequenceOutput_EXR.h"

UMoviePipelineImageSequenceOutput_EXR::UMoviePipelineImageSequenceOutput_EXR() {
    this->Compression = EEXRCompressionFormat::PIZ;
    this->bMultilayer = true;
    this->bMultipart = false;
}


