#include "MovieGraphImagePassBaseNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MovieGraphShowFlags -FallbackName=MovieGraphShowFlags

UMovieGraphImagePassBaseNode::UMovieGraphImagePassBaseNode() {
    this->bOverride_ShowFlags = true;
    this->ShowFlags = CreateDefaultSubobject<UMovieGraphShowFlags>(TEXT("ShowFlags"));
}


