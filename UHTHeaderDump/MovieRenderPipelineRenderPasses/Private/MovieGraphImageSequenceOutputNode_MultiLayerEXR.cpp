#include "MovieGraphImageSequenceOutputNode_MultiLayerEXR.h"

UMovieGraphImageSequenceOutputNode_MultiLayerEXR::UMovieGraphImageSequenceOutputNode_MultiLayerEXR() {
    this->FileNameFormat = TEXT("{sequence_name}.{frame_number}");
    this->bOverride_bMultiPart = false;
    this->bMultipart = false;
}


