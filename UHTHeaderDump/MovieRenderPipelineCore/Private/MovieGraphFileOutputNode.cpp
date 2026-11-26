#include "MovieGraphFileOutputNode.h"

UMovieGraphFileOutputNode::UMovieGraphFileOutputNode() {
    this->bOverride_FileNameFormat = false;
    this->FileNameFormat = TEXT("{sequence_name}.{layer_name}.{frame_number}");
}


