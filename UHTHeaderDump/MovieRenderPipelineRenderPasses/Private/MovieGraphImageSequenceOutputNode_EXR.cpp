#include "MovieGraphImageSequenceOutputNode_EXR.h"

UMovieGraphImageSequenceOutputNode_EXR::UMovieGraphImageSequenceOutputNode_EXR() {
    this->bOverride_Compression = false;
    this->Compression = EEXRCompressionFormat::PIZ;
}


