#include "MovieGraphCollectionNode.h"
#include "MovieGraphCollection.h"

UMovieGraphCollectionNode::UMovieGraphCollectionNode() {
    this->bOverride_Collection = true;
    this->Collection = CreateDefaultSubobject<UMovieGraphCollection>(TEXT("Collection"));
}


