#include "MovieGraphSetMetadataAttributesNode.h"
#include "MovieGraphMetadataAttributeCollection.h"

UMovieGraphSetMetadataAttributesNode::UMovieGraphSetMetadataAttributesNode() {
    this->bOverride_MetadataAttributeCollection = true;
    this->MetadataAttributeCollection = CreateDefaultSubobject<UMovieGraphMetadataAttributeCollection>(TEXT("Metadata Attributes"));
}


